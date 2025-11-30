#include <conio.h>
#include <stdio.h>
int mostrar()
{
    int a;
    printf("Digite el tamano del vector: ");
    scanf("%d",&a);
    return a;
}

void mostrar1(int v[], int x)
{
   int i;
   
   printf("\nNumeros pares del vector:");
   for(i=0;i<x;i++)
    {
        if(v[i]%2==0)
        {
            printf(" %d",v[i]);
        }
    }
}
void llenar (int x)
{
    int v[x], i;
    for(i=0;i<x;i++)
    {
        scanf("%d",&v[i]);
    }
    mostrar1(v,x);
}
main()
{
   llenar(mostrar()); 
   return 0;
}
