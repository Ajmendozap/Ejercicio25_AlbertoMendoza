
#include <iostream>

void relleno(int *a,int numero);
int imprimir(int *a,int numero);

int main(void)
{
    int numero;
    std::cout<<"Ingrese el número"<<std::endl;
    std::cin>>numero;
    int* m= new int [numero];
    relleno(m,numero);
    imprimir(m,numero);
    return 0;
}

void relleno(int *a, int numero)
{
    int i=1;
    for(i=1;i<=numero;i++)
    {
        int m=1;
        for(int j=1;j<=i;j++)
        {
            m*=j;
        }
        a[i]=m;
    }
}

int imprimir(int *a,int numero)
{
    std::cout<<"El arreglo de factoriales es:";
    for(int i=0;i<numero;i++)
    {
        std::cout<<a[i]<<std::endl;
            
    }
}