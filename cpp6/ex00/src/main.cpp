 
#include "../include/Converter.hpp"

int main(int argc, char **argv)
{
    if (argv == NULL)
        return 1;
    if( argc != 2)
        return 1;
    ScalarConverter C;

    C.convert(argv[1]);

	return 0;
}