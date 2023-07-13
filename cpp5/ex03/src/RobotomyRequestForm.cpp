
#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest", 72, 45)
{
    std::cout << "RobotomyRequestForm constructeur called" << std::endl;
    _target = "you";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72, 45)
{
    std::cout << "RobotomyRequestForm Param constructeur called" << std::endl;
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy)
{
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