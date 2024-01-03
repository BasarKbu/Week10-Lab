#include<stdio.h>

int main(){
	int number,array[5],cnt=0,i;
	printf("Pls enter a number at most has five digits: \n");
	printf("Enter the number: \n"); scanf("%d",&number);
	//it will give from last to the first digit.
	while(number!=0){
		array[cnt]=number % 10;
		cnt++;
		number=number/10;
	}
	
	for(i=0;i<cnt;i++){
		printf("%d ",array[i]);
	}
	
	return 0;
}
