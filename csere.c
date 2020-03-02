#include <stdio.h>


	

	
int main()
{

    int a = 7;
    int b = 5;
	int c;

    printf("a= %d",a);
    printf(" b= %d",b);
    printf("\n");


    	a=a+b;
	b=a-b;
	a=a-b;
	printf("a= %d",a);
    printf(" b= %d",b);
    printf("\n");



	a=a-b;
	b=a+b;
	a=b-a;
	printf("a= %d",a);
    printf(" b= %d",b);
    printf("\n");



	a=a*b;
	b=a/b;
	a=a/b;
	printf("a= %d",a);
    printf(" b= %d",b);
    printf("\n");


	a = a ^ b;
    	b = a ^ b;
    	a = a ^ b;

printf("a= %d",a);
    printf(" b= %d",b);
    printf("\n");

 	
}
