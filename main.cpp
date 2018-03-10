/**
  * @file main.cpp
  * @brief Arquivo principal do programa
  * @author George Franklin
  * @since 08/03/2018
  * @date 10/03/2018
  * @sa https://github.com/ggklin/Aula04
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

/** @brief Funcao principal que mostra as opcoes disponiveis e permite escolher uma delas */
int main()
{
    int opcao = 0;
    int valor = 0;

    cout << "Escolha uma opcao:" << endl;
    cout << "1 - Quantos anos serao necessarios poupar para se tornar milionario." << endl;
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

/** @brief Funcao que mostra quantos anos sao necessarios poupar para se tornar milionario */
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
