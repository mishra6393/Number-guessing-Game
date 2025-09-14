#include <iostream>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()
#include<cstdlib>
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int secret = rand() % 20 + 1;
    int guess;
    int attempts = 0;

    cout << endl << "                  =====  Number Guessing Game  ===== "<< endl << endl;
    cout << "                I have chosen a number between 1 and 20."<< endl << endl;
   
    cout << "                          Can you guess it?" << endl;

    // Loop until the user guesses correctly
    do {
         cout << "                   <-----------------------------> "<< endl << endl;
        cout << "                      Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secret) {
            cout << endl << "                         Too high! Try again." << endl << endl;
        } else if (guess < secret) {
            cout << endl << "                         Too low! Try again." << endl;
        } else {
            cout<<endl<<endl << "          Congratulations! You guessed it in " 
                 << attempts << " attempts." << endl << endl << endl;
        }
    } while (guess != secret);
system("pause");
return 0;
}

