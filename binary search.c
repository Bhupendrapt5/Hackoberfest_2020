#include<stdio.h>
main()
{
	int i,j,a[20],l,f,m,s,n,flag=0;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the sorted  elements in array\n");
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
	}
	printf("Enter the element to search\n");
	scanf("%d",&s);
	f=0;
	l=n-1;
	
	while(f<=l)
	{	
		m=(f+l)/2;
		if(a[m]==s)
			{printf("Element found at position %d\n",m+1);
			flag=1;
			break;}
		else if (s<a[m])
			l=m-1;
		else 
			f=m+1;
	}
	if (flag==0)
		printf("Element is not present\n");
}
