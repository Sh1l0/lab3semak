//
// Created by shil on 28.09.19.
//

#ifndef BITSTRING_BITSTRING_H
#define BITSTRING_BITSTRING_H
#include <iostream>

class BitString {
        unsigned long *begining;

        unsigned long *end;

        int strLen(char *str);

        void strToNumber(char str[]);

        static int callCount;

        char str[65];

    public:
        BitString();

        BitString(char str[]);

        BitString(unsigned long firstPart, unsigned long secondPart);

        BitString(const BitString &inputSting);

        ~BitString();

        BitString And(BitString &inputString);

        BitString Or(BitString &inputString);

        BitString Xor(BitString &inputString);

        BitString Not();

        BitString&operator=(const BitString &right);

        BitString operator&(BitString &inputString);

        BitString operator|(BitString &inputString);

        BitString operator^(BitString &inputString);

        BitString operator+(BitString &inputString);

        BitString operator-(BitString &inputString);

        BitString operator~();

        explicit operator char* ();



        char *print();

        static int getCallCount();
};

#endif //BITSTRING_BITSTRING_H
