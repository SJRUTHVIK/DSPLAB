tfinal = 0.02;
t= 0:0.0001:tfinal;
xanalog = sin(2*pi*200*t);
subplot(2,2,1);
plot(t,xanalog,'r-')

fs1 = 5*200;
n1=0:1/fs1:tfinal;
x1=sin(2*pi*200*n1)
subplot(2,2,2);
plot(t,xanalog,'b',n1,x1,'r*-');

fs2 = 2*200;
n2=0:1/fs2:tfinal;
x1=sin(2*pi*200*n2)
subplot(2,2,3);
plot(t,xanalog,'b',n2,x1,'r*-')

fs3 = 1.3*200;
n3=0:1/fs3:tfinal;
x1=sin(2*pi*200*n3)
subplot(2,2,4);
plot(t,xanalog,'b',n3,x1,'r*-')

    
    
    