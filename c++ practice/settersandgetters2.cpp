#include <iostream>
using namespace std;
#include <string>

class Babusclass{
    private:
    string name;
    


    public:
    
    void setName(string aName){
        name= aName;
    }
    
    string getName(){
        return name;
    }

};

int main(){
    Babusclass B1;
    B1.setName("raunak");
    cout<< B1.getName();
    
    }