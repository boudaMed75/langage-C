
#include<stdio.h>

int fibancci(int n){
	
	if(n <= 1) return 1;
	return fibancci(n-1) + fibancci(n-2);
}

int main(){
	int n;
	printf("Entrer un entier n : ");
	printf("%d",&n);
	
	printf("Le fibonacci de %d est : %d ",n,fibancci(n));
	
	
}
