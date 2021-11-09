//#include <iostream>
//#include <locale.h>
//#include <stdlib.h>
//#include <string>
//
//#define TAM 5
//
//using namespace std;
//
//void empilha(int p[], int& t, int v);
//int desempilha(int p[], int& t, int v);
//void acessoTopo(int p[], int& t);
//void situacaoPilha(int p[], int& t);
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	int op, val, topo = -1, pilha[TAM], resp;
//
//
//	//inicialização
//	
//	do
//	{
//		//obtem a opção
//		system("cls");
//		system("color f0"); 
//		cout << "\nPilha(LIFO - Last In - First Out)\n\n";
//		cout << "\n1- Inserir um valor na Pilha";
//		cout << "\n2- Remover um valor do topo da Pilha";
//		cout << "\n3- Mostrar o elemento do topo da Pilha";
//		cout << "\n4- Mostrar situação da Pilha";
//		cout << "\n5- Sai";
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
//
//		case 1:
//			cout << "\nDigite o valor a ser empilhado: ";
//			cin >> val;
//
//			empilha(pilha, topo, val);
//
//			break;
//
//		case 2:
//			resp = desempilha(pilha, topo, val);
//			if (resp == 0)
//				cout << "\nAtenção. \nPilha vazia.\n";
//			else
//				cout << "\nValor removido: " << val;
//			break;
//
//		case 3:
//			acessoTopo(pilha, topo);
//
//			break;
//
//		case 4:
//			situacaoPilha(pilha, topo);
//
//			break;
//
//		case 5:
//			cout << "\nPrograma Básico da Pilha. \n";
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
////Insere
//void empilha(int p[], int& t, int v) {
//	if (t == TAM - 1)
//		cout << "\nAtenção. \nPilha Cheia.\n";
//	else {
//		t++; //atualiza o topo
//		p[t] = v; // pilha recebe o valor
//	}
//}
//
//int desempilha(int p[], int& t, int v) {
//	if (t == -1) {
//		return 0;
//	}
//	else {
//		v = p[t]; //guarda o valor do topo
//		t--; //atualiza o topo
//		return 1;
//	}
//}
//
////Mostra o topo
//
//void acessoTopo(int p[], int& t) {
//	if (t == -1) {
//		cout << "\nAtenção. \nPilha Vazia.\n";
//
//	}
//	else {
//		cout << "\nElemento do topo da pilha: " << p[t];
//	}
//}
//
////Mostra situação da pilha
//
//void situacaoPilha(int p[], int& t) {
//	if (t == -1) {
//		cout << "\nAtenção! \nPilha Vazia.\n";
//
//	}
//	else if (t == TAM - 1) {
//		cout << "\nAtenção. \nPilha Cheia\n";
//	}
//	else
//	{
//		cout << "\nTotal de elementos da Pilha: " << t + 1 << "\n";
//		cout << "\nEspaço disponível na Pilha: " << TAM - (t + 1) << "\n";
//	}
//}
