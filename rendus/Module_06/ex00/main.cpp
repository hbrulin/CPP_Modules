#include <iostream>
#include <string>
#include <iomanip>

/* Static Cast : It is a compile time cast. The static cast performs conversions between compatible types. 
It is similar to the C-style cast, but is more restrictive : the C-style cast would 
allow an integer pointer to point to a char. Since this results in a 4-byte pointer pointing to 
1 byte of allocated memory, writing to this pointer will either cause a run-time error 
or will overwrite some adjacent memory.
-> Static cast checks that and error when compiling. */

const double MAX = static_cast<double>(INT_MAX);
const double MIN = static_cast<double>(INT_MIN);

int	get_precision(std::string s)
{
	int i = 0;
	int ret = 0;
	while (s[i] != '.')
		i++;
	while (s[i])
	{
		ret++;
		i++;
	}
	return (ret - 1);
}

void convFloat(std::string arg)
{
    char *p;
    const char *tmp = arg.c_str();
    if (arg == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return;
    }
    else if (arg == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return;
    }
    else if (arg == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }
    float f = static_cast<float>(strtod(tmp, &p));
    double d = static_cast<double>(f);
    int i = static_cast<int>(f);
    char c = static_cast<char>(i);
    if (&tmp[arg.length() - 1] != p)
    {
        std::cout << "Invalid input." << std::endl;
        return;
    }
    if (i != f || d > MAX || d < MIN)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(get_precision(arg)) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(get_precision(arg)) << d << std::endl;
        return;
    }
    if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(get_precision(arg)) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(get_precision(arg)) << d << std::endl;    
}

void convDouble(std::string arg)
{
    char *p;
    const char *tmp = arg.c_str();
    if (arg == "+inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return;
    }
    else if (arg == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return;
    }
    else if (arg == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }
	/* Convert string to double */
    double d = strtod(tmp, &p);
    float f = static_cast<float>(d);
    int i = static_cast<int>(d);
    char c = static_cast<char>(i);
    if (&tmp[arg.length()] != p)
    {
        std::cout << "Invalid input" << std::endl;
        return;
    }
    if (i != d || d > MAX || d < MIN)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(get_precision(arg)) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(get_precision(arg)) << d << std::endl;
        return;
    }
    if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;    
}

void convInt(std::string arg)
{
    char *p;
    const char *tmp = arg.c_str();
	/* strtol : string to long int en base 10
	p is set to next character after numerical value. */
    long li = strtol(tmp, &p, 10);
    int i = static_cast<int>(li);
    double d = static_cast<double>(i);
    float f = static_cast<float>(i);
    char c = static_cast<char>(i);
	/* Vérification que la string initiale ne contenait que des chiffres, 
	car p est set après le dernier chiffe. 
	Si la fin de tmp n'est pas le pointeur p, alors il y a aussi des lettres */
    if (&tmp[arg.length()] != p || li != static_cast<long>(i)) /* Pour gérer max int */
    {
        std::cout << "Invalid input." << std::endl;
        return;
    }
    if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl; 
}

void convChar(std::string arg)
{
    char c = arg[1];
    int i = static_cast<int>(c);
	float f = static_cast<float>(c);
    double d = static_cast<double>(c);
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
	/* Use fixed floating-point notation */
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl; 
}

bool isDouble(std::string arg)
{
    for (std::string::size_type i = 0; i < arg.size(); i++)
        if (arg[i] == '.')
            return true;
    return false;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "error: bad arguments\n" << std::endl;
		return 1;
	}
	std::string arg = argv[1];
    if (arg.size() > 1 && arg[arg.size() - 1] == 'f' && arg != "+inf" && arg != "-inf" && arg != "inf")
        convFloat(arg);
    else if (isDouble(arg.c_str()) || arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "-nan" || arg == "inf")
        convDouble(arg);
    else if (arg.size() == 3 && arg[0] == '\'' && arg[2] == '\'')
        convChar(arg);
    else
        convInt(arg);
    return 0;
}