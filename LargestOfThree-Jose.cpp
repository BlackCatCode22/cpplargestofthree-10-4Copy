#include <iostream>
using namespace std;

//Function to check for largest of the three
int findLargest(int a, int b, int c)
    {
        int largest = a;
        if (b > largest) {
            largest = b;
        }
        if (c > largest) {
            largest = c;
        }
        return largest;
    }
//Function to add numbers
int theSum(int a, int b, int c)
    {
        return a + b + c;
    }

int main()
{
    //Welcome Message
    cout<<"Hello, Welcome to this c++ program\n";

    //Declare Values
    int one = 0;
    int two = 0;
    int three = 0;

    //Grab user input
    cout<<"Please enter a number:\n";
    cin>>one;
    cout<<"Please enter another number:\n";
    cin>>two;
    cout<<"Please the last number:\n";
    cin>>three;

    
    //Run the calculation
    int largest = findLargest(one, two, three);
    //Run the addition
    int sum = theSum(one, two, three);


    //Result
    cout<<"You entered: "<<one<<", "<<two<<", and "<<three<<" with "<<largest<<" being the largest.";
    cout<<"\nThe sum of the three numbers is "<<sum;
    cout<<"\nThank you";
}





