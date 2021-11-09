//#include <iostream>
//#include <locale.h>
//#include <stdlib.h>
//#include <string>
//
//using namespace std;
//
//void insertSort(int vet[], int tam);
//void imprimirVetor(int vet[], int tam);
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	int vetor[5] = { 13, 23, 3, 8, 1 };
//	int i;
//
//
//	imprimirVetor(vetor, 5);
//	cout << "\n\n";
//
//	insertSort(vetor, 5);
//
//	cout << "\n\n";
//	//apos troca
//	imprimirVetor(vetor, 5);
//	cout << "\n\n";
//
//
//	system("pause");
//	return 0;
//
//}
//
//
//
//void insertSort(int vet[], int tam) {
//	int valueInsert;
//	int posInsert;
//	int i;
//
//	//percorrer todos os números
//	for (i = 1; i < tam; i++) {
//		//selecione um valor a ser inserido
//		valueInsert = vet[i];
//
//		//selecione a posição a ser inserida
//		posInsert = i;
//
//		cout << "--------------------------\n";
//		imprimirVetor(vet, 5);
//		cout << "--------------------------\n";
//		cout << "Valor: " << valueInsert << endl;
//		cout << "Posição inserção: " << posInsert << endl << endl;
//
//		//verifique se o anterior não é maior que o valor a ser inserido
//
//		while (posInsert > 0 && vet[posInsert - 1] > valueInsert) {
//			vet[posInsert] = vet[posInsert - 1];
//			posInsert--;
//			imprimirVetor(vet, 5);
//		}
//		if (posInsert != i) {
//			cout << "\tInsere: " << valueInsert << " na posição: " << posInsert << endl;
//			vet[posInsert] = valueInsert;
//		}
//		imprimirVetor(vet, 5);
//		cout << "\n\n";
//	}
//
//	
//
//}
//
//void imprimirVetor(int vet[], int tam) {
//	int i;
//	cout << vet[0];
//	//Após troca
//	for (i = 1; i < 5; i++) {
//		cout << ", " << vet[i];
//	}
//	cout << endl;
//}
//
