
#include "../include/PmergeMe.hpp"

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(std::string input) : _input(input), nb_element(get_nb_element(input))
{
}

void	PmergeMe::sort_vect()
{
	std::vector<int>	sort;
	std::vector<int>	small_sort;

	std::vector<std::pair<int, int> >	pairs = vect_pairs();

	sort.push_back(pairs[0].first);
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
		sort.push_back((*it).second);

	pairs.erase(pairs.begin());

	small_sort = sort_vect_pairs(pairs);

	merge_vect(sort, small_sort);

	if (sort[0] == -1)
		sort.erase(sort.begin());
	_vect_result = sort;
	 
	for (std::vector<int>::iterator it = sort.begin(); it != sort.end(); it++)
		std::cout << *it << std::endl;
}

std::vector<std::pair<int, int> >	PmergeMe::vect_pairs()
{
	std::istringstream					iss(_input);
	std::vector<std::pair<int, int> >	pairs;


	int a;
	int b;

	while (iss >> a && iss >> b)
	{
		if (a > b)
			std::swap(a, b);
		std::pair<int, int> p(a,b);
		pairs.insert(std::upper_bound(pairs.begin(), pairs.end(), p, bigger_pair), p);
		a = -1;
		b = -1;
	}
	if (nb_element % 2 == 1)
	{
		std::pair<int, int> p(-1,a);
		pairs.insert(std::upper_bound(pairs.begin(), pairs.end(), p, bigger_pair), p);
	}
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
		std::cout << it->first << " | " << it->second << std::endl;
	return pairs;
}

std::vector<int> PmergeMe::sort_vect_pairs( std::vector< std::pair<int,int> >& pairs )
{
    int g_size = 2, pow = 4;
    std::vector<int> v;
    std::vector< std::pair<int,int> >::iterator border;

    for (std::vector< std::pair<int,int> >::iterator it = pairs.begin(); it < pairs.end(); )
    {
        border = it;
        it = border + g_size;
        if (it >= pairs.end()) it = pairs.end();
        while (--it >= border) v.push_back((*it).first);
        it = border + g_size;
        g_size = pow - g_size;
        pow *= 2;
    }
    return v;
}

void PmergeMe::merge_vect(std::vector<int>& sort, std::vector<int>& small_sort)
{
    int g_size = 2, pow = 4, q = 0;
    std::vector<int>::iterator bound;
    for (std::vector<int>::const_iterator it = small_sort.begin(); it < small_sort.end(); it++)
    {
        bound = std::min(sort.begin() + pow, sort.end());
        sort.insert(std::lower_bound(sort.begin(), bound, *it), *it);
        if (++q == g_size)
        {
            g_size = pow - g_size;
            pow *= 2;
            q = 0;
        }
    }
}

bool	PmergeMe::bigger_pair(const std::pair<int, int> & a, const std::pair<int, int> & b)
{
	return a.second <= b.second;
}

int	PmergeMe::get_nb_element(std::string str)
{
	std::istringstream	iss(str);
	int tmp;
	int i = 0;
	while (iss >> tmp)
	{
		i++;
		if (tmp < 0)
		{
			std::cout << "error not a positive number\n"; // exception
			return 1;
		}
	}
	if (iss.fail() && !iss.eof())
	{
		std::cout << "error not a number\n"; // exception
		return 1;
	}
	return i;
}