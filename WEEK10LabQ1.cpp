#include<stdio.h>

int main(){
float array[8],average=0;	
	int i;
	for(i=0;i<8;i++){
		printf("%d. element is: \n",i+1); scanf("%f",&array[i]);
		average+=array[i];
	}
	
	average=average/8.0;
	printf("The average is:%f",average);
	return 0;
}
