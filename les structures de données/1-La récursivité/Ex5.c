
#include<stdio.h>


void affiche_recu(int t[],int n , int i){
	if( i==n){
		printf("%3d",t[i]);
		affiche_recu(t,n,i+1);
	}
}

void affiche_recu2(int t[],int n){
	if(n<0) return ;
	affiche_recu(t,n-1);
	printf("%3d",t[n]);
}

