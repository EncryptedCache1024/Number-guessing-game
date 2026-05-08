#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Select a hardness level:" << endl;
    cout << "1. Easy (1-100)" << endl;
    cout << "2. Medium (1-500)" << endl;
    cout << "3. Hard (1-1000)" << endl;

    int level;
    cin >> level;

    int maxNumber;
    switch (level) {
        case 1:
            maxNumber = 100;
            break;
        case 2:
            maxNumber = 500;
            break;
        case 3:
            maxNumber = 1000;
            break;
        default:
            maxNumber = 100;
    }

    int secretNumber = rand() % maxNumber + 1;

    cout << "I'm thinking of a number between 1 and " << maxNumber << "." << endl;

    while (guess != secretNumber) {
        cout << "\nEnter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Correct! You guessed the number in " << attempts << " attempts!" << endl;
        }
    }

    return 0;
}
