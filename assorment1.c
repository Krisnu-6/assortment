#include<stdio.h>

main()
{
	int a[100];
	int i,n;
	printf("enter size of array = ");
	scanf("%d",&n);
	printf("array element=\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("nagative element = %d",a[i]);
		}
	}
}