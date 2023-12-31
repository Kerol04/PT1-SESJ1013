/*CHAPTER 5 ARRAY - SLIDE 46

Write a program that store the populations of
5 countries. Define 2 arrays that may be used
in parallel to store the names of the countries
and their populations. Write a loop that uses
these arrays to print each country’s name and
its population.
*/

#include<iostream>
using namespace std;

int main()
{
    const int country = 5;
    string name[country];
    int population[country];

    for(int i=0;i<country;i++)
    {
        cout << "Country : " ;
        cin >> name[i];
        cout << " with population ";
        cin >> population[i];
    }


    return 0;
}