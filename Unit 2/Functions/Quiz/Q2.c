#include <stdio.h>
#define MAX 100

int main() {
    int arr1[MAX], arr2[MAX], temp[MAX];
    int i, j, n1, n2;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of the first array: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of the second array: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    if (n1 < n2) {
        for (i = 0; i < n2; i++) {
            if (i < n1)
                temp[i] = arr1[i];
            arr1[i] = arr2[i];
        }
        for (j = n1; j < n2; j++)
            arr1[j] = temp[j-n1];
    }
    else {
        for (i = 0; i < n1; i++) {
            if (i < n2)
                temp[i] = arr2[i];
            arr2[i] = arr1[i];
        }
        for (j = n2; j < n1; j++)
            arr2[j] = temp[j-n2];
    }

    printf("The first array after swapping: ");
    for (i = 0; i < n1; i++)
        printf("%d ", arr1[i]);

    printf("\nThe second array after swapping: ");
    for (i = 0; i < n2; i++)
        printf("%d ", arr2[i]);

    return 0;
}