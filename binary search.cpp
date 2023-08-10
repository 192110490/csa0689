#include<stdio.h>
int main()
{
	int first,last,middle,c,n,search,arr[100];
	printf("enter a number of elements");
	scanf("%d",&n);
	printf("enter %d integer number");
	for(c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}
	printf("enter the search number");
	scanf("%d",&search);
	for(c=0;c<n;c++)
	{
		first=0;
		last=n-1;
		middle=first+last/2;
	}
	while(first<=last)
	{
		if(arr[middle]<search)
		first=middle+1;
		else
		if(arr[middle]==search)
		{
			printf("%d is found at location",search,middle+1);
			break;
		}
		else
		last=middle-1;
		middle=first+last/2;
		if(first>last)
		printf("%d is not found in array of element",search);	
	}
	return 0;
}
