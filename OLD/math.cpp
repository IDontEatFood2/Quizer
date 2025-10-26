#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <random>
#include <cstdlib>
using namespace std; 

string turnToLowerCase (string userAnswer){
    for (char &letter : userAnswer){
        letter = tolower(letter); 

    }
return userAnswer;
} 

struct Questions
{
    string question;
    string answer;
};


int main (){
// Makes the quiz random
random_device rd;
mt19937 g(rd()); 

int score=0;


vector<Questions> quiz = {

{"What algebraic expression is this 3x", "monomial"},
{"What algebraic expression is this 5y", "monomial"},
{"What algebraic expression is this 3x + 5", "binomial"},
{"What algebraic expression is this 7a² - 4a", "binomial"},
{"What algebraic expression is this 3x² + 5x + 2", "polynomial"},
{"What algebraic expression is this 7a³ - 4a + 6", "polynomial"},

{"What is the 8 in 8x - 6", "coefficient"},
{"What is the x in 8x - 6", "variable"},
{"What is the 8x - 6 in 8x - 6", "term"},
{"Anexpression, which is made up of variables and constants, along with algebraic operations", "algebraic expression"},
{"The study of numbers, number patterns and relationships, counting and measuring.", "mathematics"},
{"Three characteristics of mathematic language", "precise, concise, powerful"},
{"The system of naming or representing numbers", "number system"},
{"A mnemonic used to remember the order of operations", "gemdas"},
{"What is the 6 in 8x - 6", "constant"}



}; 

shuffle(quiz.begin(), quiz.end(), g);
    cout << "=== Random Identification Quiz: Math ===\n\n"; 

    //asks the questions
    for (int i = 0; i < quiz.size(); i++){ 

    cout << "__________\n\n" << i+1 << "." << quiz[i].question << "\n\n> ";
    string answer;
        getline (cin, answer); 

            if (turnToLowerCase(answer) == quiz[i].answer){
                cout << "Correct!\n\n" << endl;
                    score++;
            }else {
                cout << "Incorrect! the answer was: " << quiz[i].answer << "\n" << endl; 

            }
    } 

    cout << "You have finished the quiz, Your final score is: " << score << endl;
        if (score == quiz.size()){
            cout << "You earned a perfect score! ";
        } else if (score > quiz.size()/2) {
            cout << "That was close you had only " <<  quiz.size()- score << " wrong. better luck next time! " << endl;
        }else {
            cout << "Review more dude " << endl;
        }
    return 0;
}