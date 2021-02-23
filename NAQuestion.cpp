#include "NAQuestion.h"

#include <iostream>
using namespace std;

//Default constructor 
NAQuestion::NAQuestion() {

	answer_max = 0;
	answer_min = 0;
}

//Constructor #2
NAQuestion::NAQuestion(string t, double min, double max) : Question(t) {

	answer_max = max;
	answer_min = min;

}

//Sets the minimum answer user can input to be correct 
void NAQuestion::setAnswerMin(double min) {

	answer_min = min;
}

//Displays the minimum answer user can input to be correct 
double NAQuestion::getAnswerMin() {

	return answer_min;
}

//Sets the maximum answer user can input to be correct 
void NAQuestion::setAnswerMax(double max) {

	answer_max = max;
}

//Displays the maximum answer user can input to be correct 
double NAQuestion::getAnswerMax() {

	return answer_max;
}

//Checks if the answer is correct or false 
bool NAQuestion::checkAnswer(int input) {

	if (input <= getAnswerMax() && input >= getAnswerMin()) {

		return true;
	}
	else {

		return false;
	}

}

//Displays the question for the user
void NAQuestion::display() {

	cout << getQuestion() << endl;

}