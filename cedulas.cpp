#import <iostream>
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
	}

	while(valor>=50){
		conta50++;
	}

	while(valor>=20){
		conta20++;
	}

	while(valor>=10){
		conta10++;
	}

	while(valor>=5){
		conta5++;
	}

	while(valor>=2){
		conta2++;
	}

	cout << "Você precisará de: " << conta100 << " notas de 100; " 
	<< conta50 << " cédulas de 50; " << conta20 << " cédulas de 20; "
	<< conta10 << " cédulas de 10; " << conta5 << " cédulas de 5; "
	<< conta2 << " cédulas de 2" << endl;
}
