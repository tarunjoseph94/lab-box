#include<stdio.h>
void main(){
	int n, sum=0, temp;
	printf("Enter a 4 Digit Number: ");
	scanf("%4d",&n);
	temp=n;
	sum+=temp%10;
	temp/=10;
	sum+=temp%10;
	temp/=10;
	sum+=temp%10;
	temp/=10;
	sum+=temp%10;
	temp/=10;
	printf("\nSum of Individual Digits in %d is %d\n\n",n,sum);
}
