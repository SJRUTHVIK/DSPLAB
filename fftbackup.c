#include<stdio.h>
#include<math.h>
#define pi 3.1415926
float x[20],y[20],xreal[20],ximg[20];
int k,i,N;

void main()
{
printf("enter the N value : ");
scanf("%d",&N);
printf("enter the sequence ");
for(i=0;i<N;i++)
scanf("%f",&x[i]);
for(k=0;k<N;k++)
{
 xreal[k]=ximg[k]=0.0;
 for(i=0;i<N;i++)
  {
   xreal[k]+=x[i]*cos((2*pi*k*i)/N);
   ximg[k]+=x[i]*-sin((2*pi*k*i)/N);

  }
}
for(i=0;i<N;i++)
y[i]=sqrt((xreal[i]*xreal[i])+(ximg[i]*ximg[i]));

for(i=0;i<N;i++)
printf("%f ",y[i]);
}
