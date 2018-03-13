/**
  * @file cedulas.cpp
  * @brief Implementação da função para contar cédulas dado um valor determinado
  * @author Lucas Gabriel
  * @since 08/03/2018
  * @date 12/03/2018
  * @sa https://github.com/ggklin/Aula04
  */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void contaCedulas(int valor){
	int conta100 = 0;
	int conta50 = 0;
	int conta20 = 0;
	int conta10 = 0;
	int conta5 = 0;
	int conta2 = 0;

	while(valor>=100){
		conta100++;
		valor-=100;
	}

	while(valor>=50){
		conta50++;
		valor-=50;
	}

	while(valor>=20){
		conta20++;
		valor-=20;
	}

	while(valor>=10){
		conta10++;
		valor-=10;
	}

	while(valor>=5){
		conta5++;
		valor-=5;
	}

	while(valor>=2){
		conta2++;
		valor-=2;
	}

	cout << "Você precisará de:\n" << conta100 << " notas de 100 reais;\n" 
	<< conta50 << " cédulas de 50 reais;\n" << conta20 << " cédulas de 20 reais;\n"
	<< conta10 << " cédulas de 10 reais;\n" << conta5 << " cédulas de 5 reais;\n"
	<< conta2 << " cédulas de 2 reais" << endl;
}
