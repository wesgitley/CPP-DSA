#include <iostream>

char getCharacterCase(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return 'U';
    else if (ch >= 'a' && ch <= 'z')
        return 'L';
    else
        return 'N';
}





