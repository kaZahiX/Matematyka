#include <iostream> 

int main ()

{
std::cout << "Program oblcizający pole kwadratu\n";

float a = 2.5;
float b = 4.5;

std::cout << "\nproszę wprowadzić pierwszy bok prostokąta lub kwadratu\n";
std::cin >> a; 
std::cout << "\nproszę wprowadzić drugi bok prostokąta lub kwadratu\n";
std::cin >> b; 

std::cout << "Kwadrat o:\n";
std::cout << "a = " << a << "\n";
std::cout << "b = " << b << "\n";
std::cout << "Pole kwadratu o:\n";
std::cout << a * b;




}


