#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL , "Portuguese");
	
	int num ;
	
	printf("digite um numero: \n");
	
	scanf("%d" , &num);
		
		if  (num%2 != 0){
			printf("o numero e impar.\n");
		}else if (num%2 == 0){
			printf("o numero e par.\n");
		}
		
		return 0;
		
		
}
