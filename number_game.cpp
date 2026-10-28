#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator so a new number is generated every run
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    cout << "=======================================" << endl;
    cout << "   WELCOME TO THE NUMBER GUESSING GAME  " << endl;
    cout << "=======================================" << endl;
    cout << "I am thinking of a number between 1 and 100...\n" << endl;

    // Game loop
    do {
        cout << "Enter your guess (1-100): ";
        cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) {
            cout << "Too high! Try again.\n" << endl;
        } 
        else if (userGuess < secretNumber) {
            cout << "Too low! Try again.\n" << endl;
        } 
        else {
            cout << "\n=======================================" << endl;
            cout << " Congratulations! You guessed it right!" << endl;
            cout << " The Secret Number was: " << secretNumber << endl;
            cout << " Total attempts taken: " << attempts << endl;
            cout << "=======================================" << endl;
        }

    } while (userGuess != secretNumber);

    return 0;
}