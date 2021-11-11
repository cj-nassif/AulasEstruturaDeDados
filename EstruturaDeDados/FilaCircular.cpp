#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>

using namespace std;

#define MAX 5

int comeco = 0;
int tamanho = 0;
int queue[MAX];

void Enfileirar(int);
void Desenfileirar(void);





int main() {
	setlocale(LC_ALL, "Portuguese");

	int i;

	Enfileirar(10);
	Enfileirar(20);
	Enfileirar(30);
	Enfileirar(40);
	Enfileirar(50);

	for (i = 0; i < tamanho; i++) {
		cout << queue[i] << endl;
	}

	Desenfileirar();

	cout << "\n\n";

	for (i = 0; i < tamanho; i++) {
		cout << queue[i] << endl;
	}

	Enfileirar(60);

	cout << "\n\n";

	for (i = 0; i < tamanho; i++) {
		cout << queue[i] << endl;
	}

	cout << "\n\n";

	system("pause");
	return 0;

}


void Enfileirar(int elemento) {
	int pos;

	if (tamanho == MAX)
		cout << "\nFila cheia\n";
	else {
		pos = (comeco + tamanho) % MAX;
		queue[pos] = elemento;
		tamanho++;
	}
}

void Desenfileirar(void) {
	if (tamanho == 0)
		cout << "\nFila cheia!\n";
	else {
		comeco++;
		tamanho--;
	}
}