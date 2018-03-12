/**
  * @file main.cpp
  * @brief Arquivo principal do programa
  * @author George Franklin & Lucas Gabriel
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

    do
    {
        cout << "------------------- *MENU DO PROGRAMA* -------------------" << endl;
        cout << "Escolha uma opção:" << endl;
        cout << "0 - Sair do programa;" << endl;
        cout << "1 - Quantos anos serão necessários poupar para se tornar milionário;" << endl;
        cout << "2 - Relatório que mostra apenas valores diferentes e quantas vezes cada um apareceu;" << endl;
        cout << "3 - Quantas cédulas de cada tipo são necessárias para ter um certo valor." << endl;

        cout << endl << "Opção: ";
        cin >> opcao;
        cout << "----------------------------------------------------------" << endl;
        switch (opcao)
        {
        case 0:
            cout << "Goodbye! =)" << endl;
            cout << "----------------------------------------------------------" << endl;
            break;
        case 1:
            milionario_exibicao();
            cout << "----------------------------------------------------------" << endl;
            break;
        case 3:
            cout << "Digite um valor: R$";
            cin >> valor;
            contaCedulas(valor);
            cout << "----------------------------------------------------------" << endl;
            break;
        default:
            cout << "Opcao invalida." << endl;
            cout << "----------------------------------------------------------" << endl;
        }
    }
    while (opcao!=0);

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
