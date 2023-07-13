
#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main()
{
    Bureaucrat* Tom = new Bureaucrat("tom", 40);
    Form*       renvoie = new Form("renvoie", 50, 1);
    
    try {
        Form*       promotion = new Form("promotion", 162, 1);
        std::cout << *promotion;
    }
    catch (Form::FormException& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << renvoie->getName() << std::endl;
    std::cout << *renvoie;
    renvoie->beSigned(*Tom);
    std::cout << *renvoie;

    Tom->grade_down();
    Tom->grade_up();
	
    std::cout << *Tom;

    delete Tom;
    delete renvoie;

    return 0;
}