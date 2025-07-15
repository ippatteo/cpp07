#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept> 
#include <string> 

template <typename T>
class Array
{
	private:
		unsigned int _size;
		T*	_array;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		Array& operator=(const Array& obj); //qua possiamo non scrivere Array<T> perche stiamo gia nel contesto "<T>"
		~Array();
		T& operator[](unsigned int index);
	};

//Construction with no parameter: Creates an empty array.
//ogni funzione ricordati di richiamare il template
template <typename T>
Array<T>::Array() : _size(0), _array(new T[0])
{
}


/*
Construction with an unsigned int n as a parameter: Creates an array of n elements initialized by default.
Tip: Try to compile int * a = new int(); then display *a.
*/
template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[n])
{
}

/*
Construction by copy
*/
template <typename T>
Array<T>::Array(const Array &to_copy) :  _size(to_copy._size), _array(new T[to_copy._size])
{
	for (unsigned int i = 0; i < _size; i++)
	{
		_array[i] = to_copy._array[i];
	}
}

/*
assignment operator
qui Devo specificare al compilarore (almeno nel ritorno) che tipo stiamo utilizzando (<T>) quindi non 
è Array&::(...) ma Array<T>::(...)
PERCHé? perche il compilatore PRIMA vede il ritorno e poi guarda il nmespace quindi NON sa che noi stiamo 
utilizzndo <T> al momento in cui guarda la funzione se non glielo diciamo, dopo che ha questa info lo 
deduce, infatti queste sono entrambi giuste:

 Versione 1 - parametro implicito
Array<T>& Array<T>::operator=(const Array& obj)

Versione 2 - parametro esplicito  
Array<T>& Array<T>::operator=(const Array<T>& obj)
*/
template <typename T>
Array<T>& Array<T>::operator=(const Array& to_copy)
{
	if (this == &to_copy)
		return *this;
	delete []_array;
	_array = new T[to_copy._size];
	_size = to_copy._size;
	for (unsigned int i = 0; i < _size; i++)
	{
		_array[i] = to_copy._array[i];
	}
	return *this;
}


/*
perché delete []_array e non delete _array, in c free me lo fa fare lo stesso per puntatori
e per array, questo perche new[n] e delete[n] oltre ad allocare chiamano n costruttori/distruttori
mentre new e delete solo uno, quindi il compilatore SI ASPETTA delete[]
*/
template <typename T>
Array<T>::~Array()
{
	std::cout<<"Array destructor called"<<std::endl;
	delete []_array;
}



template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("index out of bounds");
	return _array[index];
}