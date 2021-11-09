//#include <iostream>
//#include <locale.h>
//#include <stdlib.h>
//#include <string>
//
//using namespace std;
//
//void insere(int codigo[], int& t, int tamanho);
//void exibe(int codigo[], int t);
//void elemento(int codigo[], int t);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	int codigoProduto[5];
//	int tam, op;
//
//	//inicializa��o
//	tam = 0;
//	do
//	{
//		//obtem a op��o
//		system("cls");
//		cout << "\nMenu - LISTA \n;";
//		cout << "\n0- Reiniciar a LISTA";
//		cout << "\n1- Inserir c�digo do produto na LISTA";
//		cout << "\n2- Exibir LISTA";
//		cout << "\n3- Exibir tamanho da LISTA";
//		cout << "\n4- Exibir um elemento da LISTA";
//		cout << "\n5- Sair";
//
//		//obt�m a op��o
//		cout << "\n\nDigite a op��o: ";
//		cin >> op;
//
//		system("cls");
//
//		//executa a a��o escolhida
//		switch (op)
//		{
//		case 0: 
//			tam = 0;
//			break;
//
//		case 1:
//			insere(codigoProduto, tam, 5);
//			break;
//
//		case 2 :
//			exibe(codigoProduto, tam);
//			break;
//
//		case 3:
//			cout << "\nTamanho da LISTA: " << tam;
//			break;
//
//		case 4:
//			elemento(codigoProduto, tam);
//			break;
//
//		case 5:
//			cout << "\nFinalizando o programa da LISTA. \n";
//			break;
//
//		default:
//			cout << "\nOp��o Inv�lida.\n";
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
//void insere(int codigo[], int& t, int tamanho) {
//	int prod;
//
//	//verifica se a lista esta cheia
//	if (tamanho == t)
//		cout << "\nAten��o! \nLista Cheia!\n";
//	else
//	{
//		cout << "\nDigite o c�digo do produto a ser inserido: ";
//		cin >> prod;
//
//		codigo[t] = prod;
//
//		t++;
//	}
//
//}
//
//void exibe(int codigo[], int t) {
//	int x;
//
//	// Verifica se tem algum elemento na lista
//	if (t == 0)
//		cout << "\nAten��o! \nLista Vazia!\n";
//	else
//	{
//		cout << "\nRela��o dos c�digos. \n";
//
//		for (x = 0; x < t; x++) {
//			cout << "\n" << codigo[x];
//		}
//	}
//}
//
//void elemento(int codigo[], int t) {
//	int prod, posicao;
//
//	if (t == 0)
//		cout << "\nAten��o! \nLista vazia. \n";
//	else
//	{
//		cout << "\nQual a posi��o que deseja? ";
//		cin >> posicao;
//		posicao--;
//
//		if (posicao >= t)
//			cout << "\nAten��o! \nNenhum codigo armazenado ou posi��o inexistente. \n";
//		else
//			cout << "\nCodigo: " << codigo[posicao] << "\n";
//
//
//
//	}
//}
//
//
//
//
//
