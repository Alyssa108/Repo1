#include "MainClass.h"
#include <iostream>
using namespace std;

MainClass::MainClass()
{
}


MainClass::~MainClass()
{
}

float totalValue(int numShares, float stockValue) {
	return numShares * stockValue; //calc total value of stocks
}

int main() {
	int totalNumStocks = 0;
	float portfolioValue = 0.0;
	while (true) {
		int numShares;
		float stockValue;
		cout << "Enter the number of shares owned. 0 to exit.\n";
		cin >> numShares;
		if (numShares == 0) {
			cout << "Total number of stocks entered: " << totalNumStocks << endl;
			printf("Total of portfolio = $%.2f\n", portfolioValue);
			system("pause"); //pause needed to properly display values
			break;
		}
		cout << "Enter the value of the stock.\n";
		cin >> stockValue;
		printf("Total = $%.2f\n", totalValue(numShares, stockValue));
		totalNumStocks++; //calc total num of stocks
		portfolioValue += totalValue(numShares, stockValue); //bwahahahaha! I changed this comment
	}
}
