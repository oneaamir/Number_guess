#include <iostream>
#include<bits/stdc++.h>
using namespace std; // Use the standard namespace
int main() {
    srand(time(0)); 
    int numberToGuess = rand() % 10 + 1; 
    int guess;
    string name;

    
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << "! Guess the number (between 1 and 10): ";

    while (true) {
        cin >> guess;

        if (guess > numberToGuess) {
            cout << "Too high! Try again: ";
        } else if (guess < numberToGuess) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations, " << name << "! You guessed the number " 
                 << numberToGuess << " correctly!" << endl;
            break; 
        }
    }

    return 0;
}
