
#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
    _target = "you";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5)
{
    std::cout << "PresidentialPardonForm Param constructor called" << std::endl;
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
    _target = src._target;
    return *this;
}

void    PresidentialPardonForm::execute_form() const
{
    std::cout << _target << " was forgiven by Zaphod Beeblebrox\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructeur called" << std::endl;
}