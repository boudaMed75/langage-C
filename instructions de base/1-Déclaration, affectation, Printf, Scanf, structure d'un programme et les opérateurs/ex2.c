
#include <stdio.h>


int main(){
	int naisse,age;
	
	float largeur,longeur,p,s;
	
	
	printf("Veullez enter la largeur du rectangle :  ");
	scanf("%f",&largeur);
	
	printf("Veullez enter la longeur du rectangle :  ");
	scanf("%f",&longeur);
	
	p = (largeur + longeur) * 2;
	s = largeur * longeur ;
	
	printf("Le perimetre du rectangle est %.2f . \n",p);
	printf("La surface du rectangle est %.2f . \n",s);
	

}
