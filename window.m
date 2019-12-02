n=7;
wc=1;
beta = 0.3;
b1=kaiser(n,beta);
b=fir1(n-1,wc/pi,b1,'noscale');
freqz(b,1,512,10000);


n=7;
wc=1;
b1=hamming(n);
b=fir1(n-1,wc/pi,b1,'noscale');
freqz(b,1,512,10000);