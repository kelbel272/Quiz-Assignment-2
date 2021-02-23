/* Create a quiz class

o The quiz will have 2 Multiple-choice questions, 2 Numerical-Answer questions, and 2 Short-Answer questions.

o Use the user input to verify if it is the correct answer.

o Count the number of correct answers and calculate a grade (correct_answers/total_answers)*/

#pragma once

#include "NAQuestion.h"
#include "MCQuestion.h"
#include "SAQuestion.h"
#include <iostream>

using namespace std;

class Quiz {

	private:
		string title;
		float correct_answers = 0;
		float total_answers = 5;
		int grade;

	public:
		MCQuestion MCQuestions[2];
		NAQuestion NAQuestions[2];
		SAQuestion SAQuestions[2];
		void setTitle(string arg_title);
		string getTitle();
		void start();
		void isCorrect(bool check);
		int calculateGrade(float correct_answers, float total_answers);

};