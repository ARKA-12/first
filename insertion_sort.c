#include<stdio.h>
int main()
{
	int i,j,a[100],n;
	printf("Enter the no of element:\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,n);
	print_the_sorted_array(a,n);
	return 0;
}

void sort(int a[],int n)
{
	int i,key,j;
	for(i=0;i<n;i++){
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;

	}
}
void print_the_sorted_array(int a[],int n)
{
	int i;
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
}