#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


	struct aluno
	{
		string NomeAluno, Rua, Bairro, Cidade, Email;
		int Matricula, Telefone, Cpf, CodTurma, position;
	};

	struct turma
	{
		int CodTurma, Data, position, CodCurso;
		string NomeTurma;
	};

	struct curso
	{
		int CodCurso, position;
		string NomeCurso;
	};

//variaveis 
int a=0;//variavel de contador de alunos
int t=0;//variavel de contador de turmas
int c=0;//variavel de contador de cursos

aluno alunos[60];
turma turmas[20];
curso cursos[10];

int find_aluno(int mat)
{
	int temp = -1;
	for(int i=0; i<a; i++)
	{ 
		if(mat==alunos[i].Matricula && alunos[i].Matricula != -1)
			temp= i;
	
	}
	return temp;
}

int find_turma(int cod)
{
	int temp = -1;
	for(int i=0; i<t; i++)
	{ 
		if(cod==turmas[i].CodTurma )
			temp= i;

	}
	return temp;
}

int find_curso(int cod)
{
	int temp=-1;
	for(int i=0; i<c; i++)
	{ 
		if(cursos[i].CodCurso == cod)
			temp =i;
	}
	return temp;
}


void insert_aluno()
{
	cout << "Numero de matricula do aluno: "<<a<<endl;
	alunos[a].Matricula=a;
	fflush(stdin); // LIMPAR O CACHE DE ENTRADA;
	cout << "\nDigite o nome do aluno a ser inserido: ";
	getline(cin, alunos[a].NomeAluno);
	cout << "Digite o cpf do aluno: ";
	cin >> alunos[a].Cpf;
	cout << "Digite o email do aluno: ";
	cin >> alunos[a].Email;
	fflush(stdin); // LIMPAR O CACHE DE ENTRADA;
	cout << "Digite a rua do aluno: ";
	getline(cin, alunos[a].Rua);
	cout << "Digite o bairro do aluno: ";
	getline(cin, alunos[a].Bairro);
	cout << "Digite a cidade do aluno: ";
	getline(cin, alunos[a].Cidade);
	fflush(stdin); // LIMPAR O CACHE DE ENTRADA;
	cout << "Digite o telefone do aluno:";
	cin >> alunos[a].Telefone;
	cout << "Informe o codigo da turma a qual esse aluno pertence :";
	cin >>	alunos[a].CodTurma;
	alunos[a].position = a;
	a++;
}
void insert_turma()
{
	fflush(stdin);
	cout << "codigo desta turma: "<<t<<endl;;
	turmas[t].CodTurma = t;
	fflush(stdin);
	cout << "\nDigite o nome da turma a ser inserida: ";
	getline(cin, turmas[t].NomeTurma);
	cout << "Digite a data da criacao dessa turma (DDMMAAAA): ";
	cin >> turmas[t].Data;
	cout << "Informe o codigo do curso a que esta turma pertence :";
	cin  >>turmas[t].CodCurso;
	turmas[t].position = t;
	t++;
}
void insert_curso()
{
	cout << "Pronto para criar um novo curso? Siga as instrucoes:\n";
	cout << "Codigo do novo curso: "<<c<<endl;;
	cursos[c].CodCurso = c;
	fflush(stdin);  // LIMPAR O CACHE DE ENTRADA;
	cout<<"Digite o nome do novo curso:"<<endl;
	getline(cin, cursos[c].NomeCurso);
	cursos[c].position = c;
	c++;
}



void remove_aluno()
{

}

void remove_turma()
{

}
void remove_curso()
{

}

void consulta_aluno(int cod)
{

}

void consulta_turma(int cod)
{

}
void consulta_curso(int cod)
{

}



void update_curso()
{

}

void update_turma()
{

}

void update_aluno()
{
	
}






void main()
{
	int a=0, t=0, c=0, codigo=0;
	int choose;
	do {
		codigo=0;
		system("CLS");
		cout << "        MENU PRINCIPAL  \n";
		cout << "\n   [1] Inserir novo curso";
		cout << "\n   [2] Inserir nova turma";
		cout << "\n   [3] Inserir novo aluno\n";

		cout << "\n   [4] Remover curso";
		cout << "\n   [5] Remover turma";
		cout << "\n   [6] Remover aluno\n";

		cout << "\n   [7] Pesquisar curso";
		cout << "\n   [8] Pesquisar turma";
		cout << "\n   [9] Pesquisar aluno\n";

		cout << "\n   [10] Atualizar curso";
		cout << "\n   [11] Atualizar turma";
		cout << "\n   [12] Atualizar aluno\n";

		cout << "\n   [0] Sair\n";
		cin>>choose;


		switch (choose)
		{

		case 1:  //Inserir Curso
			system("CLS");
			insert_curso();
			break;

		case 2:  //Inserir turma
			system("CLS");
			insert_turma();
			break;

		case 3:  //Inserir aluno
			system("CLS");
			insert_aluno();
			break;

		case 4:  //remover Curso
			system("CLS");
			remove_curso();
			break;

		case 5:  //remover turma
			system("CLS");
			remove_turma();
			break;

		case 6:  //remover aluno
			system("CLS");
			remove_aluno();
			break;

		case 7:  //consultar Curso
			system("CLS");
			cout<<"Informe o codigo do curso:";
			cin>>codigo;
			consulta_curso(codigo);
			break;

		case 8:  //consultar turma
			system("CLS");
			cout<<"Informe o codigo da turma:";
			cin>>codigo;
			consulta_turma(codigo);
			break;

		case 9:  //Consultar aluno
			system("CLS");
			cout<<"Informe o codigo do aluno:";
			cin>>codigo;
			consulta_aluno(codigo);
			break;

		case 10:  //Atualizar Curso
			system("CLS");
			update_curso();
			break;

		case 11:  //]Atualizar turma
			system("CLS");
			update_turma();
			break;

		case 12:  //Atulizar aluno
			system("CLS");
			update_aluno();
			break;

		case 0:
			break;

		default:  //caso a opcao nao exista envia mensagem de erro
			system("CLS");
			cout << "Leia as intrucoes!";
			_getch();
			break;

		}
	} while (choose != 0);
}
