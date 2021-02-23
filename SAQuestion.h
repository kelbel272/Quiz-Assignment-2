/*o	saquestion class has a private string variable called answer.
Accessor and mutator are required. Also, a function named checkAnswer 
which checks whether the input parameter is the correct answer.*/
#pragma once

#include "question.h"

#include <iostream>

using namespace std;

class SAQuestion : public Question {

	private:
		string answer;

	public:
		SAQuestion();
		SAQuestion(string a, string t);
		void setAnswer(string a);
		string getAnswer();
		bool checkAnswer(string a);
		void display();
};
