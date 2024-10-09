#include<stdio.h>
int main()
{
 int x,y,divisao,resto;
     printf("Digite um numero:");
     scanf("%d",&x);
     printf("Digite um numero:");
     scanf("%d", &y);
     divisao = x/y;
     printf("A divisao e: %d\n",divisao);
     resto=x%2;
    printf("O resto e:%d\n",resto);
 return 0;
}
