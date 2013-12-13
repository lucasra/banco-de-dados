#pragma once
#include"aluno.h"
#include"Lista.h"
#include<string>
using namespace std;

class turma
{
	//curso *MyCurso;
	int CodTurma, QtdAlunos, Data;
	string NomeTurma;
	Lista<aluno*> ListaAlunos;

public:
	turma(void);
	turma(string, int, int);
	~turma(void);
	//curso* getMyCurso();
	//void setMyCurso(curso);
	int getCodTurma();
	void setCodTurma(int);
	int getQtdAlunos();
	void setQtdAlunos(int);
	int getData();
	void setData(int);
	string getNomeTurma();
	void setNomeTurma(string);
	void InsertAluno();
	void remove_aluno();
	void update_aluno();
	void imprime(int);//imprime de acordo com o código de alunos
};

