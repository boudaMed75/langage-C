#include <stdio.h>


int main(){
	
	float a,b,s,p,df,dv;
	
	
	
	
	printf("Veullez enter la Valeur de A :  ");
	scanf("%f",&a);
	
	printf("Veullez enter La valeur de B :  ");
	scanf("%f",&b);
	s = a + b;
	p = a * b;
	df = a - b;
	dv = a / b;
	
	printf("A + B = %.2f \n",s);
	printf("A * B = %.2f \n",p);
	printf("A - B = %.2f \n",df);
	printf("A / B = %.2f \n",dv);
	

}

