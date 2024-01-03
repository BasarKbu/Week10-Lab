#include<stdio.h>
#include<math.h>
int main(){
	float number,array[20],square;
	int cnt=0;
	while(1){
		printf("Enter a number: \n"); scanf("%f",&number);
	if(number == -1)	
		break;
	else{
	square=pow(number,2);	
	array[cnt]=number;
	}	
	printf("Square of the element is:%f \n",square);
	cnt++;
	}
	
	

	
	return 0;
}
