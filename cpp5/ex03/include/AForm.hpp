
#ifndef AFORM_HPP

# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    public :

    AForm(); 
    AForm(const std::string name, int grade_to_sign, int grade_to_exec); 
    AForm(const AForm & copy); 
    virtual ~AForm(); 

    AForm&   operator=(const AForm & src);


    std::string     getName() const;
    int             getGradeToSign() const;
    int             getGradeToExec() const;
    
    bool            IsSigned() const;

    void            beSigned(const Bureaucrat& b);
    void            execute(Bureaucrat const & executor) const;
    virtual void    execute_form() const = 0;

    class FormException : public std::exception{
        public :
        virtual const char *    what() const throw() = 0; 
    };

    class CannotExec : public FormException{
        public :
        virtual const char *    what() const throw() {return RED "[FormException]" WHITE " Cannot Execute";}
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

std::ostream&   operator<<(std::ostream& stream, const AForm& src);

#endif