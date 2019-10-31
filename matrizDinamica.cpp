#include <iostream>
using namespace std;

const int linhas = 50;
const int colunas = 100;

void iniciaTela(char **tela)
{
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			tela[i][j] = '*';
		}
	}
}

void desenhaTela(char **tela) {

	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			cout << tela[i][j];
		}
		cout << endl;
	}

}

int main()
{
	//declara, inicia a matriz e aloca memoria;
	char **telaGame=0;
	
	telaGame = new char *[linhas]; //cria um array para representar as linhas
	for (int i = 0; i < linhas; i++) // para cada linha aloca a segunda dimensão com 100 posicoes
		telaGame[i] = new char[colunas];


	iniciaTela(telaGame);
	desenhaTela(telaGame);

	system("pause");
	return 0;
}