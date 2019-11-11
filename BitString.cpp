//
// Created by shil on 28.09.19.
//
#include "BitString.h"
#include <climits>

char ZERO = '0';
char ONE = '1';

int ULONG_MIN = 0;

 unsigned long binPow(int p) {
        if(!p) return 1;
        p--;
        return 2 << p;
}

int BitString::callCount = 0;

int BitString::strLen(char *str) {
    const char *eos = str;
    while(*eos++);
    return eos - str - 1;
}

unsigned long convertPartOfString(const char *str, int start, int end) {
    unsigned long b = 0;
    for(int i = start, pow = 0; i >= end; i--, pow++) {
        if (str[i] != '1') {
            continue;
        }
        b += binPow(pow);
    }
    return b;
};


void BitString::strToNumber(char *str) {
    begining = new unsigned long(0);
    end = new unsigned long(0);
    int length1 = strLen(str);
    int length2 = -1;
    if(length1 > 64) {
        length1 = 64;
    }
    if(length1 > 32) {
        length2 = length1 - 32;
    }

    *begining = convertPartOfString(str, length1 - 1, length2);

    *end = convertPartOfString(str, length2 - 1, -1);
}

char *BitString::print() {
    str[64] = 0;
    unsigned long div = *begining;
    int mod;
    for(int i = 63; i >= 32; i--) {
        mod = div % 2;
        div /= 2;
        if(!div) {
            str[i] = ZERO;
        }
        str[i] = mod + ZERO;
        if(div == 1) {
            str[i - 1] = ONE;
        }
    }
    div = *end;
    for(int i = 31; i >= 0; i--) {
        mod = div % 2;
        div /= 2;
        if(!div) {
            str[i] = ZERO;
        }
        str[i] = mod + ZERO;
        if(div == 1) {
            str[i - 1] = ONE;
        }
    }
    return str;
}

BitString::BitString() {
    BitString::callCount = BitString::callCount + 1;
    begining = new unsigned long(0);
    end = new unsigned long(0);
}

BitString::BitString(char *str) {
    BitString::callCount = BitString::callCount + 1;
    strToNumber(str);
}

BitString::BitString(const BitString &inputSting) {
    begining = new unsigned long(*inputSting.begining);
    end = new unsigned long(*inputSting.end);
}

BitString BitString::And(BitString &inputString) {
    unsigned long firstPart = *begining & *inputString.begining;
    unsigned long secondPart = *end & *inputString.end;
    return BitString(firstPart, secondPart);
}

BitString::BitString(unsigned long firstPart, unsigned long secondPart) {
    begining = new unsigned long(firstPart);
    end = new unsigned long(secondPart);
}

BitString BitString::Or(BitString &inputString) {
    unsigned long firstPart = *begining | *inputString.begining;
    unsigned long secondPart = *end | *inputString.end;
    return BitString(firstPart, secondPart);
}

BitString BitString::Xor(BitString &inputString) {
    unsigned long firstPart = *begining ^ *inputString.begining;
    unsigned long secondPart = *end ^ *inputString.end;
    return BitString(firstPart, secondPart);
}

BitString BitString::Not() {
    unsigned long firstPart = ~ *begining;
    unsigned long secondPart = ~ *end;
    return BitString(firstPart, secondPart);
}

int BitString::getCallCount() {
    return BitString::callCount;
}

BitString::~BitString() {
    delete begining;
    delete end;
}

BitString &BitString::operator=(const BitString &right) {
    if (this == &right) {
        return *this;
    }
    memcpy(begining, right.begining, sizeof(unsigned long));
    memcpy(end, right.end, sizeof(unsigned long));
    return *this;
}

BitString BitString::operator&(BitString &inputString) {
    return And(inputString);
}

BitString BitString::operator|(BitString &inputString) {
    return Or(inputString);
}

BitString BitString::operator^(BitString &inputString) {
    return Xor(inputString);
}

BitString BitString::operator~() {
    return Not();
}

BitString BitString::operator+(BitString &inputString) {
    unsigned long newBegining = *begining + *inputString.begining;
    unsigned long newEnd = *end + *inputString.end;
    if (newBegining < *begining || newBegining < *inputString.begining) {
        newEnd += 1;
    }
    if(newEnd < *end || newEnd < *inputString.end) {
        return BitString(ULONG_MAX, ULONG_MAX);
    }

    return BitString(newBegining, newEnd);
}

BitString BitString::operator-(BitString &inputString) {
    unsigned long newBegining = *begining - *inputString.begining;
    unsigned long newEnd = *end - *inputString.end;
    if (newBegining > *begining) {
        newEnd -= 1;
    }
    if(newEnd > *end) {
        newEnd = ULONG_MIN;
        newBegining = ULONG_MIN;
    }
    return BitString(newBegining, newEnd);
}

BitString::operator char *() {
    return print();
}

