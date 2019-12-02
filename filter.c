#include<stdio.h>
#include<math.h>
#define pi 3.1415
float x[60],y[70];
float b0=0.24,b1=0.24,b2=0;
float a0=1, a1=-0.5,a2=0;
int n=60;
float dn=0,dn1=0,dn2=0;
void main()
{
int i,k;
for(i=0;i<20;i++)
x[i]=sin(2*pi*i*100/2140);
for(i=20;i<40;i++)
x[i]=sin(2*pi*i*700/2140);
for(i=40;i<60;i++)
x[i]=sin(2*pi*i*50/2140);

for(k=0;k<n;k++)
{
y[k]=b0*dn+b1*dn1+b2*dn2;
dn2=dn1;
dn1=dn;
dn=x[k]-a1*dn1-a2*dn2;
}
}
