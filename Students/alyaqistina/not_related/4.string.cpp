//STRINGS

#include <iostream>

using namespace std;

int main(){

cout << "Lion Academy";
cout << "Tiger"<< endl;
      //OUTPUT = Lion AcademyTiger

cout << "Giraffe Academy\n";
cout << "Tiger"<< endl;
        //OUTPUT = Giraffe Acedemy 
        //         Tiger

        // endl = \n

//---STRING FUNCTIONSSS---

string food = "Nasi Ayam";

cout << food.length();  //<---STRING FUNCTION
        //  OUTPUT = 9 [9 sebab nasi_ayam ada 9 character]

cout << food [0];
        //  OUTPUT = N [ sebab index 0 in string variable is N
        //               0=N, 1=a, 2=s, 3=i ]


// YOU CAN ASSIGN NEW VALUE TO THE CHARACHTER IN STRING
food [0] = 'B';
cout <<food;
      //OUTPUT = Basi Ayam

// FIND WHERE CHARACTER STARTS IN STRINGS
cout << food.find("Ayam", 0);
        // OUTPUT = 6 [sebab perkataan Ayam start dekat index 6.]

//  SUBSTRING 
cout << food.substr(4,3);  //[Dia akan grab dari index 5, then print sampai 3 lagi index]
        // OUTPUT =  Aya [sebab lenght index sampai 3 je.]

// atau bole buat :
    foodsub = food.substr(4,3);
    cout << foodsub;
return 0;
}

