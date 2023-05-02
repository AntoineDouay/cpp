
# ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

    public :

    ClapTrap( void );
    ClapTrap( const std::string  name );
    ClapTrap( ClapTrap const & src );
    ~ClapTrap( void );

    ClapTrap&   operator=( ClapTrap const &src);

    std::string get_name( void );
    int         get_hp( void );
    int         get_energy_point( void );
    int         get_atk_dmg( void );
// getter useless
    void        attack( const std::string& target );
    void        takeDamage( unsigned int amount );
    void        beRepaired( unsigned int amount );


    private :

    std::string _name;
    int         _hp;
    int         _energy_point;
    int         _atk_dmg;

};

# endif