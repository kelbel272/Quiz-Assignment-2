#include "question.h"
#include "MCQuestion.h"
#include "SAQuestion.h"
#include "NAQuestion.h"
#include "Quiz.h"
#include <iostream>
#include <string>

using namespace std;


int main() {

	cout << "Quiz" << endl;
	cout << "-----------------------------------" << endl;

	//Create quiz object
	Quiz quiz1;

	//Display title 
	quiz1.setTitle("Michigan Quiz");

	//Set questions and answers 
	quiz1.MCQuestions[0].setQuestion("What is the capital of Michigan?");
	quiz1.MCQuestions[0].setAnswer(0, "Detroit");
	quiz1.MCQuestions[0].setAnswer(1, "Lansing");
	quiz1.MCQuestions[0].setAnswer(2, "Grand Rapids");
	quiz1.MCQuestions[0].setAnswer(3, "Flint");
	quiz1.MCQuestions[1].setQuestion("\nWhat is Traverse City known for?");
	quiz1.MCQuestions[1].setAnswer(0, "Apples");
	quiz1.MCQuestions[1].setAnswer(1, "Cider");
	quiz1.MCQuestions[1].setAnswer(2, "Cherries");
	quiz1.MCQuestions[1].setAnswer(3, "Tulips");
	quiz1.NAQuestions[0].setQuestion("\nHow long is the Mackinac Bridge (in feet)?");
	quiz1.NAQuestions[0].setAnswerMin(26000);
	quiz1.NAQuestions[0].setAnswerMax(27000);
	quiz1.NAQuestions[1].setQuestion("\nHow big is Detroit (in miles)?");
	quiz1.NAQuestions[1].setAnswerMin(140);
	quiz1.NAQuestions[1].setAnswerMax(150);
	quiz1.SAQuestions[0].setQuestion("\nWho is the governor of Michigan? (last name)?");
	quiz1.SAQuestions[0].setAnswer("Whitmer");
	quiz1.SAQuestions[1].setQuestion("\nWhat item of clothing does Michigan look like?");
	quiz1.SAQuestions[1].setAnswer("Mitten");

	//Begin Quiz
	quiz1.start();


}