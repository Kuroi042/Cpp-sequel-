#pragma once
# include <iostream>
# include <algorithm>
# include <stack>

template < typename T>
class MutantStack : public std::stack<T>
{
	private :
		std::stack<T>  stack;
	public :
		MutantStack() {};
		~MutantStack() {};
		typedef typename  std::deque<T>::iterator iterator;
		MutantStack& operator=(const MutantStack& original)
		{
			if (this != &original)
				this->c = original.c;
			return (*this);
		}
		iterator	begin(void) {return this->c.begin();}
		iterator	end(void){return this->c.end();}
};
