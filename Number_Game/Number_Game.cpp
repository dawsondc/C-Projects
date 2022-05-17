
#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    srand(time(0));// giving seed of time(0). This helps make sure the umber is random each time

    int ranNum = (rand() % 100) + 1;//generate a number beween 1 and 100
    int userAnswer = 0;

    cout << "Welcome to the Random Number Game!\n";

    while (userAnswer != ranNum)//while the answer is not the random number
    {
        cout << "\nEnter a number between 1 and 100: ";
        cin >> userAnswer;

        while (!(cin >> userAnswer) || (userAnswer == double(userAnswer)))//validation for user input, check if answer is an integer.
        {
            cout << "\nWrong input! Please enter your number again: ";
            cin.clear();
            cin.ignore();
            cin >> userAnswer;
        }

        if (userAnswer < ranNum)
        {
            cout << "\nYour answer is too low, try again!\n";
        }
        else if (userAnswer > ranNum)
        {
            cout << "\nYour answer is too big, try again!\n";
        }
    }

    cout << "\nYou guessed the number correctly!\n";
    cout << "Congradulations!";
    return 0;
}