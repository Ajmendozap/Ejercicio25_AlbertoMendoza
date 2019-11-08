
#include <iostream>

void relleno(int *a,int numero);
int imprimir(int *a,int numero);
// Este código imprime un arreglo de factoriales para un número solicitado.
int main(void)
{
    int numero;
    std::cout<<"Ingrese el número para calcular el arreglo de factoriales"<<std::endl;
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
    a[0]=1;
}

int imprimir(int *a,int numero)
{
    std::cout<<"El arreglo de factoriales es: "<<std::endl;
    for(int i=0;i<numero;i++)
    {
		if(i==0)
		{
			std::cout<<'[';
		}
        std::cout<<a[i];
		if (i<numero-1)
		{
			std::cout<<','<<' ';
		}
		else 
		{
			std::cout<<']';
		}
            
    }
	std::cout<<std::endl;
}