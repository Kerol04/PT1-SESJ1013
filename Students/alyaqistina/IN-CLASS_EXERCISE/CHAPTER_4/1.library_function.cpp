#include <iostream>

// 1. CHARACTER CLASSIFICATION AND CONVERSION
#include <cctype>

// 2. MATH FUNCTION
#include <cmath>

// 3. DATA CONVERSION
#include <cstdlib>

// 4. TIME FUNCTIONS
#include <ctime>



//CHARACHTER CONVERSION
#include <cctype>

EX:
cin.get(x);
if(isalpha(x)){
    cout.put(x);
    cout << "lalalala"}

-isalpha - if letter, true
-isalnum - if letter or digit, true
-isdigit - if 0-9, true
-islower - if lowercase letter, true
-isprint - if printable character, true
-ispunct - if punctuation, true
-isupper - if uppercase letter, true
-isspace - if whitespace character, true

- toupper - if lowercase, will return uppercase. otherwise, unchage
  EX :  char ch1 = 'H';
        cout << toupper(ch1) OR 
        ch1 = toupper(ch1)

- tolower





// MATH FUNCTIONS
#include <cmath>

- abs(x) : return the absolute value of integer
- pow(x,y) 
- pow10(x) : calculates 10 to the power of x
- sqrt(x)
- fabs(x) : -8.234 ->> 8.234
- floor(x) : 4.23 ->> 4.0
- ceil(x)  : 4.23 ->> 5.0



//DATA CONVERSION
#include <cstdlib>

- rand() : return a random num(int) between 0 and the largest int the comp holds
- srand(x)  : initialize random num generator with unsigned int x
- atoi
- atol
- atof


//CSTRING MANIPULATION FUNCTIONS
#include <cstring>

- strlen(str) : retruns length of C-string str
EX :
    char name[size] = "Tina";
    cout << strlen(name);

- strcat(str1, str2) :appends str2 to the end of str1 ??


- strcpy(str1, str2) : copy str2 to str1
EX :
    const int size = 20;
    char fname[size] = "Malaysia";
    name[size];
    strcpy(name, fname);

- strstr(str1, str2)

- strcmp(str1, str2) = if str1 ==str2

