#include "curso.h"
#include "Lista.h"
#include <string.h>
#include <iostream>
using namespace std;


curso::curso(void)
{
}

curso::curso(int _codcurso, string _nomecurso)
{
	CodCurso = _codcurso;
	NomeCurso = _nomecurso;
	InsertTurma();
}

curso::~curso(void)
{
}

int curso::getCodCurso()
{
	return CodCurso;
}
void curso::setCodCurso(int _codcurso)
{
	CodCurso = _codcurso;
}
string curso::getNomeCurso()
{
	return NomeCurso;
}
void curso::setNomeCurso(string _nomecurso)
{
	NomeCurso = _nomecurso;
}

void curso::InsertTurma()
{
	string _nometurma;
	int _codturma, _data;
	cout << "\nDigite o nome da turma a ser inserida: ";
	getline(cin, _nometurma);
	cout << "Digite o codigo dessa turma: ";
	cin >> _codturma;
	cout << "Digite a data da criacao dessa turma (DDMMAAAA): ";
	cin >> _data;
	ListaTurmas.InsereNoFim(new turma(_nometurma, _codturma, _data));


}
void curso::remove_turma()
{

}
void curso::update_turmas()
{

}
void curso::imprime(int)//imprime baseado no codigo da turma
{

}