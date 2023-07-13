#ifndef SHRUBERRYCREATIONFORM_HPP

# define SHRUBERRYCREATIONFORM_HPP

#include "AForm.hpp"

#include <fstream>

class ShruberryCreationForm : public AForm{
    public :

    ShruberryCreationForm();
    ShruberryCreationForm(std::string target);
    ShruberryCreationForm(const ShruberryCreationForm & copy);
    ~ShruberryCreationForm();

    ShruberryCreationForm& operator=(const ShruberryCreationForm& src);

    void    execute_form() const;

    private :

    std::string _target;
};

#endif