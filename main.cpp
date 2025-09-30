#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <random>
#include <cstdlib>


std::string turnToLowerCase (std::string userAnswer){
    for (char &letter : userAnswer){
        letter = tolower(letter);

    }
 return userAnswer;
}

struct Questions
{
    std::string question;
    std::string answer;
};


int main (){
// Makes the quiz random
std::random_device rd;
std::mt19937 g(rd());

int score = 0;


std::vector<Questions> quiz = {
        {"Is the system of naming or representing numbers.", "number system"},
        {"In mathematics is an expression, which is made up of variables and constants,.", "algebraic expressions"},
        {"In 8x + 6, What is the x.", "variable"},
        {"In 8x + 6, What is the 8.", "coefficient"},
        {"In 8x + 6, What is the 6.", "constant"},
        {"In 8x + 6, What is the whole 8x + 6.", "term"},
        {"What are the three types of algebraic expression.", "monomial, binomial, polynomial"},
        {"Indicates that you can draw an imaginary line across an object and the resulting parts are mirror images of each other..", "symmetry"},
        {"What is the golden ratio.", "1.681"},
        {"What is the golden ratio often represented as by (What is its symbol name 'p').", "phi"},
        {"Who was the man who created fibbonacci sequence.", "leonardo pisano bogollo"},
        {"Where did Leonardo Pisano Bogollo live?", "italy"},
        {"A situation that requires a solution, but there is no immediately clear way to reach it..", "problem"},
        {"A situation that requires a solution, but there is no immediately clear way to reach it..", "problem solving"},
        {"Forming a conclusion (called a conjecture) based on specific examples..", "inductive reasoning"},
        {"Reaching a conclusion by applying general principles.", "deductive reasoning"},
        {"Used inductive and deductive reasoning to show how a mathematical procedure works..", "logic"},
        {"The study of numbers, number patterns and relationships, counting and measuring", "mathematics"}
};

std::shuffle(quiz.begin(), quiz.end(), g);
    std::cout << "=== Random Identification Quiz: Math ===\n\n";

    //asks the questions
    for (int i = 0; i < quiz.size(); i++){

    std::cout << "________________________________\n" << i+1 << ". " << quiz[i].question << "\n\n> ";
    std::string answer;
        getline (std::cin, answer);

            if (turnToLowerCase(answer) == quiz[i].answer){
                std::cout << "Correct!\n________________________________" << std::endl;
                    score++;
            }else {
                std::cout << "Incorrect! the answer was: " << quiz[i].answer << "\n" << "________________________________" << std::endl;

            }
    }

    std::cout << "You have finished the quiz, Your final score is: " << score << std::endl;
        if (score == quiz.size()){
            std::cout << "You earned a perfect score! ";
        } else if (score == quiz.size()/2) {
            std::cout << "That was close better luck next time! " << std::endl;
        }else {
            std::cout << "Review more dude " << std::endl;
        }
    system("pause");
}