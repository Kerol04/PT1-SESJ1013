/*
WHAT IS THE OUTPUT?

        #include <iostream>
02
03      // Function prototype
04      void func1(double, int);
05
06      int main(){
07      int x = 0; double y = 1.5;
08      cout << x << " " <<y<< endl;
09      func1 (y, x);
10      cout << x << " " <<y<< endl;
11      system (“pause”);
12      return 0;
13      }
14
15      void func1(double a, int b){
16      cout << a << " " <<b<< endl;
17      a=0.0; b=10;
18      cout << a << " " <<b<< endl;
19      }
*/


OUTPUT :
0   1.5
1.5 0
0.0 10
0   1.5
