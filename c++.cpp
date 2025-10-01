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

int score;


vector<Questions> quiz = {
// LESSON 1: Introduction to Programming

{"the earliest calculation device, era before electricity, invented in asia but used in babylon, can perform addition and subtraction", "abacus 300 to 500 bc"},
{"1st general-purpose electromechanical computer at harvard university, emergence of modern computers, developed by howard aiken", "mark 1 digital computer 1944"},
{"Who Created the Mark 1 digital computer ", "howard aiken"},
{"1st general-purpose stored-program electronic digital computer, era of mass production, invented by j. presper eckert and john mauchly, used to correctly predict election", "univac"},
{"Who invented the 1st general-purpose stored-program electronic digital computer " , "j. presper eckert, john mauchly" },
{"process of designing and building an executable program to accomplish specific computing tasks", "computer programming"},
{"another term for computer program", "software"},
{"first programmer, known for algorithm design in 1840", "ada lovelace"},
{"stores data that can change during program execution", "variable"},
{"repeats a block of code multiple times", "loop"},
{"makes decisions based on conditions", "conditionals"},
{"reusable blocks of code", "subroutines and functions"},

// Programming Languages
{"translated to machine language by a compiler, very fast code, may not port well, example: c++, c, objective-c", "compiled languages"},
{"read and executed by an interpreter, slower execution, example: php, javascript", "interpreted languages"},

// C++ Language
{"powerful general-purpose language, extension of c, middle-level language, developed by bjarne stroustrup at bell labs in 1979", "c++"},
{"operator used to increment a variable", "++"},
{"first c with classes compiler, derived from cpre, self-hosting, abandoned in 1993 due to exception support issues", "cfront"},

// Uses and Applications of C++

// Levels of Programming
{"written in a way humans can understand", "high level"},
{"bridge between hardware and programming layer", "middle level"},
{"designed for specific computer architecture", "low level"},

// Basic Structure of a C++ Program
{"includes standard input/output definitions", "#include <iostream>"},
{"allows use of standard library names without prefix", "using namespace std"},
{"defines the starting point of a c++ program", "int main()"},
{"prints data to the standard output", "cout"},
{"inserts data into an output stream", "<<"},
{"character string literal", "\"hello world!\""},
{"indicates the end of a statement", ";"},
{"header that declares standard I/O functions and objects", "<iostream>"},

// LESSON 2: Basic Input / Output in C++

{"standard input stream", "cin"},
{"standard output stream", "cout"},
{"standard error stream", "cerr"},
{"standard logging stream", "clog"},

// Output
{"inserts data into the standard output", "<<"},
{"breaks a line at a specific point", "\\n (new-line)"},
{"alternative function to break a line", "endl (end-of-line)"},

// Input
{"used with extraction operator >> to read input into a variable", "cin"}

}; 

shuffle(quiz.begin(), quiz.end(), g);
    cout << "=== Random Identification Quiz: C++ ===\n\n"; 

    //asks the questions
    for (int i = 0; i < quiz.size(); i++){ 

    cout << "__________\n\n" << i+1 << "." << quiz[i].question << "\n\n>";
    string answer;
        getline (cin, answer); 

            if (turnToLowerCase(answer) == quiz[i].answer){
                cout << "Correct!\n\n" << endl;
                    score++;
            }else {
                cout << "Incorrect! the answer was: " << quiz[i].answer << "\n" << endl; 

            }
    } 

    cout << "You have finished the quiz, Your final score is: " << score << "Out of " << quiz.size() << endl;
        if (score == quiz.size()){
            cout << "You earned a perfect score! ";
        } else if (score == quiz.size()/2) {
            cout << "That was close better luck next time! " << endl;
        }else {
            cout << "Review more dude " << endl;
        }
    return 0;
}