#include "SAQuestion.h"
#include <iostream>
#include <algorithm>
using namespace std;

//Default constructor 
SAQuestion::SAQuestion() {

	answer = "";
}

//Constructor #2
SAQuestion::SAQuestion(string a, string t) : Question(t) {

	answer = a;
}

//Sets the correct answer of the SA question 
void SAQuestion::setAnswer(string a) {

	transform(a.begin(), a.end(), a.begin(), ::tolower);
	answer = a;
}

//Displays the correct answer
string SAQuestion::getAnswer() {

	return answer;
}

//Checks if the answer is correct or false 
bool SAQuestion::checkAnswer(string a) {

	transform(a.begin(), a.end(), a.begin(), ::tolower);

	if ( a == getAnswer()) {

		return true;
	}
	else {

		return false;
	}
}

//Displays the question for the user
void SAQuestion::display() {

	cout << getQuestion() << endl;

}