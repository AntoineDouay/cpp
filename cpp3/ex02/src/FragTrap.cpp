#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hp = 100;
    _energy_point = 100;
    _atk_dmg = 30;
    std::cout << "FragTrap default constructor called\n";
    return ;
}

FragTrap::FragTrap( const std::string name ) : ClapTrap( name )
{
    _name = name;
    _hp = 100;
    _energy_point = 100;
    _atk_dmg = 30;
    std::cout << "FragTrap name constructor called\n";
    return ;
}

FragTrap::FragTrap( FragTrap const & src) : ClapTrap( src )
{
    *this = src;
    std::cout << "FragTrap copy constructor called\n";
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
    return ;
}

FragTrap&   FragTrap::operator=( FragTrap const & src)
{
    _name = src._name;
    _hp = src._hp;
    _energy_point = src._energy_point;
    _atk_dmg = src._atk_dmg;
    return *this;
}

void	FragTrap::attack( const std::string & src )
{
	if (_energy_point <= 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy left\n";
		return;
	}
	if (_hp <= 0)
	{
		std::cout <<  "FragTrap " << this->_name << " is dead\n";
		return;
	}
	_energy_point--;
	std::cout << "FragTrap " << _name << " attack by " << _atk_dmg << " hp " << src << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " give me a Highfive !!\n";
}

