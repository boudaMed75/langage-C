#include <stdio.h>


int main(){
	int naisse,age;
	
	printf("quelle est votre anne de naissance ? \n");
	scanf("%d",&naisse);
	
	age = 2024 - naisse;
	
	printf("Vous aurez alors %d ans cette anne ! ",age);
	
}
