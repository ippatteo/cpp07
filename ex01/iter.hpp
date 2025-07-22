#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>



template <typename T, typename Func> // func puo essere qualsiasi cosa in teoria, pure string.. ma
void	iter(T *array, int size, Func func)
{
	for (int i = 0; i < size; i++)
		func(array[i]); //questo fa in modo che il compilatore qui si aspetti qualcosa che abbia dei parametri, come una funzione
}



template <typename T>
void	call(T inArray)//questa è un normale template, puo anche essere chiamato diurettamente, ma noi lo useremo per metterlo come terzo param
{
	std::cout<<"value of the array "<< inArray <<std::endl;
}

#endif
