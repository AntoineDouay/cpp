
#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

#define RED "\033[31m"
#define WHITE "\033[0m"


#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat{

    public : 

    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat( const Bureaucrat & copy);
    ~Bureaucrat();

    Bureaucrat& operator=(const Bureaucrat & src);

    std::string getName() const;
    int         getGrade() const;

    void        grade_up();
    void        grade_down();
    void        signForm(const AForm& form);
	void		executeForm(AForm const & form);


    class BureaucratException : public std::exception{
        public :
        virtual const char* what() const throw() = 0;
    };
    class GradeTooHighException : public BureaucratException{
        public :
        virtual const char* what() const throw() {return (RED "[BureaucratException]" WHITE " grade too high");}
    };
    class GradeTooLowException : public BureaucratException{
        public :
        virtual const char* what() const throw() {return RED "[BureaucratException]" WHITE " grade too low";}
    };

    private : 

    const std::string   _name;
    int                 _grade;
};

std::ostream&    operator<<(std::ostream& stream, const Bureaucrat& src);   

#endif