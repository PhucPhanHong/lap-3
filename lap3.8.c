#include<stdio.h>
double makeDouble(int ipart, int fraction){ 
double df= fraction;
while (df >=1) df = df/10; 
if(ipart<0) return ipart - df; 
return ipart + df ; 
}
int main(){
	double value;
	int ipart,fraction;
	printf("nhap so ipart: ");
    scanf("%d", &ipart);
    do{
    	printf("nhap so fraction: ");
    scanf("%d", &fraction);
	}while (fraction<0);
	value= makeDouble(ipart,fraction);
	printf("%lf",value);
return 0;	
}
