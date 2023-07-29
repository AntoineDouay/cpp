
#include "Array.hpp"

int main()
{
    int    n = 10;


    Array<char> char_array(n);
    Array<int>  int_array(n);

    for(int i = 0; i < n; i++)
    {
        char_array[i] = i + 65;
        int_array[i] = i;
    }

    try{
        std::cout << int_array[9] << std::endl;
        std::cout << int_array[-1] << std::endl;
    }
    catch (Array<int>::indexError & e){
        std::cout << e.what() << " from int_array\n";
    }

    try{
        std::cout << char_array[2] << std::endl;
        std::cout << char_array[19] << std::endl;
    }
    catch (Array<char>::indexError & e){
        std::cout << e.what() << " from char_array\n";
    }
    return 0;
}