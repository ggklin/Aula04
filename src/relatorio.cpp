/**
  * @file relatorio.cpp
  * @brief Implementacao da funcao relatorio
  * @author Felipe Oliveira
  * @since 08/03/2018
  * @date 13/03/2018
  * @sa https://github.com/ggklin/Aula04
  */
#include <iostream>
using namespace std;

void relatorio(int tamanho = 1){
	int contador = 0;
	int vetor[tamanho-1];
	for(int i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	
	for(int x = 0; x < tamanho; x++){
		for(int j = 0; j < tamanho; j++){
			if(vetor[x] == vetor[j]){
				contador += 1;			
			}
		}
		cout << "o número " << vetor[x] << " aparece " << contador << " vezes"<< endl;   	
		contador = 0;
	}
}
