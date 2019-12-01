#include<stdio.h>
int n,m,i,j,k;
int x[30],h[30],a[30],x2[30];
int main()
{
	int *y;
	y=(int *)0x0000100;
	printf("ENTER LENGTH OF FIRST SEQUENCE");
	scanf("%d",&n);
	printf("ENTER ELEMENTS OF FIRST SEQUENCE");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	printf("ENTER LENGTH OF SECOND SEQUENCE");
	scanf("%d",&m);
	printf("ENTER ELEMENTS OF SECOND SEQUENCE");
	for(i=0;i<m;i++)
	scanf("%d",&h[i]);
    if(m-n!=0)
	{ 
		if(n>m)
		{

			for(i=m;i<n;i++)
			h[i]=0;
			n=m;
		}

		else 
		{
			for(i=n;i<m;i++)
			x[i]=0;
			m=n;
		}
	}
	y[0]=0;
	a[0]=h[0];
	for(i=1;i<m;i++)
	a[i]=h[m-i];

	for(i=0;i<n;i++)
	y[0]+=x[i]*a[i];

	for(k=1;k<n;k++)
	{
		y[k]=0;
		for(j=1;j<n;j++)
		x2[j]=a[j-1];
		x2[0]=a[n-1];

		for(i=0;i<n;i++)
		{
			a[i]=x2[i];
			y[k]+=x[i]*x2[i];

		}

	}

	printf("THE CIRCULAR CONVOLUTION IS : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",y[i]);

	}


}











