#include<stdio.h>
#include<math.h>
int getRelPos(double x, double y, double r){
	double d2= x*x + y*y;
	double r2= r*r;
	if(d2 < r2)return 1;
	else if (d2==r2)return 0;
	else return -1;	
	}
int main(){
	double x, y, r;
	printf("toa do x: ");
    scanf("%d", &x);
    printf("toa do y: ");
    scanf("%d", &y);
   do {
        printf("ban kinh r: ");
        scanf("%lf", &r);
    } while (r < 0);
    int result = getRelPos(x,y,r);
    if (result == 1){
        printf("The point is in the circle\n");
    } 
	else if (result == 0){
        printf("The point is on of the circle\n");
    }
    else{
    	printf("The point is out of the circle\n");
	}
	return 0;
	}	
