//8 NOV 2023
//SET1
#include <iostream>
using namespace std;

int main() {
    int number;
    
    do{
        int sum=0;
        cout << "Enter an integer number:" ;
        cin >> number;
        
        if(number==0){
            break;
        }
    
        int temporary=number;
    
        while(temporary!=0){
            int digit = temporary % 10;
            cout<<digit;
            sum+=digit;
            temporary/=10;
        
            if(temporary!=0){
                cout<<"+" ;
            }
        }
        cout<<"="<<sum<<endl;
        cout<<sum<<" is a multiple of:";
    
        bool multi=false;
    
        if(sum %3==0){
            cout<<"3";
            multi=true;
        }
        if(sum%4==0){
            if(multi){
                cout<<" and 4 ";
            } else {
                cout<<"4 ";
                multi=true;
            }
        }
        if(sum%5==0) {
            if(multi){
                cout<<" and 5";
            } else {
                cout<<" 5";
                multi=true;
            }
        }
    
        cout<<endl;
    
    }while(true);
    
    return 0;
}



//SET2

#include <iostream>
using namespace std;

int main(){
    int number, temp, sum =0;
    
    for (bool input = false; !input;){
        cout<<"Enter an integer number:";
        cin>>number;
        
        if(number>0){
            input=true;
        }else {
            cout<<"Enter a valid integer number."<<endl;
        }
    }
    
    int newNumber=number;
    
    bool digit=true;
    
    while (number>0){
        temp=number%10;
        sum+=temp;
        
        if(!digit){
            cout<<"+";
        }
        
        cout<<temp;
        digit=false;
        
        number/=10;
    }
    
    cout<<"="<<sum<<endl;
    
    if (sum%2==0){
        cout<<sum<<" is a even number";
        if(sum%4==0){
            cout<<" & multiple of 4";
        }
        if(sum%5==0){
            cout<<" & multiple of 5";
        }
    }else {
        cout<<sum<<" is an odd number";
        if (sum%5==0){
            cout<<" & multiple of 5";
        }
    }
    
    cout<<endl;
    return 0;
    
}


//SET3

#include <iostream>
using namespace std;

int main(){
    int number, rslt, prod =1;
    
    cout<<"Enter an integer number:";
    cin>>number;
    
    int newNumber=number;
    
    for(int digit=newNumber; digit!=0; digit/=10){
        rslt=digit%10;
        prod*=rslt;
        cout<<rslt;
        if(digit>=10){
            cout<<"*";
        }
    }
    
    cout<<"="<<prod<<endl;
    cout<<prod<<" is a multiple of ";
    
    bool multi=false;
    
    if(prod%4==0){
        cout<<"4";
        multi=true;
    }
    if(prod%5==0){
        if(multi){
            cout<<" and 5 ";
        }else{
            cout<<"5";
            multi=true;
        }
    }
    if(prod%7==0){
        if(multi){
            cout<<" and 7";
        }else{
            cout<<"7";
            multi=true;
        }
    }
    
    cout<<endl;
    return 0;
    
    }


    //SET4

    #include <iostream>
using namespace std;

int main(){
    int number, temp, prod=1;
    
    cout<<"Enter an integer number: ";
    cin>>number;
    
    int newNum=number;
    
    do{
        temp=number%10;
        prod*=temp;
        cout<<temp;
        if(number>=10){
            cout<<"*";
        }
        number/=10;
    }while(number!=0);
    
    cout<<"="<<prod<<endl;
    
    if(prod%2==0){
        cout<<prod<<" is an even number";
        if(prod%3==0){
            cout<<" & multiple of 3";
        }
        if(prod%5==0){
            cout<<" & multiple of 5";
        }
    }else{
        cout<<prod<<" is an odd number";
        if(prod%3==0){
            cout<<" & multiple of 3";
        }
        if(prod%5==0){
            cout<<" & multiple of 5";
        }
    }
    
    cout<<endl;
    
    return 0;
    
    
}