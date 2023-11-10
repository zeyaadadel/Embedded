int checkpower3(int n) {
    if (n == 1) {
        return 0;
    }
    while (n > 1) {
        if (n % 3 != 0) {
            return 1;
        }
        n = n / 3;
    }
    return (n == 1) ? 0 : 1;
}
int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d ==> %d",n,checkpower3(n));
}