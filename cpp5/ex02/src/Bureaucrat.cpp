
#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unknow")
{
    _grade = 150;
    std::cout << "Bureaucrat Default constructeur called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat Param constructeur called\n";
    try {
        if (_grade < 1)
            throw GradeTooHighException();
        else if (_grade > 150)
            throw GradeTooLowException();
    }
    catch(BureaucratException& e) 
    {
        _grade = 150;
        std::cout << e.what() << " : grade set to 150 (In constructeur)\n" ;
    }
}

Bureaucrat::Bureaucrat( const Bureaucrat & copy ) : _name(copy._name),  _grade(copy._grade)
{
    std::cout << "Bureacurat Copy constructeur called\n";
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat & src )
{
    _grade = src._grade;
    return *this;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade; 
}

void    Bureaucrat::grade_up()
{
    try{
        if (_grade - 1 < 1)
            throw Bureaucrat::GradeTooHighException();
        --_grade;
    }
    catch(BureaucratException& e)
    {
        std::cout << e.what() << " (In grade_up function)\n";
    }
}

void    Bureaucrat::grade_down()
{
    try{
        if (_grade + 1 > 150)
            throw Bureaucrat::GradeTooLowException();
        ++_grade;
    }
    catch(BureaucratException& e)
    {
        std::cout << e.what() << " (In grade_down function)\n";
    }
}

void    Bureaucrat::signForm(const AForm& form)
{
    if (_grade <= form.getGradeToSign())
        std::cout << _name << "signed " << form.getName() << std::endl;
    else
        std::cout << _name << " couldn't sign " << form.getName() << " because his grade is too low"<< std::endl;
}

void    Bureaucrat::executeForm(AForm const & form)
{
	try{
		form.execute(*this);
		std::cout << _name << " execute " << form.getName() << std::endl;
	}
	catch(AForm::CannotExec &e)
	{
		std::cout << _name << " couldn't execute " << form.getName() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructeur called\n";
}

std::ostream&    operator<<(std::ostream& stream, const Bureaucrat& src)
{
    stream << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return stream;  
}