#include <cstdlib>
#include <iostream>
#include <math.h>

 using namespace std;
/* 1.Crie um programa que solicite ao usuário os três 
coeficientes de uma equação do segundo grau e 
informe os valores de x' e x''. */

int main(int argc, char *argv[]) {
	setlocale(LC_CTYPE, "portuguese_brazil");
	int a,b,c;
	float d,x1,x2;
	cout << "Insira 3 valores: \n";
	cin >>a>>b>>c;
	d = (b*b) + (-4*a*c);
	if (d>0){
		x1 = -b + sqrt(d) / (2*a);
		x2 = -b - sqrt(d) / (2*a);
		cout<< "As saidas são x1= " <<x1<<" e x2= "<<x2<<"\n";
	}
	else if(d==0){
		x1= -b/(2*a);
		cout<<"A raiz "<<x1<<"\n";
	}
	else{
		cout<<"Não existe raiz \n";
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
