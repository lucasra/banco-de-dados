#pragma once
#include "Lista.h"
#include "curso.h"
#include <string.h>
#include <iostream>
class escola
{
private:
	Lista<curso*> Cursos;
public:
	escola();
	~escola();
	// O métido InsertCurso insere um novo curso na escola (RAIZ) e chama o metodo InsertTurma;
	// O método InsertTurma insere uma nova turma na lista de turmas de tal curso;
	// Durante a criação da turma é necessário ja cadastrar os alunos dentro dela;
	// Assim mantemos a hierarquia de Curso->Turma->Alunos;
	void InsertCurso();
};

