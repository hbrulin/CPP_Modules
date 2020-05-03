#include <iostream>
#include <string>
#include <iomanip>

const double MAX_DOUBLE = static_cast<double>(INT_MAX);
const double MIN_DOUBLE = static_cast<double>(INT_MIN);

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
        std::cout << "float: -nanf" << std::endl;
        std::cout << "double: -nan" << std::endl;
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
	//revoir cette partie
    if (i != f || d > MAX_DOUBLE || d < MIN_DOUBLE)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
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
        std::cout << "float: -nanf" << std::endl;
        std::cout << "double: -nan" << std::endl;
        return;
    }
    double d = strtod(tmp, &p); //Convert string to double
    float f = static_cast<float>(d);
    int i = static_cast<int>(d);
    char c = static_cast<char>(i);
    if (&tmp[arg.length()] != p)
    {
        std::cout << "Invalid input" << std::endl;
        return;
    }
    if (i != d || d > MAX_DOUBLE || d < MIN_DOUBLE)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl; //possible d'afficher??
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl; //idem, test
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

void convInt(std::string arg)
{
    char *p;
    const char *tmp = arg.c_str(); //c_str() premet de récupérer le char* contenue dans un objet de type string.
    long li = strtol(tmp, &p, 10); //car strtol prend un char * et non string. Conversion en long int.
    int i = static_cast<int>(li);
    double d = static_cast<double>(i);
    float f = static_cast<float>(i);
    char c = static_cast<char>(i);
    if (&tmp[arg.length()] != p || li != static_cast<long>(i)) // p is set to next character after numerical value. 
    { //test max int
        std::cout << "Invalid int." << std::endl;
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
    if (arg.size() > 1 && arg[arg.size() - 1] == 'f' && arg != "+inf" && arg != "-inf")
        convFloat(arg);
    else if (isDouble(arg.c_str()) || arg == "+inf" || arg == "-inf" || arg == "nan")
        convDouble(arg);
    else if (arg.size() == 3 && arg[0] == '\'' && arg[2] == '\'')
        convChar(arg);
    else
        convInt(arg);
    return 0;
}