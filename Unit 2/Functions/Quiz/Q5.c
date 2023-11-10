#include<stdio.h>

int clearbit(int x,int pos){
    
	return x &= (1<<pos);
	
}
int main(){
    int x,pos;
	
	printf("Enter Number:");
	scanf("%d",&x);
	printf("Bit position:");
	scanf("%d",&pos);
	
	printf("Result = %d",clearbit(x,pos));
}