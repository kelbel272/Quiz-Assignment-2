/*mcquestion class has a private string array called choices1. The choices
array contains 4 elements. Also, two functions: (1) setAnswer which parameters 
are the text of an answer and an array position where it will be stored, and 
(2) getAnswer which returns the text of an answer given an array position. 
Also, a function named checkAnswer which checks whether the input parameter is the correct answer.*/
#pragma once
#include "question.h"
#include <iostream>

using namespace std;

class MCQuestion : public Question {

private:
	string choices1[4];

public:
	MCQuestion();
	MCQuestion(string t, string arr[]);
	void setAnswer(int i, string ans);
	string getAnswer(int i);
	bool checkAnswer(int i, int input);
	void display();
};
