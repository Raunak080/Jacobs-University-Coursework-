#include <iostream>
using namespace std;

class Movie{

    private:
    string rating;

    public:
    string name;
    string director;
    

    Movie( string aname, string adirector, string arating){
        name=aname;
        director=adirector;
        setRating(arating);

    }

    void setRating(string aRating){
        if (aRating=="G" || aRating=="PG" || aRating=="PG" ||aRating=="NR"){
            rating=aRating;

        }
        else {
            rating="NR";
        }
    }


    string getRating(){
        return rating;
    }
};

int main(){

    Movie avengers("Avengers","DD","PR");
    cout << avengers.name;
    avengers.setRating("dog");

    cout<< avengers.getRating
    
    return 0;



}