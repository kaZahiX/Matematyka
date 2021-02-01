#include <iostream> 

int main()

{
std::cout << "Program obliczający pole trapezu\n";

float a;
float b;
float h; 

std::cout << "\nProszę wprowadzić podstawę trapezu\n";
std::cin >> a;
std::cout << "Prosze wprowadzić podstawę trapezu\n";
std::cin >> b;
std::cout << "Proszę wprowadzić wysokość trapezu\n";
std::cin >> h;
std::cout << "Trapez o:";
std::cout << "\na = " << a << "\n";
std::cout << "b = " << b << "\n";
std::cout << "Polu\n";
std::cout << a + b * h / 2 << "\n";   











}