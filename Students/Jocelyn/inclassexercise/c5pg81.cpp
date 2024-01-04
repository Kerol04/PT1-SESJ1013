#include <iostream>
#include <iomanip>
using namespace std;

const int country = 4, types = 3;

void readmedals(int medals[country][types]){
	for (int i = 0; i < country; i++){
		cout << "Country " << i + 1 << endl;
		for (int j = 0; j < types; j++){
			cin >> medals[i][j];
		}
	}
}

int country3(int medals[country][types]){
	int total = 0;
	for (int j = 0; j < types; j++){
		total += medals[2][j];
	}
	return total;
}

int largestNum(int medals[country][types]){
	int largest = medals[0][0];
	for (int i = 0; i < country; i++){
		for (int j = 0; j < types; j++){
			if (medals[i][j] > largest){
				largest = medals[i][j];
			}
		}
	}
	return largest;
}

int smallestNum(int medals[country][types]){
	int smallest = medals[0][0];
	for (int i = 0; i < country; i++){
		for (int j = 0; j < types; j++){
			if (medals[i][j] < smallest){
				smallest = medals[i][j];
			}
		}
	}
	return smallest;
}

int highestNumGold(int medals[country][types]){
	int gold = medals[0][0];
	for (int i = 0; i < country; i++){
		if (medals[i][0] > gold){
			gold = medals[i][0];
		}
	}
	return gold;
}

int totalNumBronze(int medals[country][types]){
	int bronze = 0;
	for (int i = 0; i < country; i++){
		bronze += medals[i][2];
	}
	return bronze;
}

int main(){
	
	int medals[country][types];
	readmedals(medals);
	
	cout << endl;
	cout << country3(medals) << endl;
	cout << largestNum(medals) << endl;
	cout << smallestNum(medals) << endl;
	cout << highestNumGold(medals) << endl;
	cout << totalNumBronze(medals) << endl;
	
	return 0;
}