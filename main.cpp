/* 1 - O usuário informa o valor do seu salário e
suas despesas mensais. O programa calcula o valor
que sobra e diz quanto tempo (em anos) será
necessário poupar para se tornar milionário.

2 - O usuário digita 10 valores numéricos
inteiros e o programa mostra um relatório com
cada valor diferente e o número de vezes que o
mesmo apareceu. Use vetor.

3 - O usuário informa um valor (em reais).
Calcular e exibir quantas cédulas de 100, 50, 20,
10, 5, 2 e 1 são necessárias. */

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
