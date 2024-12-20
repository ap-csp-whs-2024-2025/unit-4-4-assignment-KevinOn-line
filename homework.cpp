#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    // Problem 1
int num;
    std::cout << "Enter a number between 1 and 100: ";
    std::cin >> num;
while (num < 1 || num > 100) {
    std::cout << "Invalid number. Enter a new number: ";
        std::cin >> num;
}
std::cout << "Input is welcome." << std::endl;
    // Problem 2
std::string FavoriteColor = "Chartuese";
std::string guess;
int attempt;
attempt = 1;

 std::cout << "What is my favorite color?: ";
 std::cin >> guess;
while (guess != FavoriteColor) {
    std::cout << "Not that one, Guess again: ";
    std::cin >> guess;
    attempt = attempt + 1;
}
    std::cout << "Correct, its a weird one innit? and yet you guessed it in " << attempt << " attempts." << std::endl;
    // Problem 3
    int length;
    int sum;
    sum = 0;
    std::cout << "How many numbers do you want? Input: " << std::endl;
    std::cin >> length;
    for (int i = 1; i <= length; i = i + 1) {
        int num; 
        std:: cout << "Enter Number " << i <<": ";
        std::cin >> num;
        sum = sum + num;
    }
    std::cout << "The sum is: " << sum << std::endl;
    
    return 0;
}
