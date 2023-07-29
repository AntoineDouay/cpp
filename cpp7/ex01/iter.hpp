
#ifndef ITER_HPP

# define ITER_HPP

#include <iostream>

template<typename E>
void    speak(E & element)
{
    std::cout << element << " talk\n"; 
}

template<typename A, typename N, typename F>
void    iter(A* array, N size, F func)
{
    int i = 0;
    for(; i < size; i++)
        func(array[i]);
}

#endif