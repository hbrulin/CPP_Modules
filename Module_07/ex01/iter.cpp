#include <iostream>
#include <string>

void add_int(int a)
{
	std::cout << a + 2 << std::endl;
}

void concat_string(std::string a)
{
	std::cout << a + "bonjour" << std::endl;
}

template <typename T>
void display_T(T t)
{
    std::cout << t << std::endl;
}

template<typename T>
void iter(T *a, size_t size, void (&fn)(T))
{
	for (size_t i = 0; i < size; i++)
		fn(a[i]);
}

int main()
{
    std::cout << "Add ints" << std::endl;
    int int_arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    iter(int_arr, 10, add_int);

    std::cout << "Concat String" << std::endl;
    std::string array_str[] = {"a", "b", "c", "d", "e"};
    iter(array_str, 5, concat_string);

    std::cout << "Display" << std::endl;
    iter(int_arr, 10, display_T);

    std::cout << "Display" << std::endl;
    iter(array_str, 5, display_T);
}