#include <iostream> 

int main()

{
std::cout << "Program obliczający pole trójkąta\n";
 

 float a = 12;
 float h = 1; 

std::cout << "\nProszę wprowadzić długośc podstawy trójkąta\n";
std::cin >> a; 
std::cout << "\n Proszę wprowadzić wysokość trójkąta\n";
std::cin >> h; 

 

if (a > 0 and h > 0 )
{ 
    std::cout << "Pole tego trójkąta wynosi:\n";
std::cout <<  a * h / 2;
std::cout << "\n\nPole trójkąta o:\n";
std::cout << "a = " << a << "\n";
std::cout << "h = " << h << "\n";}


else 
{




std::cout << "\nWszystkie długości muszą być dodatnie\n";
 return 0; 
}

std::cout << "\nDziękuję za korzystanie z programu\n";






}

