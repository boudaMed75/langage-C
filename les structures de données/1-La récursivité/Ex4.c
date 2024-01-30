
#include<stdio.h>


void convert_deci_bin_iter(int n){
	int a[500],i=0;
	while(n >= 1){
		a[i] = n % 2;
		i++;
		
		n = n / 2 ;
	}
	
	for(int j = i-1 ; j >= 0 ; j--){
		printf("%d",a[i]);
	}
}

void convert_deci_bin_recu(int n){
	
	if(n<1) return ;
	convert_deci_bin_recu(n/2);
	printf("%d",n%2);
}

int main(){
	int n;
	printf("Entrer un entier n : ");
	printf("%d",&n);
	
	printf("%d en binaire est <en utilisant fonction iterative> : %d ",n,convert_deci_bin_iter(n));
	printf("%d en binaire est <en utilisant fonction iterative> : %d ",n,convert_deci_bin_recu(n));

	
}
