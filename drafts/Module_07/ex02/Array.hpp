#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <typename T>
class Array {

	public:
		Array(); //constructeur vide
		Array(unsigned int n);
		~Array();
       	Array(const Array &tocopy);
        Array &operator=(Array const &tocopy);
		unsigned int size();
		T &operator[](unsigned int i);
        T const &operator[](unsigned int i) const; //si on passe du const

		class OutOfBoundException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };

	private:
		T *array;
		unsigned int len;

};

template<typename T>
Array<T>::Array() {
	array = NULL;
	len = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	array = new T[n];
	len = n;
}

template <typename T>
Array<T>::~Array()
{
    delete[] array;
}

template<typename T>
Array<T>::Array(const Array &tocopy) {
	*this = tocopy;
}

template<typename T>
Array<T> &Array<T>::operator=(Array const &tocopy) {
	if (tocopy.len)
    {
        array = new T[tocopy.len];
        for (unsigned int i = 0; i < tocopy.len; i++)
            array[i] = tocopy.array[i];
    }
	len = tocopy.len;
	return *this;
}

template<typename T>
unsigned int Array<T>::size() {
	return len;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (!array || i >= len)
        throw OutOfBoundException();
    return array[i];
}

template <typename T>
T const &Array<T>::operator[](unsigned int i) const
{
    if (!array || i >= len)
        throw OutOfBoundException();
    return array[i];
}

template <typename T>
char const *Array<T>::OutOfBoundException::what() const throw()
{
    return "Element is out of bound!";
}

#endif