#include<stdio.h>
main()
{	int a[20],i,j,pos,n,small,t;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elemts of array to sort\n");
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
	}
	printf("The sorted array is\n");
	for(i=0;i<n-1;i++)
	{	small=a[i];
		pos=i;
		for (j=i+1;j<n;j++)
		{	if(a[j]<small)
			{	small=a[j];	
				pos=j;
			}
		}
		if(pos!=i)
		{	t=a[pos];
			a[pos]=a[i];
			a[i]=t;
		}
	}

	for(i=0;i<n;i++)
	{	printf("%d\n",a[i]);
	}	
}
