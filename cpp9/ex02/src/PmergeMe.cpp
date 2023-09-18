
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

	if (pairs.size() == 0)
		return ;

	sort.push_back(pairs[0].first);

	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
		sort.push_back((*it).second);

	pairs.erase(pairs.begin());

	small_sort = sort_vect_pairs(pairs);

	merge_vect(sort, small_sort);

	if (sort[0] == -1)
		sort.erase(sort.begin());
	_result = sort;
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
	return pairs;
}

std::vector<int> PmergeMe::sort_vect_pairs( std::vector< std::pair<int,int> >& pairs )
{
    int group = 2;
	int	puissance = 4;
    std::vector<int> v;
    std::vector< std::pair<int,int> >::iterator border;

    for (std::vector< std::pair<int,int> >::iterator it = pairs.begin(); it < pairs.end(); )
    {
        border = it;
        it = border + group;
        if (it >= pairs.end())
			it = pairs.end();
        while (--it >= border)
			v.push_back((*it).first);
        it = border + group;
        group = puissance - group;
        puissance *= 2;
    }
    return v;
}

void PmergeMe::merge_vect(std::vector<int>& sort, std::vector<int>& small_sort)
{
    int group = 2;
	int puissance = 4;
	int reset = 0;
    std::vector<int>::iterator border;
    for (std::vector<int>::const_iterator it = small_sort.begin(); it < small_sort.end(); it++)
    {
        border = std::min(sort.begin() + puissance, sort.end());
        sort.insert(std::lower_bound(sort.begin(), border, *it), *it);
        if (++reset == group)
        {
            group = puissance - group;
            puissance *= 2;
            reset = 0;
        }
    }
}

void	PmergeMe::sort_deque()
{
	std::deque<int>	sort;
	std::deque<int>	small_sort;

	std::deque<std::pair<int, int> >	pairs = deque_pairs();

	if(pairs.size() == 0)
		return ;

	sort.push_back(pairs[0].first);
	for (std::deque<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
		sort.push_back((*it).second);

	pairs.erase(pairs.begin());

	small_sort = sort_deque_pairs(pairs);

	merge_deque(sort, small_sort);

	if (sort[0] == -1)
		sort.erase(sort.begin());

	_deque_result = sort;
}

std::deque<std::pair<int, int> >	PmergeMe::deque_pairs()
{
	std::istringstream					iss(_input);
	std::deque<std::pair<int, int> >	pairs;

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
	return pairs;
}

std::deque<int> PmergeMe::sort_deque_pairs( std::deque< std::pair<int,int> >& pairs )
{
    int group = 2;
	int	puissance = 4;
    std::deque<int> v;
    std::deque< std::pair<int,int> >::iterator border;

    for (std::deque< std::pair<int,int> >::iterator it = pairs.begin(); it < pairs.end(); )
    {
        border = it;
        it = border + group;
        if (it >= pairs.end())
			it = pairs.end();
        while (--it >= border) v.push_back((*it).first);
        it = border + group;
        group = puissance - group;
        puissance *= 2;
    }
    return v;
}

void PmergeMe::merge_deque(std::deque<int>& sort, std::deque<int>& small_sort)
{
    int group = 2;
	int puissance = 4;
	int reset = 0;
    std::deque<int>::iterator border;
    for (std::deque<int>::const_iterator it = small_sort.begin(); it < small_sort.end(); it++)
    {
        border = std::min(sort.begin() + puissance, sort.end());
        sort.insert(std::lower_bound(sort.begin(), border, *it), *it);
        if (++reset == group)
        {
            group = puissance - group;
            puissance *= 2;
            reset = 0;
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
			throw NotPositiveNumberError();
	}
	if (iss.fail() && !iss.eof())
		throw NaNError();
	return i;
}

std::vector<int>&	PmergeMe::get_result()
{
	return _result;
}