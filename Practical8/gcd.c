#include<stdio.h>
#include<stdlib.h>

	int iterative(int a,int b){
	int temp;
	while(b!=0){
	temp=b;
	b=a%b;
	a=temp;
	}
	return a;

}
	int recursive(int a,int b){
	if(b==0){
	return a;}
	else{
	return recursive(b,a%b);}
}

int main(int a, int b){
	printf("Enter 2 numbers");
	scanf("%d %d",&a,&b);
	printf(" Iterative GCD of %d %d is %d \n",a,b,iterative(a,b));
	printf("Recursive GCD of %d %d is %d \n",a,b,recursive(a,b));
	if(a<0 || b<0){
	printf("Numbers should be positive");
	return 1;}
	return 0;	
}
