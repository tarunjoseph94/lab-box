#include<stdio.h>
void main(){
	int n1,n2,n3=0,lim,flag=0;
	printf("Enter Starting Number: ");
	scanf("%d",&n1);
	n2=n1+1;
	do{
		if(flag++)
		printf("\nPlease enter Limit Greater than Starting Number+2\n\n");
		printf("Enter Last Number(>Start+2): ");
		scanf("%d",&lim);
	}while(lim<(n2+2));
	printf("\n\n");
	printf("Fibinocci Series from %d to %d are,\n\t",n1,lim);
	printf("%d\t%d\t",n1,n2);
	n3 = n1 + n2;
	while(n3<lim){
		n3 = n1 + n2;
		printf("%d\t",n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n\n");
}
