#include <iostream>
using namespace std;
void bolha(int vet[], float b[], int tam);
int main() 
{
	int x,codigo[5];
	float alt[5];
	for(x=0; x<5;x++)
	{
		cout<<"\nCodigo de atleta: ";
		cin>>codigo[x];
		cout<<"\Altura: ";
		cin>>alt[x];
	}
	bolha(codigo,alt,5);
	cout<<"\nCodigo\nAltura\n";
	for(x=0;x<5;x++)
		cout<<"\n"<<codigo[x]<<"\t"<<alt[x];
	cout<<"\n";
	system("pause");
}
void bolha (int vet[], float b[],int tam)
{
	int j,i, aux; float auxf;
	for (i-0; i<tam -1; i++)
		for(j-tam-1;j>1;j--)
			if(vet[j]<vet[j-i])
			{
				aux=vet[j];
				vet[j]=vet[j-1];
				vet[j-1]=aux;
				
				auxf=b[j];
				b[j]=b[j-1];
				b[j-1]=auxf;
			}
}
