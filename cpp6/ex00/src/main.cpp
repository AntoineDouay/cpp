 
#include "../include/Converter.hpp"

int main(int argc, char **argv)
{

    // std::string a = "sdfdf";
    // int b = static_cast<int>(a);
    // float c = static_cast<float>(a);
    // double d = static_cast<double>(a);

    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << c << std::endl;
    // std::cout << d << std::endl;

    if (argv == NULL)
        return 1;
    if( argc != 2)
        return 1;


    //std::string param = argv[1];
    ScalarConverter C;

    C.convert(argv[1]);
}