#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

void insere(int codigo[], int& t, int tamanho);
void exibe(int codigo[], int t);
void elemento(int codigo[], int t);

int main() {
	setlocale(LC_ALL, "Portuguese");

	int tam, codigoProduto[5], op;

	//inicialização
	tam = 0;


	system("pause");
	return 0;

}



void bubbleSort(int vet[], int tam) {
	int temp;
	int i, j;

	bool continuarTroca = false;

	//percorrer todos os números
	for (i = 0; i < tam - 1; i++) {
		continuarTroca = false;

		//loop through numbers falling ahead

		for (j = 0; j < tam - 1 - i; j++) {
			cout << "-----------------------\n";
			imprimirVetor(vet, 5);
			cout << "Comparando: " << vet[j] << " com: " << vet[j + 1] << endl;

			//troca número mais alto
			if (vet[j] > vet[j + 1]) {
				temp = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = temp;

				continuarTroca = true;
			}
			imprimirVetor(vet, 5);
			cout << "\n\n";
		}
		//se estiver tudo ordenado
		if (!continuarTroca) {
			break;
		}
	}
}
void imprimirVetor(int vet[], int tam) {
	int i;
	cout << vet[0];
	//Após troca
	for (i = 1; i < 5; i++) {
		cout << ", " << vet[i];
	}
	cout << endl;
}

