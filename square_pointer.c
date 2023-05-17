#include<stdio.h>

main()
{
	int arr[5] = {23, 65, 76, 24, 32};
	int i=0;
	 
	printf("Array Elements :- \n");
	
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n Square of array elements :-\n");
	
	for (i=0;i<5;i++)
	{
		printf("%d ",arr[i]*arr[i]);
	}
}
