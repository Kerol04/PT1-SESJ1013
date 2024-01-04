#include <iostream>
#include <iomanip>
#include <string> 

using namespace std;

void getInput();
int deterAmountAssist(int &, int &, string &);

int ic, income, numChild, assist;
string eliStat;
char y;

int main()
{
    do{
    cout << "<< Check eligibility for Malaysian Family Assistance >>" << endl << endl;
    getInput();

    cout << "Amount of assistance = RM" << deterAmountAssist(income, numChild, eliStat);
    cout << endl;

    cout << "Press 'Y' to enter other data: ";
    cin >> y;
    }while(y=='Y' || y=='y');

}

void getInput()
{
    cout << "IC number: ";
    cin >> ic;
    cout << endl;
    cout << "Gross monthly income: RM";
    cin >> income;
    cout << endl;
    
    if (income <= 5000)
    {
        eliStat = "ELIGIBLE";
    }
    else
    {
        eliStat = "NOT ELIGIBLE";
    }

    cout << "Status: " << eliStat << endl;

    if (eliStat == "ELIGIBLE")
    {
        cout << "Number of children: ";
        cin >> numChild;
    }



}

int deterAmountAssist(int &income, int &numChild, string &eliStat)
{
    while(eliStat == "ELIGIBLE")
    {
        if (income <= 2500)
        {
            if (numChild == 0)
            assist = 1000;
            else if (numChild == 1 || numChild == 2)
            assist = 1500;
            else if (numChild >= 3)
            assist = 2000;
        }
        else if (income > 2500 && income <= 5000)
        {
            if (numChild == 0)
            assist = 400;
            else if (numChild == 1 || numChild == 2)
            assist = 600;
            else if (numChild >= 3)
            assist = 800;
        }
    }

    return assist;
}