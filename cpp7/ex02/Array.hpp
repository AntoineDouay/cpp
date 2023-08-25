
#ifndef ARRAY_HPP

#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array{
    public :

    Array(){
        _array = new T[0];
        _n = 0;
        std::cout << "default constructor called\n";
    }
    Array(unsigned int n){
        _array = new T[n];
        // for (unsigned int i = 0; i < n; i++)
        //     i++;
        _n = n;
        std::cout << "param constructor called\n";
    }
    Array(Array & copy){
		_array = NULL;
        *this = copy;
    }
    ~Array(){
        delete _array;
        std::cout << "default destructor called\n";
    }

    Array&  operator=(Array & src){
        if (_array)
            delete _array;
        _array = new T[src.size()];
        _n = src.size();
        for(int i = 0; i < _n; i++)
            _array[i] = src._array[i];
        return (*this);
    }

    T&      operator[](int n){
        if (n < 0 || n >= _n)
            throw indexError();
        return(_array[n]);
    }

    int     size(){
        return (_n);
    }

    class indexError : public std::exception{
        public :
        virtual char const * what() const throw() {return "Index Error";}
    };

    private :

    T*  _array;
    int _n;

};

#endif