#pragma once
#include <string>
using namespace std;

class curso
{
	int codCurso;
	string nomeCurso;

public:

	curso(void);
	~curso(void);
	void insert_turma();
	void remove_turma();
	void update_turmas();
	void imprime(int);//imprime baseado no codigo da turma
};

