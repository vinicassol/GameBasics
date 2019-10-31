#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char comand; // vai pegar o comando do usuario através das teclas pressionadas
	
	do
	{
		comand = _getch();
		cout << comand << endl;

	} while (comand != 'q');

	return 0;
}