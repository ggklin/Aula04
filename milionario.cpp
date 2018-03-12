/**
  * @file milionario.cpp
  * @brief Implementacao da funcao milionario
  * @author George Franklin
  * @since 08/03/2018
  * @date 12/03/2018
  * @sa https://github.com/ggklin/Aula04
  */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>

int milionario(int salario, int despesas)
{
    int poupanca = 0;
    int meses = 0;
    int sobra = salario - despesas;

    while (poupanca <= 1000000)
    {
        meses++;
        poupanca += sobra;
    }

    return meses;
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