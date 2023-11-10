int lastocc(int arr[],int size,int x) {
    int indx= -1;
    
    for (int i=0;i<size;i++)
    {
        if (arr[i]==x)
        {
            indx=i+1;
        }
    }
    return indx;
}
int main (){
    int arr[100],size,x,i;
    
    printf("Enter the size of array: ");
    scanf("%d",&size);
    for (i=0;i<size;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("\nLast occurrence is %d",lastocc(arr,size,x));
    
}