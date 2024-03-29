
#include "../include/ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm() : AForm("ShruberryCreation", 145, 137)
{
    std::cout << "ShruberryCreationForm constructor called" << std::endl;
    _target = "you";
}

ShruberryCreationForm::ShruberryCreationForm(std::string target) : AForm("ShruberryCreation", 145, 137)
{
    std::cout << "ShruberryCreationForm Param constructor called" << std::endl;
    _target = target;
}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm & copy)
{
    std::cout << "ShruberryCreationForm Copy constructor called" << std::endl;
	*this = copy;
}

ShruberryCreationForm& ShruberryCreationForm::operator=(const ShruberryCreationForm& src)
{
    _target = src._target;
    return *this;
}

void    ShruberryCreationForm::execute_form() const
{
    std::ofstream file((_target + "_shruberry").c_str());

    try{
        if (file.is_open() == 0)
            throw AForm::CannotExec();
    }
    catch (AForm::FormException& e)
    {
        std::cout<< e.what() << " reason : file creation fail\n";
        return ;
    }
    file << "          &&& &&  & &&\n";
    file << "      && &||&||& ()|/ @, &&\n";
    file << "      &|_|(/&/&||/& /_/)_&/_&\n";
    file << "   &() &|+|&|()|/&|| '%'' & ()\n";
    file << "  &_|_&&_|+|& |&&/&__%_/_& &&\n";
    file << "&&   && & &| &| /& & % ()& /&&\n";
    file << " ()&_---()&+&+|&&-&&--%---()~\n";
    file << "     &&     _|||\n";
    file << "             |||\n";
    file << "             |||\n";
    file << "             |||\n";
    file << "       , -=-~  .-^- _\n";
    
    file.close();
}

ShruberryCreationForm::~ShruberryCreationForm()
{
    std::cout << "ShruberryCreationForm destructeur called" << std::endl;
}