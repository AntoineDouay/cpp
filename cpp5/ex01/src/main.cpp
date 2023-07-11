
#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main()
{
    Bureaucrat* Tom = new Bureaucrat("tom", -1);
    Form*       renvoie = new Form("renvoie", 10, 1);
    
    std::cout << renvoie->getName() << std::endl;
    std::cout << *renvoie;

    Tom->grade_down();
    Tom->grade_up();
    std::cout << *Tom;

    delete Tom;
    delete renvoie;

    return 0;
}