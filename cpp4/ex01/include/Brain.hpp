/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <adouay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:08:53 by adouay            #+#    #+#             */
/*   Updated: 2023/07/08 18:08:56 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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