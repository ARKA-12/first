#include<stdio.h>
int reverse(int);
int main()
{
	int n,sum;
	printf("Enter any integer value: ");
	scanf("%d",&n);
	sum=reverse(n);
	if (sum==n)
		printf("The value %d is a pallindrom no.",n);
	else
		printf("The vlaue %d is not a pallindrom no.",n);
	return 0;
}
int reverse(int n)
{
	int rem;
	static int sum=0;
	if(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		reverse(n/10);
	}
	return (sum);
}