#include<stdio.h>
void sort();
void swap();
int main()
{
	int i,j,n,a[40];
	printf("Enter the no of elemets:\n");
	scanf("%d",&n);
	printf("Enter the array elemets:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("The sorted array is :");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
	
	return 0;
}


void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<=n-i;j++){
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);
					}
			}

			
}
