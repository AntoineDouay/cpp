
#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    _target = "you";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72, 45)
{
    std::cout << "RobotomyRequestForm Param constructor called" << std::endl;
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy)
{
    std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
    _target = src._target;
    return *this;
}

void    RobotomyRequestForm::execute_form() const
{
    srand(time(0));

    std::cout << "Process robotomy Brrrrrrr :";
    if (rand() % 2 == 0)
        std::cout << "the operation was a : succes\n";
    else
        std::cout << "the operation was a : 'non' succes\n";

}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructeur called" << std::endl;
}