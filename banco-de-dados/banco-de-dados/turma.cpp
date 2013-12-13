#include "turma.h"
#include"aluno.h"
#include"Lista.h"
#include <string>
#include <iostream>
using namespace std;


turma::turma(void)
{
}

turma::turma(string _nometurma, int _codturma, int _data)
{
	NomeTurma = _nometurma;
	CodTurma = _codturma;
	Data = _data;
	InsertAluno();
}

turma::~turma(void)
{
}
/*curso* turma::getMyCurso();
{
	return MyCurso;
}
void turma::setMyCurso(curso _mycurso)
{
	MyCurso = _mycurso;
}*/
int turma::getCodTurma()
{
	return CodTurma;
}
void turma::setCodTurma(int _codturma)
{
	CodTurma = _codturma;
}
int turma::getQtdAlunos()
{
	return QtdAlunos;
}
void turma::setQtdAlunos(int _qtdalunos)
{
	QtdAlunos = _qtdalunos;
}
int turma::getData()
{
	return Data;
}
void turma::setData(int _data)
{
	Data = _data;
}
string turma::getNomeTurma()
{
	return NomeTurma;
}
void turma::setNomeTurma(string _nometurma)
{
	NomeTurma = _nometurma;
}
void turma::InsertAluno()
{
	string _nomealuno, _rua, _bairro, _cidade, _email;
	int _matricula, _telefone, _cpf;
	char choose = 's';
	cout << "\n==E' NECESSARIO CADASTRAR TODOS OS ALUNOS DE UMA TURMA DE UMA SO' VEZ!! ==";
	do
	{
		fflush(stdin); // LIMPAR O CACHE DE ENTRADA;
		cout << "\nDigite o nome do aluno a ser inserido: ";
		getline(cin, _nomealuno);
		cout << "Digite o cpf do aluno: ";
		cin >> _cpf;
		cout << "Digite o numero de matricula do aluno: ";
		cin >> _matricula;
		cout << "Digite o email do aluno: ";
		cin >> _email;
		fflush(stdin); // LIMPAR O CACHE DE ENTRADA;
		cout << "Digite a rua do aluno: ";
		getline(cin, _rua);
		cout << "Digite o bairro do aluno: ";
		getline(cin, _bairro);
		cout << "Digite a cidade do aluno: ";
		getline(cin, _cidade);
		fflush(stdin); // LIMPAR O CACHE DE ENTRADA;
		cout << "Digite o telefone do aluno: ";
		cin >> _telefone;
		ListaAlunos.InsereNoFim(new aluno(_nomealuno,_cpf,_matricula,_email,_rua,_bairro,_cidade,_telefone));
		fflush(stdin); // LIMPAR O CACHE DE ENTRADA;
		cout << "Deseja cadastrar outro aluno na mesma turma? (s/n): ";
		cin >> choose;
	} while (choose == 's' || choose == 'S');
}

void turma::remove_aluno()
{

}

void turma::update_aluno()
{

}

void turma::imprime(int)
{

}