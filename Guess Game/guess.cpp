#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int createSecretNUM();
int GuessCheck(int secretNUM,int guess);
int getGuess();
int main(){
    int secretNUM =createSecretNUM();
    GuessCheck(secretNUM,getGuess());
    return 0;
}
int createSecretNUM(){
    srand((unsigned)time(0));
    int secretNUM = rand();
    cout<<"The secret number is: "<<secretNUM<<endl;
    return secretNUM;
}
int GuessCheck(int secretNUM,int guess){
int guess_limit = 5;
int guess_count;
bool OutGuess = false;
int snum = secretNUM;
int cguess = guess;
    while (secretNUM != guess && !OutGuess){
            if(guess_count < guess_limit){
                cout<<"Please enter your guess: ";
                cin>>guess;
                guess_count++;
        }else{
            OutGuess = true;
        }
        }
        if (OutGuess){
            cout<<"You lose";
        }else{
        cout<<"You won, but i programmed this jankily.";
        }
    return 0;
}
int getGuess(){
    int guess;
    cout<<"Please enter your guess";
    cin>>guess;
    return guess;
}
