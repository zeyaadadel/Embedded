#include <stdio.h>
#include<string.h>

unsigned int convertToUInt(char* asciiArr, int length) {
    unsigned int result = 0;
    for (int i = 0; i < length; i++) {
        result = result * 10 + (asciiArr[i] - 0x30);
    }
    return result;
}

int main() {
    char asciiArr[10];
    int length,i;
    printf("Enter Ascii array value: ");
    fflush(stdin); fflush(stdout);
    scanf("%s",&asciiArr[i]);
    length = strlen(asciiArr);
    unsigned int number = convertToUInt(asciiArr, length);
    printf("Converted number: %u\n", number);
    return 0;
}
