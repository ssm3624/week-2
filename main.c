#include <studio.h>

int minus(int x, int y){
	return x- y;
}

int plus(int x,int y){
	return x+y;
}

int main(){
	int x,y,op;

	printf("Enter Two numbersx,y):");
	scanf("%d %d", &x, &y);
	
	printf("\nEnter the operation \n1. plus\n2.minus\n >>");
	scanf("%d",&op);
	int res;

	if (op == 1) res = plus(x,y);
	if (op ==2)res = minus(x,y);
	printf("\nResult %d \n",res);
	return(0);
}
