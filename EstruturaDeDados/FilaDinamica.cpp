#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;
struct nodo
{
	int info;
	struct nodo* prox;
};

nodo* insereFim(nodo* plista, int valor);
void exibePrimeiro(nodo* plista);
void exibeLista(nodo* plista);
nodo* remove(nodo* plista);
void libera(nodo* plista);




int main()
{
	setlocale(LC_ALL, "Portuguese");

	int c, op, valor;
	nodo* lista = NULL;

	do
	{
		system("cls");
		system("color f2");

		cout << "- - - Alocação Dinâmica - - -\n\n";

		cout << "\n 1- Insere na Fila ";
		cout << "\n 2- Remove da Fila ";
		cout << "\n 3- Exibe o primeiro da Fila";
		cout << "\n 4- Libera a fila";
		cout << "\n 5- Exibe a Fila";
		cout << "\n 6- Sair ";

		cout << "\n\n Opção ";
		cin >> op;

		system("cls");
		system("color 2f");

		switch (op)
		{
		case 1:
			cout << "\nDigite o número: ";
			cin >> valor;

			lista = insereFim(lista, valor);
			break;

		case 2:
			if (!lista)
			{
				cout << "\n\nNada a remover. Pilha vazia\n";
			}
			else {
				lista = remove(lista);
				cout << "\n\nPrimeiro elemento da Pilha removido\n";
			}
			break;
		case 3:
			if (!lista) {
				cout << "\nFila Vazia\n";
			}
			else {
				exibePrimeiro(lista);
			}
			break;

		case 4:
			if (lista) {
				cout << "\n\nTem elementos na Fila\n";
			}
			else if (!lista) {
				cout << "\nFila Vazia\n";
			}
			else {
				libera(lista);
				cout << "\nLiberando memória\n";
			}
			break;

		case 5:
			if (!lista) {
				cout << "\nLista Vazia\n";
			}
			else {
				exibeLista(lista);
			}
			break;

		case 6:
			cout << "Fechando a Fila dinâmica\n";
			break;


		default:
			cout << "\nOpção Inválida\n";
		}
		cout << "\n\n";
		system("pause");

	} while (op != 6);

	return 0;
}

nodo* insereFim(nodo* plista, int valor) {
	nodo* novo, * aux;
	novo = new nodo;

	if (!novo) {
		cout << "\nNão foi possível fazer a alocação\n";
		system("pause");
		exit(1);
	}
	novo->info = valor;
	novo->prox = NULL;

	if (plista == NULL)
		plista = novo;
	else {
		aux = plista;
		while (aux->prox)
			aux = aux->prox;
		aux->prox = novo;
	}
	return plista;

}

void exibePrimeiro(nodo* plista) {
	if (!plista)
		cout << "\nPilha Vazia\n";
	else
		cout << "\nValor do elemento do topo: " << plista->info;
}

nodo* remove(nodo* plista) {
	nodo* aux;
	aux = plista;
	plista = plista->prox;
	delete aux;
	return plista;
}

void libera(nodo* plista) {
	delete plista; plista = 0;
}


void exibeLista(nodo* plista) {
	cout << "\nListando\n";
	while (plista) {
		cout << "\n" << plista->info;
		plista = plista->prox;
	}
}
