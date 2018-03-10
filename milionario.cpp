int milionario(int salario, int despesa)
{
    int poupanca = 0;
    int meses = 0;
    int sobra = salario - despesa;

    while (poupanca <= 1000000)
    {
        meses++;
        poupanca += sobra;
    }

    return meses;
}
