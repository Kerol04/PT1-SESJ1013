/*

WHAT IS THE OUTPUT OF THIS PROGRAM?

01       #include <iostream>
02       using namespace std;
03      // Function prototype
04       void showDouble(int);
05
06      int main(){
07      int num;
08      for (num = 0; num < 10; num++)
09      showDouble(num);
10      system(“pause”);
11      return 0;
12          }
13
14      //Definition of function                    
15      void showDouble(int value) {                
16      cout<<value <<"\t“;
17      cout << (value * 2)<< endl;
18      } 


*/


OUTPUT :

0   0
1   2
2   4
3   6
4   8
5   10
6   12
7   14
8   16
9   18
