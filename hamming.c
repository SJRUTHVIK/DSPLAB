#include<stdio.h>
#include<math.h>
#define pi 3.14
float x[100],y[140];
int N;
int xlen=60,hlen=20;
float h[7]={0.0012,0.0449,0.2062,0.3183,0.2062,0.0449,0.0012};
void main()
{
int i,n,k;
for(i=0;i<20;i++)
x[i]=sin(2*pi*i*100/2140);
for(i=20;i<40;i++)
x[i]=sin(2*pi*i*700/2140);
for(i=40;i<60;i++)
x[i]=sin(2*pi*i*50/2140);
N=xlen+hlen-1;
for(n=0;n<N;n++)
{
y[n]=0;
for(k=0;k<xlen;k++)
{
if(((n-k)>=0)&&((n-k)<7))
y[n]+=x[k]*h[n-k];
}
}}
