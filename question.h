/*•	question class has a private string variable named text which stores the 
text of the question. Accessor and mutator are required.*/

#pragma once

#include <iostream>

using namespace std;

class Question {

	private:
		string text;

	public:
		Question();
		Question(string t);
		void setQuestion(string t);
		string getQuestion();
};