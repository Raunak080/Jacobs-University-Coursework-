/*
CH-230-A
a9_p4
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include<iostream>


using namespace std;

//function to calculate the difference
int mycount (int x, int y){
   int diff= y-x;
   return diff;

}


//function to count letter in string 
int mycount (char a, string b){
    int count=0;
    for (unsigned int i=0; i< b.length();i++){
        if (b[i]==a){
            count++;
        }
    }
    return count;
}

//main function
int main(){
    int x,y;
    cout<<"Enter a value:";
    cin >>x;
    cout<<endl;
    cout <<"Enter another value:";
    cin >>y;
    cout<<endl;
   

    char a;
    string b;
    cout<<"Enter a char:"<< endl;
    cin>> a;
    getchar();
    cout<<"Enter a string: ";

    getline(cin,b);


 //prints output 
    cout << "The difference is :"<< mycount(x,y)<< endl;
    cout << "The number of occurence of "<< a << " is :" << mycount(a,b)<<endl;




}