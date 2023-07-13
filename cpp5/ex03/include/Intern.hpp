
#ifndef INTERN_HPP

# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"

class Intern{
	public :

	Intern();
	Intern(const Intern & copy);
	~Intern();

	Intern&	operator=(const Intern &  src);

	AForm*	makePresidentialPardon(std::string target);
	AForm*	makeRobotomyRequest(std::string target);
	AForm*	makeShruberryCreation(std::string target);

	AForm*	makeForm(std::string name, std::string target);

	private :

	std::string	_form_name[3];
	AForm*		(Intern::*_makeform[3])(std::string target);
};

#endif