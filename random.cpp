#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int targetNumber = rand() % 100 + 1; // Generates a random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" <<endl;
    cout << "I've picked a random number between 1 and 100. Try to guess it!" <<endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < targetNumber)
        {
            cout << "Too low! Try again." <<endl;
        }
        else if (guess > targetNumber)
        {
            cout << "Too high! Try again." <<endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number " << targetNumber
                 << " in " << attempts << " attempts." <<endl;
            break;
        }
    }

    return 0;
}
