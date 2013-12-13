#ifndef NOHLISTA_H_
#define NOHLISTA_H_

#include "NohLista.h"
#include <cstdlib>
using namespace std;

template<class NohType> class NohLista
{
private:
	NohType data;
	NohLista<NohType> *previous;
	NohLista<NohType> *next;
public:
	NohLista<NohType>(void);
	~NohLista<NohType>(void);
	NohLista<NohType>(NohType);
	NohLista<NohType>(NohType, NohLista<NohType>*);
	NohLista<NohType>(NohType, NohLista<NohType>*, NohLista<NohType>*);
	NohLista<NohType>* getNext();
	NohLista<NohType>* getPrev();
	NohType getData();
	void setNext(NohLista<NohType>*);
	void setPrev(NohLista<NohType>*);
	void setData(NohType);
};
template<class NohType>
NohLista<NohType>::NohLista(void)
{
	next = nullptr;
	previous = nullptr;
}
template<class NohType>
NohLista<NohType>::~NohLista(void)
{

}
template<class NohType>
NohLista<NohType>::NohLista(NohType insertData)
{
	next = previous = nullptr;
	data = insertData;
}
template<class NohType>
NohLista<NohType>::NohLista(NohType insertData, NohLista<NohType> *insertPrevious)
{
	previous = insertPrevious;
	next = nullptr;
	data = insertData;
}
template<class NohType>
NohLista<NohType>::NohLista(NohType insertData, NohLista<NohType> *insertNext,  NohLista<NohType> *insertPrevious)
{
	previous = insertPrevious;
	next = insertNext;
	data = insertData;
}
template<class NohType>
NohLista<NohType>* NohLista<NohType>::getNext()
{
	return next;
}
template<class NohType>
NohLista<NohType>* NohLista<NohType>::getPrev()
{
	return previous;
}
template<class NohType>
NohType NohLista<NohType>::getData()
{
	return data;
}
template<class NohType>
void NohLista<NohType>::setNext(NohLista<NohType> *insertNext)
{
	next = insertNext;
}
template<class NohType>
void NohLista<NohType>::setPrev(NohLista<NohType> *insertPrevious)
{
	previous = insertPrevious;
}
template<class NohType>
void NohLista<NohType>::setData(NohType insertData)
{
	data = insertData;
}
#endif