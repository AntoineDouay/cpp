

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

AForm::AForm() : _name("unknow"), _signed(false), _grade_to_sign(150), _grade_to_exec(150)
{
    std::cout << "Default AForm constructor called\n";
}

AForm::AForm(const std::string name, const int grade_to_sign, const int grade_to_exec) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
    std::cout << "Param AForm constructor called\n";

    if (_grade_to_sign < 1)
        throw GradeTooHighException();
    else if (_grade_to_sign > 150)
        throw GradeTooLowException();
        
    if (_grade_to_exec < 1)
        throw GradeTooHighException();
    else if (_grade_to_exec > 150)
        throw GradeTooLowException();
}
AForm::AForm( const AForm& copy) : _name(copy._name), _signed(copy._signed), _grade_to_sign(copy._grade_to_sign), _grade_to_exec(copy._grade_to_exec)
{
    std::cout << "Copy AForm constructor called\n";
}

AForm&   AForm::operator=(const AForm& src)
{
    _signed = src._signed;
    return *this;
}

std::string AForm::getName() const
{
    return _name;
}

int AForm::getGradeToSign() const
{
    return _grade_to_sign;
}

int AForm::getGradeToExec() const
{
    return _grade_to_exec;
}

bool    AForm::IsSigned() const
{
    return _signed;
}

void    AForm::beSigned(const Bureaucrat& b)
{
    try
    {
        if (b.getGrade() > _grade_to_sign)
            throw AForm::GradeTooLowException();
        _signed = true;
    }
    catch (FormException& e)
    {
        std::cout << e.what() << " (in beSigned function) \n"; 
    }
}

void   AForm::execute(Bureaucrat const & executor)
{
    try{
        if (IsSigned() && executor.getGrade() <= getGradeToExec())
            execute_form();
        else
            throw AForm::CannotExec();
    }
    catch(AForm::FormException& e)
    {
        std::cout << e.what() << std::endl;
    }
}

std::ostream&   operator<<(std::ostream& stream, const AForm& src)
{
    stream << src.getName();
    stream << " | form can get signed at grade : " << src.getGradeToSign();
    stream << " | can get executate at grade : " << src.getGradeToExec();
    stream << " | current state : ";
    if (src.IsSigned() == true)
        stream << "signed\n";
    else
        stream << "unsigned\n";
    return stream;
}

AForm::~AForm()
{
    std::cout << "Form destructor called\n";
}