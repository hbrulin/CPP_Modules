#ifndef AWESOME_HPP
# define AWESOME_HPP

#include <iostream>

class Awesome {

	public:
	Awesome() : _n(0) {}
	Awesome( int n ) : _n( n ) {}
	
	bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

	int get_n() { return _n; }

	private:

	int _n;
};

std::ostream &operator<<(std::ostream &out, Awesome &awe) {
	out << awe.get_n();
	return (out);
}

#endif