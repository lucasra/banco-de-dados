#pragma once
#include <stdio.h>
#include <string>
using namespace std;


class structs
{
	struct aluno
	{
		string NomeAluno, Rua, Bairro, Cidade, Email;
		int Matricula, Telefone, Cpf, CodTurma, position;
	};

	struct turma
	{
		int CodTurma, QtdAlunos, Data, position;
		string NomeTurma;
	};

	struct curso
	{
		int CodCurso, position;
		string NomeCurso;
	};
public:
	structs(void);
	~structs(void);
	void insert_aluno();
	void insert_turma();
	void insert_curso();
	void remove_aluno(int);
	void remove_turma(int);
	void remove_curso(int);


};

