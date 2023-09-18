
#ifndef PMERGEME_HPP

#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>
#include <ctime>

class PmergeMe{

	public :

	PmergeMe();
	PmergeMe(std::string input);
	PmergeMe(const PmergeMe & copy);
	~PmergeMe();

	PmergeMe&	operator=(const PmergeMe & src);


	void					sort_vect();
	std::vector<std::pair<int, int> >	vect_pairs();
	std::vector<int>		sort_vect_pairs( std::vector< std::pair<int,int> >& pairs );
	void					merge_vect(std::vector<int>	& sort, std::vector<int> & small_sort);

	void					sort_deque();
	std::deque<std::pair<int, int> >	deque_pairs();
	std::deque<int>		sort_deque_pairs( std::deque< std::pair<int,int> >& pairs );
	void					merge_deque(std::deque<int>	& sort, std::deque<int> & small_sort);


	int						get_nb_element(std::string str);
	static bool					bigger_pair(const std::pair<int, int>& a, const std::pair<int, int>& b);
	std::vector<int>&		get_result();

	class NotPositiveNumberError : public std::exception{
		const char * what() const throw() {return "error not a positive number";}
	};

	class NaNError : public std::exception{
		const char * what() const throw() {return "error not a number";}
	};

	private :

	std::string			_input;
	int					nb_element;
	std::deque<int>		_deque_result;
	std::vector<int>	_result;

};

#endif


