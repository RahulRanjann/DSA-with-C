#include<stdio.h>

void Add(int n)
{
	int arr[n];
	int sum = 0;
	printf("Enter values of Array");
	for(i=0; i < sizeof(arr[n]); i++)
	{
		scanf("%d", &arr[i]);
	}

	for(j= 0; j < sizeof(arr[n]); j++)
	{
		sum = (sum+arr[j]);
		printf("Sum of all the values of the array %d", sum);
	}
	return ;
}

void main()
{
	printf("Enter size of arrray ");
	int n;
	scanf("%d", &n);
	Add(n);
	return ;
}