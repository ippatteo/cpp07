#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>


template<typename T> void swap(T&a, T&b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
};

template<typename T> T min(T&a, T&b)
{
	return((a < b) ? a : b); // ? si chiama operatore ternario, *(condizione) ? return se vera : return se falsa*
};


template<typename T> T max(T&a, T&b)
{
	return((a > b) ? a : b);
}

#endif

