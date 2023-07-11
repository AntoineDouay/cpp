
#ifndef FORM_HPP

# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public :

    Form(); 
    Form(const std::string name, int grade_to_sign, int grade_to_exec); 
    Form(const Form & copy); 
    ~Form(); 

    Form&   operator=(const Form & src);


    std::string     getName() const;
    bool            getSigned() const;
    int             getGradeToSign() const;
    int             getGradeToExec() const;

    void            beSigned(const Bureaucrat& b);

    class FormException : public std::exception{
        public :
        virtual const char *    what() const throw() = 0; 
    };

    class GradeTooHighException : public FormException{
        public :
        virtual const char *    what() const throw() {return RED "[FormException]" WHITE " grade too high";}
    };

    class GradeTooLowException : public FormException{
        public :
        virtual const char *    what() const throw() {return  RED "[FormException] " WHITE " grade too low";}
    };

    private :

    const std::string   _name;
    bool                _signed;
    const int           _grade_to_sign;
    const int           _grade_to_exec;

};

std::ostream&   operator<<(std::ostream& stream, const Form& src);

#endif