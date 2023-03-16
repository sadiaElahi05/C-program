
#include <stdio.h>

void main()
{
	int a[]={67,89,90,56,78,44};
	int n=6,m;

	m=max(a,n);
	printf("\nmaximum number is  %d",m);
	getch();
}
max(int x[],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
        {
		if(x[i]>t)
			t=x[i];
	}
	return(t);
}
