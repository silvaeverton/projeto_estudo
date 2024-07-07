// Projeto Fibonacci
// Nome: Everton Silva
// data 07/07/2024

//************************************************************************************
//Bibliotecas 

#include <stdio.h>
#include <stdlib.h>
//************************************************************************************
//protótipo das funções

     void  fibonacci(int quant );
 //************************************************************************************ 
 //função Principal    
int main()
{

    fibonacci(15);//chamada da função 

    system ("PAUSE");
    return 0;

}// end main 
//***********************************************************************************
//Desenvolvimento das funções
void  fibonacci(int quant )
    {
        //variaveis locais 
        int i = 1,
            j = 0,
            l = 0;


       int  x = 0;

        do {


        printf("%d ,",l);



        j = l;
        l = i+j ;
		i = j ;



        x++;

    }while(x < quant);

		
	
}// end fibonacci