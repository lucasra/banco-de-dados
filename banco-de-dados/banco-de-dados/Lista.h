#ifndef LISTA_H_
#define LISTA_H_

#include "NohLista.h"
#include <iostream>
using namespace std;

template<class NohType> class Lista
{
private:
	NohLista<NohType> *START;
	NohLista<NohType> *END;
public:
	Lista<NohType>(void);
	~Lista<NohType>(void);
	bool IsEmpty();
	void InsereNoInicio(NohType);
	void InsereNoFim(NohType);
	void ImprimeDoInicioParaFim();
	void ImprimeDoFimParaInicio();
	NohLista<NohType>* PesquisaLista(int);

};

template<class NohType>
Lista<NohType>::Lista(void)
{
	START = nullptr;
	END = nullptr;
}
template<class NohType>
Lista<NohType>::~Lista(void)
{

}
template<class NohType>
bool Lista<NohType>::IsEmpty()
{
	if(START == nullptr && END == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<class NohType>
void Lista<NohType>::InsereNoInicio(NohType insertData)
{
	if(IsEmpty() == true)
	{
		START = END = new NohLista<NohType>(insertData);
	}
	else
	{
		NohLista<NohType> *temp = new NohLista<NohType>(insertData, START, nullptr);
		START->setPrev(temp);
		START = temp;
	}
}
template<class NohType>
void Lista<NohType>::InsereNoFim(NohType insertData)
{
	if(IsEmpty() == true)
	{
		START = END = new NohLista<NohType>(insertData);
	}
	else
	{
		NohLista<NohType> *temp = new NohLista<NohType>(insertData, END);
		END->setNext(temp);
		END = temp;
	}
}
template<class NohType>
void Lista<NohType>::ImprimeDoInicioParaFim()
{
	NohLista<NohType> *temp = START;
	cout << "Os elementos presentes na lista sao: ";
	while(temp != nullptr)
	{
		cout << temp->getData() << " ";
		temp = temp->getNext();
	}
	cout << endl;
}
template<class NohType>
void Lista<NohType>::ImprimeDoFimParaInicio()
{
	NohLista<NohType> *temp = END;
	cout << "Os elementos presentes na lista sao: ";
	while(temp != nullptr)
	{
		cout << temp->getData() << " ";
		temp = temp->getPrev();
	}
	cout << endl;
}
template<class NohType>
NohLista<NohType>* Lista<NohType>::PesquisaLista(int procurado)
{
	NohLista<NohType> *temp = START;
	int a = 0;
	while(temp != nullptr)
	{
		if(temp->getData() == procurado)
		{
			a++;
			break;
		}
		temp = temp->getNext();
	}
	if(a>0)
	{
		return temp;
	}
	else
	{
		return nullptr;
	}
}
#endif