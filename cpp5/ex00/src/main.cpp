
#include "../include/Bureaucrat.hpp"

int main()
{
    Bureaucrat *Tom = new Bureaucrat("tom", -1);

    Tom->grade_down();
    Tom->grade_up();
    Tom->grade_up();
    Tom->grade_up();
    Tom->getName();
    Tom->getGrade();
    Tom->grade_down();
    std::cout << *Tom;

	delete Tom;

    return 0;
}