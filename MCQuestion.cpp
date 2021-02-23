#include "MCQuestion.h"
#include <iostream>

using namespace std;

//Default constructor
MCQuestion::MCQuestion() {

	choices1[3];
}

//Initizalize the array 
MCQuestion::MCQuestion(string t, string arr[]) : Question(t) {

	for (int i = 0; i < 5; ++i) {

		choices1[i] = arr[i];

	}
}

//Sets the multiple choice answers of the question 
void MCQuestion::setAnswer(int input, string ans) {

		choices1[input] = ans;

}

//Displays the multiple choice answers
string MCQuestion::getAnswer(int i) {

	return choices1[i];
}

//Checks to see if the user's input is the correct answer 
bool MCQuestion::checkAnswer(int i, int input) {

	
	//Check if first question is correct or false 
	if (i == 0) {
		if (input == 2) {

			return true;
		}
		else {

			return false;
		}
	}

	//Check second question is correct or false 
	if (i == 1) {
		if (input == 3) {

			return true;
		}
		else {

			return false;
		}
	}

}

//Displays the question and answers for the user
void MCQuestion::display() {

	cout << getQuestion() << endl;

	for (int i = 0; i < 4; i++) {
		cout << i + 1 << ". " << choices1[i] << endl;
	}
}