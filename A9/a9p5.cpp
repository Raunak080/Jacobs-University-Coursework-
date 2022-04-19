/*
CH-230-A
a9_p5
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//main function
int main(){

//inputs name
    string name;
    cout<<"Enter your name:";
    cin >> name;

    //generating the random number
    int randomnumber;
    srand(static_cast<unsigned int>(time(0)));
    randomnumber = rand();

    //number bet^n 1-100
    int randnum = (randomnumber%100)+1;
    
    int guess=0;
    int count = 0;

//loop until player guesses number 
    do{
        cout<<"Guess a number:";
        cin>>guess;

        if (guess> randnum){
            cout<<"Your guess is larger than number." <<endl;
        }
        else if (guess < randnum){
            cout<<"Your guess is smaller than number."<< endl;
        }
    
      count++;



    }while (randnum!=guess);

    cout<<"Congratulations"<<name << "! You have guessed the number in "<< count << "tries ";

    return 0;





}