
#include "../include/Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = "I'm hungry";
    std::cout << "Default Brain Constructor Called\n";
    return ;
}

Brain::Brain( Brain const & copy )
{
    *this = copy;
    return;
}

Brain&  Brain::operator=( Brain const & src )
{
    for ( int i = 0; i < 100; i++ )
        _ideas[i] = src._ideas[i];
    return (*this);
}

std::string    Brain::getIdea()
{
    return (_ideas[10]);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called\n";
    return ;
}

