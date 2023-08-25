
 #include "Array.hpp"

int main()
{
    int    n = 10;


    Array<char> char_array(n);
    Array<char> char_array2;
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

// #include <iostream>
// #include "Array.hpp"
// #include <cstdlib>

// #define MAX_VAL 50
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
// }