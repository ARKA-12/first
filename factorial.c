#include<stdio.h>
int long find_factorial(int);
int main()
{

	int fact,n;
	printf("Enter the no :");
	scanf("%d",&n);
	fact=find_factorial(n);
	printf("The fatorial of %d is : %d",n,fact);
	return 0;
}

int long find_factorial(int n)
{
	if(n==0)
		return 1;
	else
		return (n*find_factorial(n-1));
}