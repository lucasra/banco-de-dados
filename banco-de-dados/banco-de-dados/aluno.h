#pragma once
#include <string>
using namespace std;


class aluno
{
private:
	//turma *MyTurma;
	string NomeAluno, Rua, Bairro, Cidade, Email;
	int Matricula, Telefone, Cpf;

public:
	aluno(void);
	aluno(string, int, int, string, string, string, string, int);
	~aluno(void);
	//turma* getTurma();
	//void setTurna(turma*);
	string getNomeAluno();
	void setNomeAluno(string);
	string getRua();
	void setRua(string);
	string getBairro();
	void setBairro(string);
	string getCidade();
	void setCidade(string);
	string getEmail();
	void setEmail(string);
	int getMatricula();
	void setMatricula(int);
	int getTelefone();
	void setTelefone(int);
	int getCpf();
	void setCpf(int);
	void imprime();// imprime parametros.
};

