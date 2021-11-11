//#include <iostream>
//#include <locale.h>
//#include <stdlib.h>
//#include <string>
//#include <cstdlib>
//
//
//#define TAM 5
//
//using namespace std;
//
////vari�vel global
//struct queue {
//	float f[TAM];
//	int inicio, fim;
//};
//
//
//void enfileira(queue& fill);
//void desenfileira(queue& fill);
//void elemPrimeiro(queue& fill);
//void situacaoFila(queue& fill);
//
//
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	char resp[10]; int op;
//	queue fila;
//
//	//inicia a fila
//
//	fila.inicio = 0;
//	fila.fim = -1;
//
//	do {
//		system("cls");
//		system("color 2f");
//
//		cout << "\nFILA (FIFO - First In - First Out)\n\n";
//		cout << "\n1 - Inserir um valor na fila";
//		cout << "\n2 - Remover um valor da fila";
//		cout << "\n3 - Mostrar o elemento do in�cio";
//		cout << "\n4 - Mostrar a situa��o da fila";
//		cout << "\n5 - Sair";
//
//		cout << "\n\nOp��o: ";
//		cin >> resp;
//
//		op = atoi(resp);
//
//		system("cls");
//
//		switch (op)
//		{
//		case 1:
//			enfileira(fila);
//			break;
//
//		case 2:
//			desenfileira(fila);
//			break;
//			
//		case 3:
//			elemPrimeiro(fila);
//			break;
//
//		case 4:
//			situacaoFila(fila);
//			break;
//
//		case 5: 
//			cout << "\nPrograma B�sico da fila. \n";
//			break;
//
//		default:
//			cout << "\nOp��o Inv�lida.";
//		}
//		cout << "\n\n";
//		system("pause");
//	} while (op != 5);
//
//}
//
//void enfileira(queue& fill) {
//	float valor;
//	if (fill.fim == TAM - 1) // testando se a fila esta cheia
//		cout << "\nAten��o! \nFila Cheia.\n";
//	else {
//		cout << "Digite o valor a ser enfileirado: ";
//		cin >> valor;
//		fill.fim++;
//		fill.f[fill.fim] = valor;
//	}
//}
//
//void desenfileira(queue& fill) {
//	if (fill.inicio > fill.fim) // testando se a fila esta vazia
//		cout << "\nAten��o! \nFila Vazia.\n";
//	else {
//		cout << "\nValor Removido: " << fill.f[fill.inicio];
//		fill.inicio++;
//	}
//}
//
//
//void elemPrimeiro(queue& fill) {
//	if (fill.inicio > fill.fim) // testando se a fila esta vazia
//		cout << "\nAten��o! \nFila Vazia.\n";
//	else {
//		cout << "\nElemento do in�cio da fila: " << fill.f[fill.inicio];
//	}
//}
//
//void situacaoFila(queue& fill) {
//	if (fill.inicio > fill.fim) // testando se a fila esta vazia
//		cout << "\nAten��o! \nFila Vazia.\n";
//	else {
//		cout << "\nTotal de elementos da Fila: " << fill.fim - fill.inicio + 1 << "\n";
//		cout << "\nEspa�o dispon�vel na fila: " << TAM - (fill.fim + 1) << "\n";
//		cout << "\nPosi��o do primeiro elemento da fila: " << fill.inicio << "\n";
//		cout << "\nPosi��o do �ltimo elemento da fila: " << fill.fim << "\n";
//
//		cout << "\nValor\tPosi��o no vetor\n";
//
//			for (int x = fill.inicio; x <= fill.fim; x++) {
//				cout << "\n" << fill.f[x] << "\t" << x;
//			}
//
//	}
//}
