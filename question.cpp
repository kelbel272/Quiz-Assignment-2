#include "question.h"

Question::Question() {

	text = "";
}

Question::Question(string t) {

	text = t;
}

//Sets the question 
void Question::setQuestion(string t) {

	text = t;
}

//Dislpays the question 
string Question::getQuestion() {

	return text;
}
