
#ifndef PMERGEME_HPP

#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>

class PmergeMe{

	public :

	PmergeMe();
	PmergeMe(std::string input);
	PmergeMe(const PmergeMe & copy);
	~PmergeMe();

	PmergeMe&	operator=(const PmergeMe & src);

	// std::vector<int>					sort_vect();
	void					sort_vect();
	std::vector<std::pair<int, int> >	vect_pairs();
	std::vector<int>		sort_vect_pairs( std::vector< std::pair<int,int> >& pairs );
	void					merge_vect(std::vector<int>	& sort, std::vector<int> & small_sort);
	int						get_nb_element(std::string str);

	static bool					bigger_pair(const std::pair<int, int>& a, const std::pair<int, int>& b);

	private :

	std::string			_input;
	int					nb_element;
	//std::deque<int>		_deque_result;
	std::vector<int>	_vect_result;

};

#endif


