#include<stdio.h>
#include<stdlib.h>

void soma(float num1, float num2)
{
	printf("A soma de %.2f e %.2f sera de: %.2f", num1, num2, num1+num2);
}

void subt(float num1, float num2)
{
	printf("A subtracao de %.2f e %.2f sera de: %.2f", num1, num2, num1-num2);
}

void mult(float num1, float num2)
{
	printf("A soma de %.2f e %.2f sera de: %.2f", num1, num2, num1*num2);
}

void divisao(float num1, float num2)
{
	printf("A soma de %.2f e %.2f sera de: %.2f", num1, num2, num1/num2);
}

int main(void)
{	
	float primeiro_numero, segundo_numero;
	int escolha;
		
	
	printf("[1] para adicao \n[2] para subtracao \n[3] para multiplicacao \n[4] para divisao \n");
	printf("Insira o valor da operacao desejada\n");
	printf("Resposta: ");
	scanf("%d", &escolha);
	
	system("cls");
	printf("Digite o primeiro valor: ");
	scanf("%f", &primeiro_numero);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &segundo_numero);
	
	switch(escolha)
	{
		case 1:
			soma(primeiro_numero,segundo_numero);
		break;
		
		case 2:
			subt(primeiro_numero,segundo_numero);
		break;
		
		case 3:
			mult(primeiro_numero,segundo_numero);
		break;
		
		case 4:
			divisao(primeiro_numero,segundo_numero);
		break;
	}	
	
	return 0;
}
