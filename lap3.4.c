#include<stdio.h>
#include<math.h>
double factorial(int n){
	double p=1;
	int i;
	for(i=2; i<=n; i++) p*=i;
	return p;
	}
int main(){
	int n;
	do{
	printf("nhap gia tri n :");
	scanf("%d", &n);
	}while(n<0);
	printf("%lf\n", factorial(n));
	return 0;
}
