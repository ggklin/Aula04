/**
  * @file milionario.cpp
  * @brief Implementacao da funcao milionario
  * @author George Franklin
  * @since 08/03/2018
  * @date 10/03/2018
  * @sa https://github.com/ggklin/Aula04
  */

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
