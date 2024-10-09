#include <stdio.h>

int main(){
	float salario;
	scanf ("%f", &salario);
	
	if (salario <= 1000)
	{
		salario = salario * 1.15;
	}
	else if (salario <= 2000)
	{
		salario = salario * 1.10;
		}		
	else{
		salario = salario * 1.05;
			}
	printf("Novo salario e: %f\n", salario);
	
	return 0;
	
	
}
