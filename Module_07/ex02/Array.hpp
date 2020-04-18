#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {

	public:
		Array(); //constructeur vide
		Array(unsigned int n);
		~Array();
       	Array(const Array &tocopy);
        Array &operator=(Array const &tocopy);

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

#endif