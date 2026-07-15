#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Guess a number between 1 and 100: " << endl;
    cin >> guess;
    attempts++;

    while (guess != secretNumber)
    {
        if (guess < secretNumber)
            cout << "Too high! Try again:" << endl;
        else
            cout << "Too low! Try again :" << endl;
        cin >> guess;
        attempts++;
    }
    cout << "Correct ! You guessed it in "<< attempts << "attempts." << endl;
    return 0;
}
