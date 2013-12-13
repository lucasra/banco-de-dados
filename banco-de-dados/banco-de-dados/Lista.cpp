#include "escola.h"
#include <string>
#include <iostream>
#include <conio.h>
using namespace std;



void main()
{
	char choose;
	escola Ufu;
	do {
		system("CLS");
		cout << "        MENU PRINCIPAL  \n";
		cout << "\n   [1] Inserir novo curso";
		cout << "\n   [2] Remover curso";
		cout << "\n   [3] Pesquisar";
		cout << "\n   [4] Sair\n";
		choose = _getch();


		switch (choose)
		{

		case '1':  //Inserir curso
			system("CLS");
			Ufu.InsertCurso();
			break;

		case '2':  //Insere remover curso
			system("CLS");
			break;

		case '3':  //Pesquisar
			system("CLS");
			break;

		case '4':  //SAIR
			break;

		default:  //caso a opcao nao exista envia mensagem de erro
			system("CLS");
			cout << "Leia as intrucoes!";
			_getch();
			break;

		}
	} while (choose != '4');
}