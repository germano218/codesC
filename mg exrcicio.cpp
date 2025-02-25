#include<stdio.h>
#include<locale.h>

//estrutura de dados 1 atividade

int main(){
	setlocale(LC_ALL , "Portuguese");
 	
 	float n1 , n2 , n3, me , ma ;
 	
 	printf("digite as notas das avaliacoes 1 , 2 , 3 e sua media dos exercicios: \n");
 	
 	
 	scanf("%f" , & n1);
 	scanf("%f" , & n2);
 	scanf("%f" , & n3);
 	scanf("%f" , & me);
 	
 	ma = (n1 + (n2*2)+(n3*3)+me)/7;
 	
 	printf("sua media de aproveitamento e : %.2f \n " , ma);
 	
 	
	
	
}
