/* 1 - O usu�rio informa o valor do seu sal�rio e
suas despesas mensais. O programa calcula o valor
que sobra e diz quanto tempo (em anos) ser�
necess�rio poupar para se tornar milion�rio.

2 - O usu�rio digita 10 valores num�ricos
inteiros e o programa mostra um relat�rio com
cada valor diferente e o n�mero de vezes que o
mesmo apareceu. Use vetor.

3 - O usu�rio informa um valor (em reais).
Calcular e exibir quantas c�dulas de 100, 50, 20,
10, 5, 2 e 1 s�o necess�rias. */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// #include "milionario.h"
// #include "relatorio.h"
// #include "cedulas.h"

int main()
{
    int opcao = 0;

    cout << "Escolha uma opcao:" << endl;
    cout << "1 - Quanto poupar para ser milionario." << endl;
    cout << "2 - Relatorio que mostra apenas valores diferentes e quantas vezes cada um apareceu." << endl;
    cout << "3 - Quantas cedulas de cada tipo sao necessarias para ter um certo valor." << endl << endl;
    cout << "Opcao: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            cout << "Opcao invalida." << endl;
    }

    return 0;
}
