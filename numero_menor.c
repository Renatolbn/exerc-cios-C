#include <stdio.h>
int main(){
	int a, b, c, menor;
	scanf("%d%d%d",&a,&b,&c);
	 menor = a;
	 if(b< menor)
	 { menor = b;
	 }
	if (c < menor)
	{ menor = c;
	}
	
	printf("O menor numero e:%d\n",menor);
		return 0;
	
	
	
	
}
