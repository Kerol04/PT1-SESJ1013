/*CHAPTER 5 ARRAY - SLIDE 52

The following program skeleton, when completed, will ask the
user to enter 10 integers which are stored in an array. The
function avgArray, which you must write, is to calculate and
return the average of the numbers entered.

*/

#include <iostream>
using namespace std;

int avgArray(int[], int);                            //Function Prototype (MUST BE BEFORE MAIN FUNCTION)


int main()

{
    const int SIZE = 10;                             // Declaring constant which is 10
    int userNums[SIZE];                              // Creating array to enter 10 numbers

    cout << "Enter 10 numbers: ";

    for (int count = 0; count < SIZE; count++)       // Looping for user input
    {
        cout << "#"<< (count + 1) << " ";
        cin >> userNums[count];                      // User input
    }

    cout << "The average of those numbers is ";
    cout << avgArray(userNums, SIZE) << endl;        // Output for average using calling function and arguments


    return 0;
}

int avgArray(int n[],int s)                    // Function Header 
{
    int sum = 0, av;                                 // initializing sum

    for(int count = 0; count < s; count++)        // Looping to calculate sum and av
    {
        sum = sum + n[count];
    }

    av = sum/size;
    return av;                                       // Returning average
}