#include "aluno.h"


aluno::aluno(void)
{
	//MyTurma = null;
	NomeAluno = Rua = Bairro = Cidade = Email = "";
	Matricula = Telefone = Cpf = 0;
}

aluno::aluno(string _nomealuno, int _cpf, int _matricula, string _email, string _rua, string _bairro, string _cidade, int _telefone)
{
	NomeAluno = _nomealuno;
	Cpf = _cpf;
	Matricula = _matricula;
	Email = _email;
	//MyTurma = _myturma;
	Rua = _rua;
	Bairro = _bairro;
	Cidade = _cidade;
	Telefone = _telefone;
}

aluno::~aluno(void)
{
}

void aluno::imprime()
{

}

/*turma* aluno::getTurma()
{
	return MyTurma;
}
void aluno::setTurma(turma *_myturma)
{
	MyTurma = _myturma;
}*/
string aluno::getNomeAluno()
{
	return NomeAluno;
}
void aluno::setNomeAluno(string _nomealuno)
{
	NomeAluno = _nomealuno;
}
string aluno::getRua()
{
	return Rua;
}
void aluno::setRua(string _rua)
{
	Rua = _rua;
}
string aluno::getBairro()
{
	return Bairro;
}
void aluno::setBairro(string _bairro)
{
	Bairro = _bairro;
}
string aluno::getCidade()
{
	return Cidade;
}
void aluno::setCidade(string _cidade)
{
	Cidade = _cidade;
}
string aluno::getEmail()
{
	return Email;
}
void aluno::setEmail(string _email)
{
	Email = _email;
}
int aluno::getMatricula()
{
	return Matricula;
}
void aluno::setMatricula(int _matricula)
{
	Matricula = _matricula;
}
int aluno::getTelefone()
{
	return Telefone;
}
void aluno::setTelefone(int _telefone)
{
	Telefone = _telefone;
}
int aluno::getCpf()
{
	return Cpf;
}
void aluno::setCpf(int _cpf)
{
	Cpf = _cpf;
}