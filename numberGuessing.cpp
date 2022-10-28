/***************************************
Number Gussing Game
Author: Well Moua
Date Created: 9/12/19
Description: In this program, the user will try to input a number and guess it, if it is right or wrong. 
***************************************/

#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main()
{
    // User Variables and random number generator holder
    int userInputNumber; 
    int randomNumber = 0;

    // Declare random number generator object and seed it with current time
    std::default_random_engine rng(static_cast<uint_fast32_t>(std::chrono::system_clock::now().time_since_epoch().count()));

    // Sets the range for the random number. In this case, between 1 and 10 (inclusive)
    std::uniform_int_distribution<int> dist(1, 10);
    
    // Output game and then ask User for input. Random Variable will be given a range of number 1-10. 
    cout<<endl<<"Welcome to the Number Guessing Game!"<<endl;
    cout<<"Please enter a number between 1 through 10: ";
    cin>>userInputNumber;
    randomNumber = dist(rng);

    // If/else statement of which it will tell you if you win or else you guess wrong, you lose.
    if (userInputNumber==randomNumber) 
    {
        cout<<"Congratulations, you win! You guessed the right number."<<endl;
    }
    else {
        cout<<"Too bad, you lose! You didn't guess the right number."<<endl;
    }

    return 0;
}
