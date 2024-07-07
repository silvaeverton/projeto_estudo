// Projeto Multiplo de 3 e 5 
// Nome: Everton Silva
// data 07/07/2024
//************************************************************************************
//Bibliotecas 

#include <stdio.h>
#include <stdlib.h>
//************************************************************************************
//função Principal
int main() {
	
	//variaveis locais 
	int i,
   result = 0,
   lista  = 1000;//define o limite da soma
      

   
	for(i = 0; i < lista ; i ++){
   	// Foi utilizado o modulo de 3 e 5 onde os numeros onde o resto for diferente de 0 então o mesmo não será impresso.
    	if ((i %3 == 0) ||(i % 5 == 0 ) ){
     		result += i;
     	
		}//end if
	 
	 
	
   }//end for
   printf("A soma dos multiplos : %d\n",result);// exibe o resultado 
   
   system("PAUSE");
   return 0 ;
   
}//end main