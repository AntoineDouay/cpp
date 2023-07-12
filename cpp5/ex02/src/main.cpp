
#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShruberryCreationForm.hpp"

int main()
{
    std::cout << "----- Constucteur ----- \n\n";

    Bureaucrat* Tom = new Bureaucrat("tom", 2);
    AForm*       president = new PresidentialPardonForm("pardon2", "ilandols");
    AForm*       robot = new RobotomyRequestForm("robotomy", "adouay");
    AForm*       arbre = new ShruberryCreationForm("arbre", "jardin");
    

    try {
        Bureaucrat*       Tim = new Bureaucrat("Tim", -1);
        std::cout << *Tim;
    }
    catch (Bureaucrat::BureaucratException& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n ----------- \n";
    std::cout << "----- Form Info ----- \n\n";

    std::cout << *president;
    std::cout << president->getName() << std::endl;
    president->beSigned(*Tom);
    std::cout << *president;

    std::cout << *robot;
    std::cout << robot->getName() << std::endl;
    robot->beSigned(*Tom);
    std::cout << *robot;

    std::cout << *arbre;
    std::cout << arbre->getName() << std::endl;
    arbre->beSigned(*Tom);

    std::cout << "\n ----------- \n";
    std::cout << "----- Form Exec ----- \n\n";

    president->execute(*Tom);

    robot->execute(*Tom);

    arbre->execute(*Tom);

    std::cout << "\n ----------- \n";
    std::cout << "----- Bureaucrat Info ----- \n\n";

    Tom->grade_down();
    Tom->grade_up();
    std::cout << *Tom;

    std::cout << "\n ----------- \n";

    delete Tom;
    delete president;
    delete robot;

    return 0;
}