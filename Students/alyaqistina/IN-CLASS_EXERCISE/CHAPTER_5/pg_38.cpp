/*CHAPTER 5 ARRAY - SLIDE 38

Declare an integer array named names with
20 elements. Write a loop that prints each
element of the array.
*/

#include <iostream>
using namespace std;

int main()
{
    const int names = 20;
    int names[20];

    for(int i = 1; i <= 20; i++)
    {
        cout << "Element " << i << ":" ;
        cin >> names[i];
    }
    cout << endl;

    return 0;
}