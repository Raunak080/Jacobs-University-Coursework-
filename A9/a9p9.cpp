/*
CH-230-A
a9_p8
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//main function
int main()
{
    char ans;
    ans = 'y';

   
    while (ans == 'y' || ans == 'Y')
    {
        srand(time(0));
        //declaring array of string
        string c[17] = {"computer", "television", "keyboaard", "laptop",
                        "mouse", "football", "chelsea", "arsenal", "madrid", "barcelona",
                        "london", "blue", "manchester", "chips", "bottle",
                        "table", "jacket"};

        //generates random word from above
        string word;
        word = c[rand() % 17];
        string z = word;
        string guessedword; 
        guessedword = "\n";
        int tries = 1;

        //removes vowels
        for (unsigned int i = 0; i < (word.length()); i++)
        {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
                word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
                word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
                word[i] == 'U')
            {
                word[i] = '_';
            }
        }

      
        cout << word << endl;

       
        cin >> guessedword;
        while (z != guessedword)
        {
            //stops if player types quit
            if (guessedword == "quit")
            {
                break;
            }

            
            cin >> guessedword;
            tries++;
        }
        if (z == guessedword)
        {
            cout << "Congrats" << endl;

            //total tries
            cout << "total try=" << tries << endl;
        }
                   
            cout << "Do you want to continue playing?";
            cin >> ans;
    }
    return 0;
}

