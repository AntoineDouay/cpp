
#include "../include/Bureaucrat.hpp"
#include "../include/Intern.hpp"
#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShruberryCreationForm.hpp"

int main()
{
    std::cout << "----- Constucteur ----- \n\n";

    Bureaucrat* Tom = new Bureaucrat("tom", 10);
    Intern* 	Timi = new Intern();

   	AForm*		president = new PresidentialPardonForm();
    AForm*      robot = new RobotomyRequestForm("adouay");
    AForm*      arbre = new ShruberryCreationForm("jardin");
    

    try {
        Bureaucrat*       Tim = new Bureaucrat("Tim", -1);
        std::cout << *Tim;
		delete Tim;
    }
    catch (Bureaucrat::BureaucratException& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n ----------- \n";
    std::cout << "----- Intern ----- \n\n";

	AForm* pardon1 = Timi->makeForm("shruberry creation", "foret");
	AForm* pardon2 = Timi->makeForm("president pardon", "voleur");

	(void) pardon2;
	pardon1->beSigned(*Tom);
	pardon1->execute(*Tom);
	
	delete pardon1;

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

	Tom->executeForm(*president);

    robot->execute(*Tom);

    arbre->execute(*Tom);

    std::cout << "\n ----------- \n";
    std::cout << "----- Bureaucrat Info ----- \n\n";

    Tom->grade_down();
    Tom->grade_up();
    std::cout << *Tom;

    std::cout << "\n ----------- \n";

    delete Tom;
    delete Timi;

    delete president;
    delete robot;
    delete arbre;

    return 0;
}