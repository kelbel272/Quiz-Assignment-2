/*naquestion class has two private double variables called answer_min, answer_max. 
Accessor is required for each of these variables. Mutator must modify both variables 
in the function. Always, answer_min <= answer_max. Also, a function named checkAnswer 
which checks whether the input parameter is the correct answer. An answer is considered 
correct if the answer is within [answer_min, answer_max].*/

#pragma once

#include "question.h"
#include <iostream>
using namespace std;

class NAQuestion : public Question {

	private:
		double answer_min;
		double answer_max;

	public:
		NAQuestion();
		NAQuestion(string t, double amin, double amax);
		void setAnswerMin(double min);
		double getAnswerMin();
		void setAnswerMax(double max);
		double getAnswerMax();
		bool checkAnswer(int input);
		void display();


};
