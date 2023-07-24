
#ifndef CONVERTER_HPP

#define CONVERTER_HPP

#include <iostream>
#include <limits.h>


typedef	enum	type{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INF,
	ERROR
} type;

class ScalarConverter{
    
    public :

    ScalarConverter();
    ScalarConverter(std::string param);
    ScalarConverter( const ScalarConverter & copy);
    ~ScalarConverter();

    ScalarConverter&    operator=(const ScalarConverter & src);

	bool	isChar(std::string param);
	bool	isInt(std::string param);
	bool	isFloat(std::string param);
	bool	isDouble(std::string param);
	bool	isInf(std::string param);
	bool	noDecimal();

	int		getType();

	void	convert(std::string param);

	void	printChar();
	void	printInt();
	void	printFloat();
	void	printDouble();
	void	printInf();


    private :

	bool		(ScalarConverter::*_bool_type[5])(std::string param);
	type			_type;

    std::string		_param;
	double long		_value;
	char			_char;
    // int             _int;
    // float			_float;
    // double 			_double;
};

#endif