//RETURN FUNCTION
#include <iostream>
using namespace std;

/*EX: create a function to cube a number
      Function Name : cube     */

double cube(double num)
{
    double result = num*num*num;
    return result
}

double sqr(double num2)
{
    return num2*num2;
}

int mult2(int num3)
{
    int res = num3*2;
    return res;
}

int getMin(int n1, int n2)
{
    int result;

    if (n1>n2)
    {
        result = n2;
    }   
    else 
    {
        result = n1;
    }

    return result;

}


int main()
{
    double answer = cube(5.0);
    cout << answer;

    //atau boleh terus print :
    cout << cube(5.0);

    cout << sqr(9.5);

    int ans = mult2(8);
    cout << ans;

    cout << getMin(567, 576);

    return 0 ;
}