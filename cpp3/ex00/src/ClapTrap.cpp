
#include "../include/ClapTrap.hpp"

ClapTrap::ClaptTrap( void ) : _hp(10), _energy_point(10), _atk_dmg(0)
{
    std::cout << "Constructor called\n";
}

ClapTrap ( const std::string name )
{
    std::cout << "Constructor with name called\n";
    _name = name;
    _hp = 10;
    _energy_point(10);
    _atk_dmg = 0;
    return ;
}

ClapTrap::ClapTrap( ClapTrap const &src )
{
    std::cout << "Copy Constructor called\n";
    *this = src;
    return ;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor Called \n";
}

ClapTrap&   ClapTrap::operator=( ClapTrap const &src )
{
    _name = src.get_name();
    _hp = src.get_hp();
    _energy_point = src.get_energy_point();
    _atk_dmg = src.get_atk_dmg();
    return *this;
}

void    ClapTrap::attack ( const std::string& target )
{
    std::cout << _name << " attack " << target << ", causing " << _atk_dmg << " points of dammage !\n";
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << _name << "has been hit by an attack dealing " << amount << " damage\n";
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    std::cout << _name << "has been repaired by " << amount << "point\n";
}

std::string ClapTrap::get_name( void )
{
    return _name;
}
int ClapTrap::get_hp( void )
{
    return _hp;
}

int ClapTrap::get_energy_point( void )
{
    return _energy_point;
}

int ClapTrap::get_atk_dmg( void )
{
    return _atk_dmg;
}