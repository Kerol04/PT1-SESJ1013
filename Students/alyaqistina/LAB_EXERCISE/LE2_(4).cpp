//SET 4

/*Write a complete C++ program that reads an integer number and then calculate the product of its digits.
After that, identify whether the product of digits for the integer is an even or odd number, and a multiple
of 3, and/ or 5. Hint: You should use operator divide (/) and modulus (%) and also post-test loop to
answer this question.*/
       
       
#include<iostream>
using namespace std;
int main(){

    int num, baki, sum=1;
    cout<<"Enter an integer number: ";
    cin>>num;

    do{
        baki = num%10;
        
        
        num = num/10;
          cout << baki;
          if (num>0){
              cout << " * ";
          }
        sum = sum*baki;
  
    }    
    
    while(num!=0);
    cout << " = "<<sum<<endl;

if (sum%2==0 && sum%3==0 && sum%5==0){
    cout << sum << " is even number & multiples of 3 and 5";
}
else if (sum%2!=0 && sum%3==0 && sum%5==0){
    cout << sum << " is odd number & multiples of 3 and 5";
}
else if (sum%2==0 && sum%5==0){
     cout << sum << " is even number & multiples of 5";
}
else if (sum%2==0 && sum%3==0 ){
     cout << sum << " is even number & multiples of 3";
}
else if (sum%2!=0 && sum%3==0){
    cout << sum << "is odd number & multiples of 3";
}
else if (sum%2!=0 && sum%5==0){
     cout << sum << " is odd number & multiples of 5";
}
else if (sum%2==0 && sum%3!=0 && sum%5!=0){
    cout << sum << " is even number";
}
else if (sum%2!=0 && sum%3!=0 && sum%5!=0){
    cout << sum << " is odd number";
}
    

}