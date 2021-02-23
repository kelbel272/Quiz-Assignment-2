#include "Quiz.h"

#include <algorithm>
#include <string>
#include <iostream>


void Quiz::setTitle(string arg_title) {
	title = arg_title;
}

string Quiz::getTitle() {
	return title;
}

void Quiz::start() {

	int userInput;		//For number input
	string input;		//For string input 
	

	cout << "Title: " << title << endl << endl;

	//Two Multiple Choice Questions
	for (int i = 0; i < 2; i++) {
		bool check;

		MCQuestions[i].display();								//Displays the question for the user
		cout << "Choice: ";
		cin >> userInput;
		check = MCQuestions[i].checkAnswer(i, userInput);		//Checks if correct integer was entered	
		isCorrect(check);

		//Display if correct or false 
		if (check == true) {

			cout << "\nCORRECT" << endl;
		}
		else {

			cout << "\nFALSE" << endl;
		}

	}

	//Two Numeric Answer Questions
	for (int i = 0; i < 2; i++) {
		bool check;

		NAQuestions[i].display();							//Displays the question for the user
		cout << "Answer: ";
		cin >> userInput;
		check = NAQuestions[i].checkAnswer(userInput);		//Checks if correct integer was entered	
		isCorrect(check);									//Add to correct answers if correct 

		//Display if true or false 
		if (check == true) {

			cout << "\nCORRECT" << endl;
		}
		else {

			cout << "\nFALSE" << endl;
		}
	}

	cin.ignore(numeric_limits<streamsize>::max(), '\n');	//For getline

	//Two Short Answer Questions
	for (int i = 0; i < 2; i++) {
		bool check;

		SAQuestions[i].display();							//Displays the question for the user
		cout << "Answer: ";
		getline(cin, input);
		check = SAQuestions[i].checkAnswer(input);			//Checks if correct integer was entered	
		isCorrect(check);									//Add to correct answers if correct

		//Displays if correct or false
		if (check == true) {

			cout << "\nCORRECT" << endl;
		}
		else {

			cout << "\nFALSE" << endl;
		}
	}

	//Display the grade
	cout << "\nYour grade for the quiz is: " << calculateGrade(correct_answers, total_answers) << "%";	
}

/*isCorrect pulls the function getsUserAnswer and checks to see if it is correct.
if an answer is correct it will add 1 to the correct_answer variable*/
void Quiz::isCorrect(bool check) {

	if (check == true) {

		correct_answers++;
	}
	else {

		correct_answers = correct_answers + 0;

	}

}


//Calculate calculates the grade and returns it
int Quiz::calculateGrade(float correct_answers, float total_answers) {

	int grade = (correct_answers / total_answers) * 100;
	return grade;
}