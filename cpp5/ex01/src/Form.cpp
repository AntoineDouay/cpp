

#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"

Form::Form() : _name("unknow"), _signed(false), _grade_to_sign(150), _grade_to_exec(150)
{
    std::cout << "Default Form constructor called\n";
}

Form::Form(const std::string name, const int grade_to_sign, const int grade_to_exec) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
    std::cout << "Param Form constructor called\n";
}

Form::Form( const Form& copy) : _name(copy._name), _signed(copy._signed), _grade_to_sign(copy._grade_to_sign), _grade_to_exec(copy._grade_to_exec)
{
    std::cout << "Copy Form constructor called\n";
}

Form&   Form::operator=(const Form& src)
{
    _signed = src._signed;
    return *this;
}

std::string Form::getName() const
{
    return _name;
}

bool    Form::getSigned() const
{
    return _signed;
}

int Form::getGradeToSign() const
{
    return _grade_to_sign;
}

int Form::getGradeToExec() const
{
    return _grade_to_exec;
}

void    Form::beSigned(const Bureaucrat& b)
{
    try
    {
        if (b.getGrade() > _grade_to_sign)
            throw Form::GradeTooLowException();
        _signed = true;
    }
    catch (FormException& e)
    {
        std::cout << e.what() <<  " (in besigned function) \n"; 
    }
}

std::ostream&   operator<<(std::ostream& stream, const Form& src)
{
    stream << src.getName();
    stream << " | form can get signed at grade : " << src.getGradeToSign();
    stream << " | can get executate at grade : " << src.getGradeToExec();
    stream << " | current state : ";
    if (src.getSigned() == true)
        stream << "signed\n";
    else
        stream << "unsigned\n";
    return stream;
}

Form::~Form()
{
    std::cout << "Form destructor called\n";
}