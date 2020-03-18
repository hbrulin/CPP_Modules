#include "phonebook.hpp"

Contact::Contact()
{
}

void    Contact::getData()
{
    std::cout << "Okay, first things first : What is your first name?" << std::endl;
    getline(std::cin, m_firstName);
    std::cout << "And your last name?" << std::endl << "> ";
    getline(std::cin, m_lastName);
    std::cout << "What about your nickname:" << std::endl << "> ";
    getline(std::cin, m_nickname);
    std::cout << "Gimme your login!" << std::endl << "> ";
    getline(std::cin, m_login);
    std::cout << "And your postal address, please." << std::endl << "> ";
    getline(std::cin, m_postalAdress);
    std::cout << "And your email address, please." << std::endl << "> ";
    getline(std::cin, m_emailAdress);
    std::cout << "And phone number :" << std::endl << "> ";
    getline(std::cin, m_phoneNumber);
    std::cout << "So when is your birthday anyway?" << std::endl << "> ";
    getline(std::cin, m_birthday);
    std::cout << "Please type your favorite food and press Enter:" << std::endl << "> ";
    getline(std::cin, m_meal);
    std::cout << "Now just tell me your underwear color and don't ask any questions." << std::endl << "> ";
    getline(std::cin, m_underwearColor);
    std::cout << "Finally, tell me your darkest secret..." << std::endl << "> ";
    getline(std::cin, m_darkestSecret);
    std::cout << "Contact created!" << std::endl;
}

void    display_column(std::string s)
{
    std::string::size_type j = 0;
    for (std::string::size_type i = 0; i < 9; i++)
    {
        if (10 - i > s.size())
            std::cout << ' ';
        else
            std::cout << s[j++];
    }
    if (!s.size())
        std::cout << ' ';
    else if (s.size() <= 10) //strictement inférieur??
        std::cout << s[j];
    else
        std::cout << '.';
}

void    Contact::printFour(int index)const //comment faire pour les colonnes
{
    std::stringstream ss; //je declare un stream buffer destiné a contenir une séquence de characters.
    ss << index; // je lui donne pour séquence le contenu d'index : cette séquence sera accessible directement comme une string.
    display_column(ss.str()); //ici j'ai juste récupéré un objet string avec la copie de ce qu'il y avait dans le stream buffer (une copie d'index) - pour vouloir envoyer une string a display column
    std::cout << '|';
    display_column(m_firstName);
    std::cout << '|';
    display_column(m_lastName);
    std::cout << '|';
    display_column(m_nickname);
    std::cout << std::endl;
}

void    Contact::printAll()const
{
    std::cout << "First name: " << m_firstName << std::endl;
    std::cout << "Last name: " << m_lastName << std::endl;
    std::cout << "Nickname: " << m_nickname << std::endl;
    std::cout << "Login: " << m_login << std::endl;
    std::cout << "Postal address: " << m_postalAdress << std::endl;
    std::cout << "Email address: " << m_emailAdress << std::endl;
    std::cout << "Phone number: " << m_phoneNumber << std::endl;
    std::cout << "Birthday date: " << m_birthday << std::endl;
    std::cout << "Favorite meal: " << m_meal << std::endl;
    std::cout << "Underwear color: " << m_underwearColor << std::endl;
    std::cout << "Darkest secret: " << m_darkestSecret << std::endl;
}

int     getIndex(std::string indexString)
{
    int num;

    if (indexString.size() < 1)
        return -1;
    for (std::string::size_type i = 0; i < indexString.length(); i++)
    {
        if (indexString[i] < '0' || indexString[i] > '9')
            return -1;
    }
    std::stringstream ss(indexString); //je fais une copie de ma string index dans buffer ss
    ss >> num; //j'envoie dans un int ce buffer
    if (ss.fail())
        return -1;
    return num;
}

void    ft_search(Contact book[8], int contact_nb)
{
    int i = 0;
    std::string indexString;
    int index;

    if (!contact_nb)
    {
        std::cout << "You have no entries." << std::endl;
        return;
    }

    std::cout << "You have the following contact entries :" << std::endl;
    std::cout << "Index     |First name|Last name |Nickname  " << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;

    while (i < contact_nb)
    {
        book[i].printFour(i);
        i++;
    }
    std::cout << "Which entry do you want to see ? " << std::endl << "> ";
    getline(std::cin, indexString);
    index = getIndex(indexString);
    if (index >= 0 && index <= contact_nb)
        book[index].printAll();
    else
        std::cout << "This index does not exist." << std::endl;
}

int main ()
{
    std::string input;
    int contact_nb = 0;
    Contact book[8]; //tableau de 8 objets de classe contact

    std::cout << "Welcome to the 80's. I am your phonebook." << std::endl;

    while (contact_nb <= 8)
    {
        std::cout << "> What can I do for you?" << std::endl << "> ";;
        std::getline(std::cin, input);
        if (input == "EXIT")
        {
            std::cout << "So sad to see you go. Goodbye." << std::endl;
            return 0;
        }
        else if (input == "ADD")
        {
            contact_nb++;
            book[contact_nb] = Contact(); //appel du constructeur
            book[contact_nb].getData();
        }
        else if (input == "SEARCH")
            ft_search(book, contact_nb);
        else
            std::cout << "I don't give a sh*t." << std::endl;
    }
    std::cout << "You have reached the maximum number of contacts available. Goodbye." << std::endl;
    return 0;
}