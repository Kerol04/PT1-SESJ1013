/*
NAME       : MUHAMMAD KHAIRUL HAKIMI BIN MOHD KHALID
MATRIC NUM.: A23CS0133
SECTION    : 04
DATE       : 13 JANUARY 2024
ASSIGNMENT : 4
QUESTION   : 1
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

//Task 1
struct Item{  //data structure
	string Code, Name;
	float Cost, SalePrice, Profit;
	int NumItemSold;
};

//Additional function to display line
void displayLine(){
	cout<<"----------------------------------------------------------------------"<<endl;
}

//Task 2
int readInput(struct Item *iList){
	int x=0;
	ifstream input;
    input.open("input.txt");
    if(input.is_open()){
    	for(x=0; x<100; x++){
    		if(input.eof()){
    			input.close();
			    return x; // to return the total items
			}
    		input>>iList[x].Code;
    		input>>iList[x].NumItemSold;
		}
    }
    else{
        cout<<"Sorry, input file does not exist!"<<endl;
        return 0;
    }
    input.close();
    
	return x;
}

//Task 3
void determineCost(struct Item *iList, int total){
	for(int x=0; x<total; x++){
		if(iList[x].Code == "M101"){
		    iList[x].Name = "Double Mushroom";
		    iList[x].Cost = 11.5;
	    }else if(iList[x].Code == "B202"){
		    iList[x].Name = "Double BBQ Beef";
		    iList[x].Cost = 10.2;
	    }else if(iList[x].Code == "C303"){
	    	iList[x].Name = "Grilled Chicken";
		    iList[x].Cost = 7.0;
	    }else if(iList[x].Code == "F404"){
		    iList[x].Name = "Fish'n Crisp";
		    iList[x].Cost = 6.25;
	    }
	    iList[x].SalePrice = 1.3 * iList[x].Cost;
	}
}

//Task 4
void displayOutput(struct Item *iList, int total){
	displayLine();
	cout<<left;
	cout<<setw(6)<<"CODE"<<setw(20)<<"ITEM NAME";
	cout<<right;
	cout<<setw(8)<<" COST(RM)  "<<setw(10)<<" SALE(RM)  "<<setw(10)<<" QUANTITY "<<setw(12)<<" PROFIT(RM)   "<<endl;
	displayLine();
	for(int x=0; x<total; x++){
		iList[x].Profit = iList[x].NumItemSold * (iList[x].SalePrice - iList[x].Cost);
		cout<<fixed<<setprecision(2);
		cout<<left;
		cout<<setw(6)<<iList[x].Code<<setw(20)<<iList[x].Name;
		cout<<right;
		cout<<setw(8)<<iList[x].Cost<<setw(10)<<iList[x].SalePrice<<setw(10)<<iList[x].NumItemSold<<setw(12)<<iList[x].Profit<<endl;
	}
	displayLine();
}

//Task 5
void displayAnalysis(struct Item *iList, int total){
	float mushprof=0, bbqprof=0, chicprof=0, fishprof=0, totalprof=0, highprof=0;
	for(int x=0; x<total; x++){//this for loop is to determine total profit for each item and also the total profit for all
		if(iList[x].Code == "M101")
			mushprof += iList[x].Profit;
		else if(iList[x].Code == "B202")
		    bbqprof += iList[x].Profit;
		else if(iList[x].Code == "C303")
		    chicprof += iList[x].Profit;
		else
		    fishprof += iList[x].Profit;
	    totalprof += iList[x].Profit;
	}
	if(mushprof>bbqprof&&mushprof>chicprof&&mushprof>fishprof)//if else loop to determine highest profit
		highprof = mushprof;
	else if(bbqprof>mushprof&&bbqprof>chicprof&&bbqprof>fishprof)
	    highprof = bbqprof;
	else if(chicprof>mushprof&&chicprof>bbqprof&&chicprof>fishprof)
	    highprof = chicprof;
	else
	    highprof = fishprof;
	
	cout<<"\t\t   ITEM NAME\t\tTOTAL PROFIT(RM)"<<endl;
	cout<<"\t\tDouble Mushroom\t\t"<<setw(10)<<mushprof<<endl;
	cout<<"\t\tDouble BBQ Beef\t\t"<<setw(10)<<bbqprof<<endl;
	cout<<"\t\tGrilled Chicken\t\t"<<setw(10)<<chicprof<<endl;
	cout<<"\t\tFish'n Crisp\t\t"<<setw(10)<<fishprof<<endl;
	displayLine();
	cout<<"\t\tThe total amount of profit = RM "<<totalprof<<endl;
	cout<<"\t\tHighest profit = RM "<<highprof<<endl;
	displayLine();
}

//Task 6
int main(){
	int totalItem;
	Item iList[100];
	totalItem = readInput(iList);
	determineCost(iList, totalItem);
	displayOutput(iList, totalItem);
	displayAnalysis(iList, totalItem);
	return 0;
}
