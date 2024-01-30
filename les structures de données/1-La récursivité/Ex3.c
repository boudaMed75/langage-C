#include<stdio.h>

int affiche(int n){
	
	if(n < 0) return ;
	affiche(n-1);
	
	for(int b=0 ; b<=9 ; b++){
		printf("%d\t",n*10+b);
	}
}

int main(){
	int n;
	printf("Entrer un entier n : ");
	printf("%d",&n);
	
	affiche(n);
	
}
