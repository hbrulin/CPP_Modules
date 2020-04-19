#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <deque>


template<typename T>
class MutantStack: public std::stack<T>  //je la fais hériter de la classe stack qui prendra le type de son contenu entre <>. stack contient un attriut c, le conteneur.
{
	public:
		MutantStack();
		MutantStack(MutantStack<T> const &tocopy);
		MutantStack<T> &operator=(MutantStack<T> const &tocopy);
		virtual ~MutantStack();

		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
		/*Par défaut, la classe stack utilise une deque, on aurait pu donc faire : 
		typedef typename std::stack<T>::container_type::iterator iterator; */

		iterator begin(void);
		const_iterator begin(void) const;
		reverse_iterator rbegin(void);
		const_reverse_iterator rbegin(void) const;
		iterator end(void);
		const_iterator end(void) const;
		reverse_iterator rend(void);
		const_reverse_iterator rend(void) const;

	/*To iterate backwards use rbegin() and rend()
	as the iterators for the end of the collection, and the start of the collection respectively.*/

};

#endif