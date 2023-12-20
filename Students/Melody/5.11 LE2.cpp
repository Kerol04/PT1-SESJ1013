// set 1
#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, sumOfDigits = 0;

    
    std::cout << "Enter an integer number: ";
    std::cin >> number;

   
    originalNumber = number;

   
    do {
        sumOfDigits += number % 10;
        number /= 10;
    } while (number != 0);

   

   
    number = originalNumber;  
    bool firstDigit = true;  
    while (number != 0) {
        int digit = number % 10;
        if (firstDigit) {
            std::cout << digit;
            firstDigit = false;
        } else {
            std::cout << " + " << digit;
        }
        number /= 10;
    }
    std::cout << " = " << sumOfDigits << std::endl;

   
    
    
    bool isMultipleOf3 = (sumOfDigits % 3 == 0);
	bool isMultipleOf4 = (sumOfDigits % 4 == 0);
    bool isMultipleOf5 = (sumOfDigits % 5 == 0);
   
    
    if ( isMultipleOf3 && isMultipleOf4 && isMultipleOf5) {
        std::cout << sumOfDigits << " is multiples of 3, 4 and 5 " << std::endl;
    } else if (isMultipleOf4 && isMultipleOf5) {
        std::cout << sumOfDigits << " is multiples of 4 and 5 " << std::endl;
    }else if (isMultipleOf3 && isMultipleOf4) {
        std::cout << sumOfDigits << " is multiples of 3 and 4 " << std::endl;
        }else if (isMultipleOf5) {
        std::cout << sumOfDigits << " is multiples of 5 " << std::endl;
    } else if (isMultipleOf3){
        std::cout << sumOfDigits << " is multiples of 3 " << std::endl;
 }
    
	return 0;
}


//SET2
#include <iostream>
using namespace std;
 
int main()
    
	{int number, originalNumber, sumOfDigits = 0;

    
    cout << "Enter an integer number: ";
    cin >> number;

    
    originalNumber = number;

    
    while (number != 0) {
        int digit = number % 10;
        sumOfDigits += digit;
        number /= 10;
    }

    number = originalNumber;  
    bool firstDigit = true;  
    while (number != 0) {
        int digit = number % 10;
        if (firstDigit) {
            std::cout << digit;
            firstDigit = false;
        } else {
            std::cout << " + " << digit;
        }
        number /= 10;
    }
    std::cout << " = " << sumOfDigits << std::endl;
  
     
    bool isEven = (sumOfDigits % 2 == 0);
    bool isMultipleOf4 = (sumOfDigits % 4 == 0);
    bool isMultipleOf5 = (sumOfDigits % 5 == 0);
    
    
   
       std::cout << sumOfDigits << (isEven ? " is even number" : " is odd number");

    if (  isMultipleOf4 && isMultipleOf5) {
        std::cout <<  " & multiples of 4 and 5 " << std::endl;
    } else if (isMultipleOf4 ) {
        std::cout <<  " & multiples of 4 " << std::endl;
    }else if (isMultipleOf5) {
        std::cout << " & multiples of 5 " << std::endl;
    } 
    
    

    return 0;
}

//set3
#include <iostream>
using namespace std;
 
int main()
    
	{
	int number, originalNumber, productOfDigits = 1;

    
    cout << "Enter an integer number: ";
    cin >> number;

    
    originalNumber = number;

    
    while (number != 0) {
        int digit = number % 10;
        productOfDigits *= digit;
        number /= 10;
    }
     number = originalNumber;  
    bool firstDigit = true;  
    while (number != 0) {
        int digit = number % 10;
        if (firstDigit) {
            std::cout << digit;
            firstDigit = false;
        } else {
            std::cout << " * " << digit;
        }
        number /= 10;
    }
    std::cout << " = " << productOfDigits << std::endl;
    
    
    bool isMultipleOf4 = (productOfDigits % 4 == 0);
	bool isMultipleOf5 = (productOfDigits % 5 == 0);
    bool isMultipleOf7 = (productOfDigits % 7 == 0);
    
    if( isMultipleOf7 && isMultipleOf5)
    {
    	std::cout << productOfDigits << " is multiples of 7 and 5 " << std::endl;
    } else if (isMultipleOf7 && isMultipleOf4)
    {
    	std::cout << productOfDigits << " is multiples of 7 and 4 " << std:: endl;
    } else if (isMultipleOf4 && isMultipleOf5)
    {
    	std::cout << productOfDigits << " is multiples of 4 and 5 " << std::endl;
    	
	}else if (isMultipleOf4)
	{
		std::cout << productOfDigits << " is multiples of 4 " << std::endl;
	}
	
	return 0;
	}
	
    
    //set4
#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, productOfDigits = 1;

    
    std::cout << "Enter an integer number: ";
    std::cin >> number;

    
    originalNumber = number;

   
    do {
        productOfDigits *= number % 10;
        number /= 10;
    } while (number != 0);

   

    
    number = originalNumber;  
    bool firstDigit = true;  
    while (number != 0) {
        int digit = number % 10;
        if (firstDigit) {
            std::cout << digit;
            firstDigit = false;
        } else {
            std::cout << " * " << digit;
        }
        number /= 10;
    }
    std::cout << " = " << productOfDigits << std::endl;
    
    bool isEven = (productOfDigits % 2 == 0);
    bool isMultipleOf3 = (productOfDigits % 3 == 0);
    bool isMultipleOf5 = (productOfDigits % 5 == 0);
    
     std::cout << productOfDigits << (isEven ? " is even number" : " is odd number");

    if (isMultipleOf3 && isMultipleOf5) {
        std::cout <<  " & multiples of 3 and 5 " << std::endl;
    } else if (isMultipleOf3) {
        std::cout << " & multiples of 3 " << std::endl;
    } 
    
    
    
    
    return 0;
}

   
