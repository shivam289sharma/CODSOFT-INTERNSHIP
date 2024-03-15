#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


/* To Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number. */


int main(){

    srand(static_cast<unsigned int>(time(nullptr)));

    int scc=1+(rand()%100);

    int g;
    int att=0;

    cout<<"Welcome to the Number Guessing Game!"<<endl;
    cout<<"I have chosen a number between 1 and 100. Good luck guessing it."<<endl;

    do{
        cout<<"Enter your guess: ";
        cin>>g;
        att=att+1;

        if(g>scc){
            cout<<"Too high! Try again."<<endl;
        }
        else if(g<scc){
            cout<<"Too low! Try again."<<endl;
        }
        else{
            cout<<"Congratulations! You've guessed the Number in "<<att<<" attempts."<<endl;

        } 
    } 
    while(g!=scc);
    
    return 0;
}