//#include <iostream>
//#include <locale.h>
//#include <stdlib.h>
//#include <string>
//
//using namespace std;
//
//void insere(int matric[], int m, int& t, int tamanho);
//void exibe(int matric[], int t);
//int buscaSequencial(int matric[], int m, int t);
//void remove(int matric[], int m, int& t);
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	int tam, matricula[5], mat, posicao, op;
//
//	//inicialização
//	tam = 0;
//	do
//	{
//		//obtem a opção
//		system("cls");
//		cout << "\nMenu - LISTA \n;";
//		cout << "\n0- Reiniciar a LISTA";
//		cout << "\n1- Inserir matrícula na LISTA";
//		cout << "\n2- Exibir LISTA";
//		cout << "\n3- Procurar matrícula na LISTA";
//		cout << "\n4- Remover matrícula da LISTA";
//		cout << "\n5- Sair";
//
//		//obtêm a opção
//		cout << "\n\nDigite a opção: ";
//		cin >> op;
//
//		system("cls");
//
//		//executa a ação escolhida
//		switch (op)
//		{
//		case 0:
//			tam = 0;
//			break;
//
//		case 1:
//			cout << "\nDigite matrícula a ser inserida: ";
//			cin >> mat;
//
//			insere(matricula, mat, tam, 5);
//			break;
//
//		case 2:
//			exibe(matricula, tam);
//			break;
//
//		case 3:
//			cout << "\nQual a matrícula a ser procurada? ";
//			cin >> mat;
//
//			posicao = buscaSequencial(matricula, mat, tam);
//			if (posicao == -1)
//				cout << "\nAtenção! Lista Vazia"; 
//			else if (posicao == -2)
//				cout << "\nAtenção! Matrícula não encontrada\n";
//			else
//				cout << "\nMatrícula encontrada na posição: " << posicao + 1 << "\n";
//
//				break;
//
//		case 4:
//			cout << "\nQual a matrícula a ser removida? ";
//			cin >> mat;
//
//			remove(matricula, mat, tam);
//
//			break;
//
//		case 5:
//			cout << "\nFinalizando o programa da LISTA. \n";
//			break;
//
//		default:
//			cout << "\nOpção Inválida.\n";
//		}
//
//		cout << "\n\n";
//		system("pause");
//
//	} while (op != 5);
//
//
//}
//
//void insere(int matric[], int m, int& t, int tamanho) {
//	if (tamanho == t)
//		cout << "\nAtenção! Lista Cheia\n";
//	else {
//		matric[t] = m;
//		t++;
//	}
//}
//
//void exibe(int matric[], int t) {
//	int x;
//
//	if (t == 0) {
//		cout << "\nAtenção! \nLista vazia\n";
//	}
//	else {
//		cout << "\nRelação das Matrículas\n";
//		for (x = 0; x < t; x++) {
//			cout << "\n" << matric[x];
//		}
//	}
//}
//
//int buscaSequencial(int matric[], int m, int t) {
//	int x;
//	if (t == 0) {
//		return -1; //testa se a lista esta vazia
//	}
//
//	for (x = 0; x < t; x++) {
//		if (matric[x] == m) {
//			return x; // retorna o deslocamento do endereço base
//		} 
//	}
//
//	return -2;
//}
//
//void remove(int matric[], int m, int& t) {
//	int pos, x;
//	pos = buscaSequencial(matric, m, t);
//
//	if (pos == -1) // testando se a lista esta vazia
//		cout << "\nAtenção! \nLista vazia\n";
//	else if (pos == -2)
//		cout << "\nAtenção! \nMatrícula não encontrada";
//	else {
//		// Desloca todos os elementos da lista, se necessário, deixando vazios ao final
//		for (x = pos; x < t - 1; x++) {
//			matric[x] = matric[x + 1];
//		}
//		t--;
//		cout << "\nMatrícula Removida\n";
//	}
//}