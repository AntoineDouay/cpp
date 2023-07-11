
#include "../include/Bureaucrat.hpp"

int main()
{
    Bureaucrat *Tom = new Bureaucrat("tom", -1);

    Tom->grade_down();
    Tom->grade_up();
    std::cout << *Tom;
    return 0;
}