#include<iostream>
using namespace std;
//Fitness Tracker System
int main(){
	int number_of_runners;
	cout << "Number of runners: ";
	cin >> number_of_runners;
	string name[number_of_runners], choice, search;
	double miles[number_of_runners][7],total_miles[number_of_runners], sum, average, average_each_day[8];
	for(int i = 0; i < number_of_runners; i++) {
		cout << "Name: ";
		cin >> name[i];
		for(int j = 0; j < 7; j++) {
			cout << "Number of miles runs in day " << j + 1 << ": ";
			cin >> miles[i][j];
		}
		sum = 0;
		for (int j = 0; j < 7; j++) {
			sum = sum + miles[i][j];
		}
		total_miles[i] = sum;
	}
	for(int i = 0; i < 8; i++) {
		sum = 0;
		for(int j = 0; j < number_of_runners; j++) {
			sum = sum + miles[j][i];
		}
		average_each_day[i] = sum / number_of_runners;
	}
	sum = 0;
	for(int i = 0; i < number_of_runners; i++){
	sum = sum + total_miles[i];	
	}
	average_each_day[7] = sum / number_of_runners;
	
	cout << "Runner Name";
	for(int i = 0; i < 7; i++) {
		cout << "\t"<< "Miles Day " << i + 1;
	}
	cout << "\t"<< "Total Miles" << endl;
	for(int i = 0; i < number_of_runners; i++) {
		cout << name[i];
		for(int j = 0; j < 7; j++) {
			cout << "\t            " << miles[i][j];
		}
		cout << "\t             " << total_miles[i] << endl;
	}
		
	cout << "Average Miles";
	for(int i = 0; i < 8; i++) {
		cout << "\t    "<< average_each_day[i] << "     ";
		
	}
	cout << endl;
	do {
		cout << "Which runner you want to search for: ";
		cin >> search;
		for(int i = 0; i < number_of_runners; i++) {
			if(search == name[i]) {
				cout << "Runner Name: " << name[i] << endl;
				for(int j = 0; j < 7; j++) {
					cout << "Miles in Day " << j + 1 << ": " << miles[i][j] << endl;
				}
				cout << "Total Miles: " << total_miles[i] << endl;
				goto label;
			} 
		}
		cout << "Sorry " << search << " is not found. Try again!!" << endl;
		label:		
	cout << "Do you want to search again (yes/no): ";
	cin >> choice;
	}while(choice != "no");
	
		return 0;
} 
