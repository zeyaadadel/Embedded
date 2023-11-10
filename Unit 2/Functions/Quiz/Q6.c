#include <stdio.h>

void decToBinary(int n) {
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

int main() {
    int Num,bit;
    printf("Enter a decimal number: ");
    scanf("%d", &Num);
    printf("%d in binary representation is: ",Num);
    decToBinary(Num);
    bit = (Num >> 3) & 1;
    printf("\n4th least signifcant bit is: %d",bit);
    
    return 0;
}