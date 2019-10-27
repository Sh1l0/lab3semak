//
// Created by shil on 19.09.19.
//

char *getString() {
    int size = 1;
    char *str = (char*) malloc(size * sizeof(char));
    char letter;
    std::cin >> letter;
    int current = size;
    int index = 0;
    while (letter != '\n') {
        if(letter != '0' && letter != '1') {
            letter = getchar();
            continue;
        }
        size++;
        if(size > current) {
            current *= 2;
            str = (char*) realloc(str, sizeof(char) * current);
        }
        str[index] = letter;
        index++;
        letter = getchar();

    }

    return str;
}