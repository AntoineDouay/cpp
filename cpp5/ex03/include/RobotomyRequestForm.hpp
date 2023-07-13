#ifndef ROBOTOMYREQUESTFORM_HPP

# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm{
    public :

    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm & copy);
    ~RobotomyRequestForm();

    RobotomyRequestForm& operator=(const RobotomyRequestForm& src);

    void    execute_form() const;

    private :

    std::string _target;
};

#endif