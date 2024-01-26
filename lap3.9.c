#include<stdio.h>
#include<math.h>
int gcd( int a, int b)
{ while ( a != b )
if(a>b)  a -=b;
else b -= a;
return a;
}
int lcm ( int a, int b)
{ return a*b/ gcd(a,b);
}
int main(){
	int a, b, d ,m;
	printf("Enter a and b:");
do{
	scanf("%d%d",&a,&b);
}while 	(a<=0 || b<=0);
    d=gcd(a,b);
    m=lcm(a,b);
    printf("greatest common divisor of %d and %d:%d\n",a,b,d);
    printf("least common multiple of %d and %d: %d\n", a, b, m);
  return 0;  	
}
