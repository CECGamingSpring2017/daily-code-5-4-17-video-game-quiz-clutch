#include <iostream>
#include <string>
using namespace std;
string input;
int GTA = 0;
int BO2 = 0;
int FIFA = 0;
int cheese = 0;
int SSB4 = 0;
int main() {
	/////////////////////////////////////////////////////
	cout << "What is better a GOAT or cheese?" << endl;
	getline(cin, input);
	if (input.compare("GOAT") == 0) {
		FIFA += 20;
		BO2 += 15;
		GTA += 10;
		SSB4 += 5;
		cheese += 0;
	}
	if (input.compare("cheese") == 0) {
		cheese += 20;
		SSB4 += 15;
		FIFA += 10;
		GTA += 5;
		BO2 += 0;

	}
	/////////////////////////////////////////////////////
	cout << "Are you older than 18? Yes or No?" << endl;
	getline(cin, input);
	if (input.compare("No") == 0) {
		cheese += 20;
		FIFA += 15;
		SSB4 += 10;
		BO2 += 5;
		GTA += 0;
	}
	if(input.compare("Yes") == 0) {
		GTA += 20;
		BO2 += 15;
		SSB4 += 13;
		FIFA += 10;
		cheese += 1;
	}
	///////////////////////////////////////////////////
	cout << "Pineapple on Pizza? Yes or No?" << endl;
	getline(cin, input);
	if (input.compare("No") == 0) {
		cout << "Why :(" << endl;
		cheese += 10;
		FIFA += 0;
		SSB4 += 0;
		BO2 += 0;
		GTA += 0;
	}
	if (input.compare("Yes") == 0) {
		cout << "You are wise my man" << endl;
		GTA += 10;
		BO2 += 10;
		SSB4 += 13;
		FIFA += 12;
		cheese += 0;
	}
	/////////////////////////////////////////////////
	cout << "Movies or Concerts" << endl;
	getline(cin, input);
	if (input.compare("Movies") == 0) {
		
		cheese += 11;
		FIFA += 7;
		SSB4 += 6;
		BO2 += 5;
		GTA += 10;
	}
	if (input.compare("Concerts") == 0) {

		GTA += 20;
		BO2 += 10;
		SSB4 += 13;
		FIFA += 12;
		cheese += 0;
	}
	////////////////////////////////////////////////////
	cout << "Sports or Warts" << endl;
	getline(cin, input);
	if (input.compare("Sports") == 0) {

		cheese += 11;
		FIFA += 7;
		SSB4 += 16;
		BO2 += 5;
		GTA += 10;
	}
	if (input.compare("Warts") == 0) {

		GTA += 5;
		BO2 += 4;
		SSB4 += 3;
		FIFA += 2;
		cheese += 10;
	}

	
	////////////////////////////////////////////////////////////////////////
	if ((GTA > BO2) && (GTA > FIFA) && (GTA > cheese) && (GTA > SSB4)) {
		cout << "You should play GTA" << endl;
		cout << "Outside of school though" << endl;
	}
	if ((BO2 > FIFA) && (BO2 > cheese) && (BO2 > SSB4) && (BO2 > GTA)) {
		cout << "Black Ops II my boi" << endl;
	 }
	if ((FIFA > cheese) && (FIFA > SSB4) && (FIFA > GTA) && (FIFA > BO2)) {
		cout << "Sauce on them with FIFA" << endl;
	}
	if ((cheese > SSB4) && (cheese > GTA) && (cheese > BO2) && (cheese > FIFA)) {
		cout << "Sorry kid play with cheese" << endl;
	}
	if ((SSB4 > GTA) && (SSB4 > BO2) && (SSB4 > FIFA) && (SSB4 > cheese)) {
		cout << "Super Smash Bros is the way to go" << endl;
	}

}

