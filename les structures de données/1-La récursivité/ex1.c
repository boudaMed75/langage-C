#include<stdio.h>

int fact_iter(int n){
	
	int fact = 1;
	for(int i = n; i>= 1;i++){
		fact = fact * i;
	}
	return fact;
}

int fact_recu(int n){
	
	if(n==0) return n;
	
	else return n * fact_recu(n-1);
}

int main(){
	int n;
	printf("Entrer un entier n : ");
	printf("%d",&n);
	
	printf("Le factoriel de %d est : %d ",n,fact_iter(n));
	printf("Le factoriel de %d est : %d ",n,fact_recu(n));
	
}
