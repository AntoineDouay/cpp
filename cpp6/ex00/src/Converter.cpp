
#include "../include/Converter.hpp"

ScalarConverter::ScalarConverter::ScalarConverter() : _type(static_cast<type>(5)), _param(""), _value(0), _char(0), _int(0), _float(0), _double(0)
{
    _bool_type[0] = &ScalarConverter::isChar;
    _bool_type[1] = &ScalarConverter::isInt;
    _bool_type[2] = &ScalarConverter::isFloat;
    _bool_type[3] = &ScalarConverter::isDouble;
    _bool_type[4] = &ScalarConverter::isInf;
}

ScalarConverter::ScalarConverter(std::string param) : _type(static_cast<type>(5)), _param(param), _value(atof(param.c_str())), _char(0),  _int(0), _float(0), _double(0)
{
    _bool_type[0] = &ScalarConverter::isChar;
    _bool_type[1] = &ScalarConverter::isInt;
    _bool_type[2] = &ScalarConverter::isFloat;
    _bool_type[3] = &ScalarConverter::isDouble;
    _bool_type[4] = &ScalarConverter::isInf;

}

ScalarConverter::ScalarConverter(const ScalarConverter & copy)
{
    _bool_type[0] = &ScalarConverter::isChar;
    _bool_type[1] = &ScalarConverter::isInt;
    _bool_type[2] = &ScalarConverter::isFloat;
    _bool_type[3] = &ScalarConverter::isDouble;
    _bool_type[4] = &ScalarConverter::isInf;

    *this = copy;
}



ScalarConverter::~ScalarConverter(){}


ScalarConverter&    ScalarConverter::operator=(const ScalarConverter & src)
{
    _param = src._param;
    _type = src._type;
    _value = src._value;
    _char = src._char;
    _int = src._int;
    _float = src._float;
    _double = src._double;
    return *this;
}

bool ScalarConverter::isChar(std::string param)
{
	return (param.size() == 1 && not isdigit(param[0]));
}

bool ScalarConverter::isInt(std::string param)
{
	int i = 0;
    if (param[0] == '-' || param[0] == '+')
	{
        i++;
	}
	for(; param[i]; i++)
	{
        if(not isdigit(param[i]))
            return false;
	}
	return true;
}

bool    ScalarConverter::isFloat(std::string param)
{
    unsigned int i = 0;
    bool point = false;
    if (param[0] == '-' || param[0] == '+')
	{
        i++;
	}
	for(; param[i]; i++)
	{
        if(not isdigit(param[i]))
        {
            if (param[i] == '.' && not point)
                    point = true;
            else
                break ;
        }
	}
    if (param[i] == 'f' && param.size() == i + 1)
	{
        return true;   
	}
	return false;
}

bool    ScalarConverter::isDouble(std::string param)
{
    int i = 0;
    bool point = false;
    if (param[0] == '-' || param[0] == '+')
	{
        i++;
	}
	for(; param[i]; i++)
	{
        if(not isdigit(param[i]))
        {
            if (param[i] == '.' && not point)
                point = true;
            else
                return false;
        }
	}
    if (point)
	{
        return true;
	}
	return false;
}

bool ScalarConverter::isInf(std::string param)
{
    return (!(param.compare("+inf") && param.compare("-inf") && param.compare("+inff") && param.compare("-inff") && param.compare("nan") && param.compare("nanf")));
}

int ScalarConverter::getType()
{
    return _type;
}

void    ScalarConverter::printChar()
{
    std::cout << "char: ";
    if( _type == CHAR)
        std::cout << _char << std::endl;
    else if (_type == INF)
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
		_char = static_cast<char>(_value);
        if (not isprint(_char))
            std::cout << "not displayable" << std::endl;
        else
            std::cout << _char << std::endl;
    }
}
void    ScalarConverter::printInt()
{
    std::cout << "int: ";
    if (_type == INF)
    {
        std::cout << "impossible" << std::endl;
        return;    
    }
	if (_type != INT)
		_int = static_cast<int>(_value);
    std::cout << _int << std::endl;
}
void    ScalarConverter::printFloat()
{
    std::cout << "float: ";
    if (_type == INF)
    {
        std::cout << _param;
        if (_param.compare("+inff") && _param.compare("-inff") && _param.compare("nanf"))
            std::cout << "f";
        std::cout << std::endl;
        return ;
    }
    if (_type != FLOAT)
		_float = static_cast<float>(_value);
	std::cout << _float;
    if(_type == INT || _type == CHAR || noDecimal())
        std::cout << ".0";
    std::cout << "f" <<std::endl;

}
void    ScalarConverter::printDouble()
{
    std::cout << "double: ";
    if (_type == INF)
    {
        if( (_param.compare("+inff") || _param.compare("-inff")))
            std::cout << _param.substr(0,4) << std::endl;
        else if ( not _param.compare("nanf"))
            std::cout << _param.substr(0,3) << std::endl;
        else
            std::cout << _param << std::endl;
        return ;    
    }
	if (_type != DOUBLE)
		_double = static_cast<double>(_value);
	std::cout << _double;
    if(_type == INT || _type == CHAR || noDecimal())
        std::cout << ".0";
    std::cout << std::endl; 
}

bool    ScalarConverter::noDecimal()
{
    char c = '1';

	if (static_cast<int>(_param.find('.')) == -1)
		return (true);
	while (c <= '9')
	{
		if (static_cast<int>(_param.find(c, static_cast<int>(_param.find('.')))) != -1)
			return (false);
		c++;
	}
	return (true);
}

void    ScalarConverter::convert(std::string param)
{

    if(_param.empty())
    {
        if(param.empty())
            return;
    }
	if (not param.empty())
    	_param = param;
    int i = 0;
    for(; i < 5; i++)
    {
        if((this->*_bool_type[i])(_param))
            _type = static_cast<type>(i);
    }
	if(_type == INT)
		_int = atoi(_param.c_str());
	else if(_type == FLOAT)
		_int = atof(_param.c_str());
	else if(_type == DOUBLE)
		_int = atof(_param.c_str());
    else if(_type == ERROR)
    {
        std::cout << "invalid param \n";
        return ;
    }
    _value = atof(_param.c_str());

    if (_type == CHAR)
    {
        _char = static_cast<int>(_param[0]);
        _value = static_cast<int>(_param[0]);
    }
	
    printChar();
    printInt();
    printFloat();
    printDouble();
}

