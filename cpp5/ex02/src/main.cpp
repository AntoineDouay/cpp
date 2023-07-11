
#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat* Tom = new Bureaucrat("tom", 2);
    AForm*       renvoie = new PresidentialPardonForm("pardon2", "ilandols");
    
    try {
        AForm*       promotion = new PresidentialPardonForm("pardon47]", "antoine");
        std::cout << *promotion;
    }
    catch (AForm::FormException& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << renvoie->getName() << std::endl;
    std::cout << *renvoie;

    renvoie->beSigned(*Tom);
    renvoie->execute(*Tom);

    Tom->grade_down();
    Tom->grade_up();
    std::cout << *Tom;

    delete Tom;
    delete renvoie;

    return 0;
}