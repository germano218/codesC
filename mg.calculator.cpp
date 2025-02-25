#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL , "Portuguese"); 
	
	int n1 , n2 , r , opcao ;
	
	printf("selecione a operacao que desjea realizar: 1 soma 2 subtracao 3 multiplicacao 4 divisao 5 sair \n");
	
	 scanf("%d" , & opcao);
	 
	 switch (opcao){
	 	
	 	case 1: 
	 	printf("digite dois numeros \n");
	 	scanf("%d" , & n1);
	 	scanf("%d" , & n2);
	 	
	 	r = n1 + n2;
	 	
	 	printf(" o resultado e : %d\n" , r);
	 	 
	 	 return 0;
	 	
	 	case 2: 
	 	printf("digite dois numeros \n");
	 	scanf("%d" , & n1);
	 	scanf("%d" , & n2);
	 	
	 	
	 	r = n1 - n2;
	 	
	 	printf(" o resultado e: %d \n" , r);
	 	 
	 	  return 0;
	 	  
	 	case 3:
		printf(" digite dois numeros \n");
		scanf("%d" , & n1);
	 	scanf("%d" , & n2);
		 
		 r = n1 * n2;
		 
		printf("o resultado e: %d \n" , r);
		
		 return 0; 
		 
		case 4:
		printf(" digite dois numeros \n");
		scanf("%d" , & n1);
	 	scanf("%d" , & n2);
		 
		 r = n1 / n2;
		 
		printf("o resultado e: %d \n" , r);
		
		 return 0;
		 
		case 5:
		printf(" voce escolheu a opcao sair.\n");
		 return 0;
		 
		default:
			printf(" opcao invalida \n");
			 
			 return 0;
	 	}
	 
	
}
