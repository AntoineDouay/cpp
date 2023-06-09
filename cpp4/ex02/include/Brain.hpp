
# ifndef BRAIN_HPP

# define BRAIN_HPP

#include <iostream>

class Brain {

    public : 

    Brain();
    Brain( Brain const & copy );
    ~Brain();

    Brain&  operator=( Brain const & src );

    std::string    getIdea();

    private :

    std::string _ideas[100];
};

#endif