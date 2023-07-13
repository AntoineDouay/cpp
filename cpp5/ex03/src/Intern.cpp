
#include "../include/Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default constructor called\n";
	
	_form_name[0] = "presidential pardon";
	_form_name[1] = "robotomy request";
	_form_name[2] = "shruberry creation";

	_makeform[0] = &Intern::makePresidentialPardon; 
	_makeform[1] = &Intern::makeRobotomyRequest; 
	_makeform[2] = &Intern::makeShruberryCreation;
}

Intern::Intern(const Intern & copy)
{
	std::cout << "Intern Copy constructor called\n";
	*this = copy;
}

Intern&	Intern::operator=(const Intern & src)
{
	_form_name[0] = src._form_name[0];
	_form_name[1] = src._form_name[1];
	_form_name[2] = src._form_name[2];

	return *this;
}

AForm*	Intern::makePresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeRobotomyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::makeShruberryCreation(std::string target)
{
	return (new ShruberryCreationForm(target));
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	for(int i = 0; i < 3; i++)
	{
		if (name == _form_name[i])
		{
			std::cout << "Intern create " << name << std::endl;
			return ((this->*_makeform[i])(target));
		}
	}
	std::cout << "cannot make this form\n";
	return NULL;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called\n";
}