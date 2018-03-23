pkg load io
num=xlsread('./samplg.ods')
x=num(:,1)
y=num(:,2)
A=polyfit(x,y)
B=polyval(A,x)
plot(x,y,'k*',x,y,'r-')