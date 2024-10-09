#include <stdio.h>
#include <stdlib.h>
int main()
{
	float dist,consumototal,consumoMed;
	printf("Distancia:\n");
	scanf("%f,",&dist);
	printf("Consumo\n");
	scanf("%f",&consumototal);
	
   	consumoMed=dist/consumototal;
	
	printf("O consumo medio por Km/l foi:%.3f\n",consumoMed );
	
	//pausa o sistema
	system("pause");
	
	
	return 0;
	
}
	
	
	
	
	
	
	
