/*
CH-230-A
a9_p8
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/
#include<iostream>

using namespace std;

//determining max value and subtracting 
void subtract_max(int a[], int n)
{
    int max;
    int i;
    max = a[0];
    for (i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }   
    }   
    cout<< "Max value in Array: " << max << "\n";
    cout << "Elements of array after subtracting max from them: \n";
    for (int j = 0; j < n; j++)
    {
        a[j] = a[j] - max;
        cout << a[j] << endl;
    }
}

//function to deallocate memory
void deallocate(int a[])
{
    delete[] a;
}

//main function
int main()
{
    
    int n;
    cin >> n;
    int *a;
    a = new int[n]; //allocating memory for the array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //for printing the output
    cout << "After using the declared functions: \n";

    //calling function 
    subtract_max(a, n);

    //calling the function to release the memory
    deallocate(a);
    return 0;
}