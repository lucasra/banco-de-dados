#pragma once
#include "Lista.h"
#include "turma.h"
#include <string>
using namespace std;

class curso
{
	int CodCurso;
	string NomeCurso;
	Lista<turma*> ListaTurmas;

public:

	curso(void);
	curso(int, string);
	~curso(void);
	int getCodCurso();
	void setCodCurso(int);
	string getNomeCurso();
	void setNomeCurso(string);
	void InsertTurma();
	void remove_turma();
	void update_turmas();
	void imprime(int);//imprime baseado no codigo da turma
};

