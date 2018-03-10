/* 1 - O usuário informa o valor do seu salário e suas despesas mensais. O programa calcula o valor que sobra e diz quanto
tempo (em anos) será necessário poupar para se tornar milionário.

2 - O usuário digita 10 valores numéricos inteiros e o programa mostra um relatório com cada valor diferente e o número de
vezes que o mesmo apareceu. Use vetor.

3 - O usuário informa um valor (em reais). Calcular e exibir quantas cédulas de 100, 50, 20, 10, 5, 2 e 1 são necessárias.
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>

#include "milionario.h"
// #include "relatorio.h"
#include "cedulas.h"

void milionario_exibicao();

int main()
{
    int opcao = 0;
    int valor = 0;

    cout << "Escolha uma opcao:" << endl;
    cout << "1 - Quantos anos sera necessario poupar para ser milionario." << endl;
    cout << "2 - Relatorio que mostra apenas valores diferentes e quantas vezes cada um apareceu." << endl;
    cout << "3 - Quantas cedulas de cada tipo sao necessarias para ter um certo valor." << endl;

    do
    {
        cout << endl << "Opcao: ";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            milionario_exibicao();
            break;
        case 2:
            cout << "Digite um valor: R$";
            cin >> valor;
            contaCedulas(valor);
            break;
        default:
            cout << "Opcao invalida." << endl;
        }
    }
    while (opcao != 1 && opcao != 2 && opcao != 3);

    return 0;
}

void milionario_exibicao()
{
    int salario = 0;
    int despesas = 0;
    int anos = 0;
    do
    {
        cout << "Digite o valor do seu salario: R$";
        cin >> salario;
        cout << "Digite suas despesas mensais: R$";
        cin >> despesas;

        if (salario <= 0 || despesas < 0)
        {
            cout << "Valores informados sao invalidos." << endl << endl;
        }
    }
    while(salario <= 0 || despesas < 0);

    anos = round((float)milionario(salario, despesas)/12);

    if (anos == 0)
    {
        cout << "Falta menos de um ano para voce se tornar milionario."<< endl;
    }
    else if (anos == 1)
    {
        cout << "Falta " << anos << " ano para voce se tornar milionario."<< endl;
    }
    else
    {
        cout << "Faltam " << anos << " anos para voce se tornar milionario."<< endl;
    }
}
