#include "escola.h"
#include "Lista.h"
#include "curso.h"
#include <string.h>
#include <iostream>


escola::escola()
{
}


escola::~escola()
{
}

void escola::InsertCurso()
{
	int _codcurso;
	string _nomecurso;
	cout << "Pronto para criar um novo curso? Siga as instrucoes:\n";
	cout << "1 - Sera necessario criar um curso completo por vez, entao tera que cadastrar\n";
	cout << "    o curso com suas respectivas turmas e alunos.\n";
	cout << "2 - Digite exatamente o que cada campo pede.\n";
	cout << "Vamos comecar?\n";
	cout << "\nDigite o nome do novo curso: ";
	fflush(stdin);  // LIMPAR O CACHE DE ENTRADA;
	getline(cin, _nomecurso);
	cout << "Digite o codigo do curso: ";
	fflush(stdin);  // LIMPAR O CACHE DE ENTRADA;
	cin >> _codcurso;
	Cursos.InsereNoFim(new curso(_codcurso, _nomecurso));
}
