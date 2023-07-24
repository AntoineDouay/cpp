
#include "../include/Converter.hpp"


ScalarConverter::ScalarConverter(std::string param) : _type(static_cast<type>(5)), _param(param), _value(atof(param.c_str())), _char(0)
{
    _bool_type[0] = &ScalarConverter::isChar;
    _bool_type[1] = &ScalarConverter::isInt;
    _bool_type[2] = &ScalarConverter::isFloat;
    _bool_type[3] = &ScalarConverter::isDouble;
    _bool_type[4] = &ScalarConverter::isInf;

    int i = 0;
    for(; i < 5; i++)
    {
        if((this->*_bool_type[i])(param))
            _type = static_cast<type>(i);
    }
}

ScalarConverter::ScalarConverter(const ScalarConverter & copy) : _type(static_cast<type>(5)), _param(NULL), _value(0), _char(0)
{
    _bool_type[0] = &ScalarConverter::isChar;
    _bool_type[1] = &ScalarConverter::isInt;
    _bool_type[2] = &ScalarConverter::isFloat;
    _bool_type[3] = &ScalarConverter::isDouble;
    _bool_type[4] = &ScalarConverter::isInf;

    *this = copy;
}


ScalarConverter::ScalarConverter::ScalarConverter() : _type(static_cast<type>(5)), _param(""), _value(0), _char(0)
{
    _bool_type[0] = &ScalarConverter::isChar;
    _bool_type[1] = &ScalarConverter::isInt;
    _bool_type[2] = &ScalarConverter::isFloat;
    _bool_type[3] = &ScalarConverter::isDouble;
    _bool_type[4] = &ScalarConverter::isInf;
}
ScalarConverter::~ScalarConverter(){}


ScalarConverter&    ScalarConverter::operator=(const ScalarConverter & src)
{
    _param = src._param;
    _type = src._type;
    _value = src._value;
    _char = src._char;
    // _int = src._int;
    // _float = src._float;
    // _double = src._double;
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
        i++;
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
        i++;
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
        return true;   
	return false;
}

bool    ScalarConverter::isDouble(std::string param)
{
    int i = 0;
    bool point = false;
    if (param[0] == '-' || param[0] == '+')
        i++;
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
        return true;   
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
        std::cout << static_cast<char>(_value) << std::endl;
    else if (_type == INF)
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        if (not isprint(static_cast<int>(_value)))
            std::cout << "not displayable" << std::endl;
        else
            std::cout << static_cast<char>(_value) << std::endl;
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
    std::cout << static_cast<int>(_value) << std::endl;
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
    std::cout << static_cast<float>(_value);
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
    std::cout << static_cast<double>(_value);
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
    // bool    point = false;
    // unsigned long i = 0;
    // if (_type == FLOAT || _type == DOUBLE)
    // {
    //     for (; _param[i]; i++)
    //     {
    //         if (_param[i] == '.')
    //         {
    //             point = true;
    //             break ;
    //         }
    //     }
    //     if (not point)
    //         return true;
    // }
    // else
    //     return true;

    // if(_type == FLOAT)
    // {
    //     if (_param[i + 1] && _param[i + 2] && _param[i + 1] == '0' && _param[i + 2] == 'f')
    //         return true;
    //     return false;
    // }
    // if(_type == DOUBLE)
    // {
    //     if (_param[i + 1] && _param[i + 1] == '0')
    //         return true;
    //     return false;
    // }
    // return false;
}

void    ScalarConverter::convert(std::string param)
{

    if(_param.empty())
    {
        if(param.empty())
            return;
        else
            _param = param;
    }
    int i = 0;
    for(; i < 5; i++)
    {
        if((this->*_bool_type[i])(param))
            _type = static_cast<type>(i);
    }
    if (_type == CHAR)
    {
        _char = static_cast<int>(param[0]);
        _value = static_cast<int>(param[0]);
    }
    else if(_type == ERROR)
    {
        std::cout << "invalid param \n";
        return ;
    }
    // else if (ERROR)
    else
        _value = atof(param.c_str());
    std::cout << _type << std::endl;

    printChar();
    printInt();
    printFloat();
    printDouble();
    // if (_type == CHAR)
    // {
    //     _char = _param[0];
    //     _value = static_cast<double long>(_param[0]);
    // }
    // if (_type == INT)
    //     _int = param[0];
    // if (_type == CHAR)
    //     _char = param[0];
    // if (_type == CHAR)
    //     _char = param[0];
    //     _value = static_cast<char>(param[0]);
}
// void    displayChar(char c)
// {
//     std::cout << "char : " << c << std::endl;
//     std::cout << "int : " << static_cast<int>(c) << std::endl;
//     std::cout << "float : " << static_cast<float>(c) << ".0f" << std::endl;
//     std::cout << "double : " << static_cast<double>(c) << ".0" <<  std::endl;
// }

// void    displayInt(int n)
// {
//     std::cout << "char : " << c << std::endl;
//     std::cout << "int : " << static_cast<int>(c) << std::endl;
//     std::cout << "float : " << static_cast<float>(c) << ".0f" << std::endl;
//     std::cout << "double : " << static_cast<double>(c) << ".0" <<  std::endl;
// }

// void	checkParam(std::string param)
// {
//     if isInf(param)
//         displayInf();
// 	if(isChar(param))
// 		displayChar(param[0]);
// 	if(isInt(param))
// 		return;
//     if(isFloat(param))
//         return;
//     if(isDouble(param))
//         return;
// }
