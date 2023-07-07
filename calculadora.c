#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
	int x, y, resultado = 0;
		
	printf("Insira o valor da operacaoo desejada\n");
	printf("[1] para adicao \n");
	printf("[2] para subtracao \n");
	printf("[3] para multiplicacao \n");	
	printf("[4] para divisao \n");
	
	printf("Insira o numero: ");
	
	char c;
	scanf("%c", &c);
	
	if (c == '1')
	{
		printf("Operacao escolhida: Adicao\n");
		printf("Primeiro Valor: ");
		scanf("%i", &x);
		
		printf("Segundo valor: ");
		scanf("%i", &y);
		
		resultado = x + y;
		
		printf("\n Seu resultado sera: %i", resultado);
		}
	
	else if(c == '2')
	{
		printf("Operacao escolhida: Subtracao\n");
		printf("Primeiro Valor: ");
		scanf("%i", &x);
		
		printf("Segundo valor: ");
		scanf("%i", &y);
		
		resultado = x - y;
		
		printf("\n Seu resultado sera: %i", resultado);
		}
	
	else if(c == '3')
	{
		printf("Operacao escolhida: Multiplicacao\n");
		printf("Primeiro Valor: ");
		scanf("%i", &x);
		
		printf("Segundo valor: ");
		scanf("%i", &y);
		
		resultado = x * y;
		
		printf("\n Seu resultado sera: %i", resultado);
		}
	
	else if(c == '4')
	{
		printf("Operacao escolhida: Divisao\n");
		printf("Primeiro Valor: ");
		scanf("%i", &x);
		
		printf("Segundo valor: ");
		scanf("%i", &y);
		
		resultado = (float) x / (float) y;
		
		printf("\n Seu resultado sera: %i", resultado);
		}
	
	else
	{
		printf("execute o codigo novamente, e nao faca cagada");
	}
	
	printf("\n");
	system("Pause");		
}
