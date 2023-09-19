#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 12 and 50
    int randomNumber = rand() % 39 + 12;

    int numberOfGuesses = 0;
    int userGuess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I've selected a random number between 12 and 50." << endl;

    while (numberOfGuesses < 5) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess < 12 || userGuess > 50) {
            cout << "Please guess a number between 12 and 50." << endl;
            continue;
        }

        numberOfGuesses++;

        if (userGuess < randomNumber) {
            cout << "Too low. Try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high. Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number (" << randomNumber << ") in " << numberOfGuesses << " guesses!" << endl;
            break;
        }
    }

    if (numberOfGuesses >= 5) {
        cout << "Sorry, you've used all your guesses. The correct number was " << randomNumber << "." << endl;
    }

    return 0;
}
