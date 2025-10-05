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

    {"In order to read, comprehend and construct mathematical arguments\na. Mathematical Reasoning\nb. Combinatorial Analysis\nc. Algorithmic Thinking\nd. Application\n", "a"},
    {"The ability to count or enumerate objects; it includes the discussion of basic techniques of counting.\na. Discrete Structure\nb. Combinatorial Analysis\nc. Mathematical Reasoning\nd. Algorithmic Thinking\n", "b"},
    {"It concerns counting, propositional logic, probability and limit processes over discrete sets.\na. Continuous Math\nb. Algebra\nc. Discrete Math\nd. Calculus\n", "c"},
    {"One idea with no connecting words\na. Simple Statement\nb. Compound Statement\nc. Proposition\nd. Conjunction\n", "a"},
    {"Certain classes of problems are solved by the specification of an algorithm.\na. Modeling\nb. Algorithmic Thinking\nc. Mathematical Reasoning\nd. Discrete Structure\n", "b"},
    {"Has applications to almost every conceivable area of study. There are many applications to computer science.\na. Application\nb. Mathematical Reasoning\nc. Combinatorial Analysis\nd. Discrete Structure\n", "a"},
    {"Combination of two or more simple statements using connectives\na. Compound Statement\nb. Negation\nc. Conjunction\nd. Proposition\n", "a"},
    {"We use lowercase letters such as p, q, r and s to represent statements.\na. Variables\nb. Symbols\nc. Statements\nd. Propositions\n", "b"},
    {"If p and q are two simple statements, then the compound statement p AND q is symbolized by p ∧ q\na. Negation\nb. Conjunction\nc. Disjunction\nd. Conditional\n", "b"},
    {"It is a compound statement formed using the inclusive or represented by the symbol p v q \na. Conjunction\nb. Disjunction\nc. Biconditional\nd. Negation\n", "b"},
    {"The compound statement 'If p, then q' is symbolized by p → q \na. Biconditional\nb. Negation\nc. Conditional\nd. Disjunction\n", "c"},
    {"Statements that are true if the statement is still true when the antecedent and consequent are reversed (p ↔ q)\na. Conditional\nb. Conjunction\nc. Disjunction\nd. Biconditional\n", "d"},

    {"Given any two numbers, you can always find another number between them.\na. Continuous\nb. Discrete\nc. Compound\n", "a"},
    {"Working with distinct values; no infinite points between two points.\na. Continuous\nb. Discrete\nc. Conditional\n", "b"},
    {"A declarative sentence that is either true or false.\na. Proposition\nb. Imperative\nc. Question\n", "a"},
    {"Which of the following is NOT a statement?\na. Manila is the capital of the Philippines.\nb. What is your name?\nc. 2 + 2 = 4\n", "b"},
    {"If p is 'It is raining', and q is 'The ground is wet', which is the correct conditional?\na. p ∧ q\nb. p → q\nc. p v q\n", "b"},
    {"What is the symbol for negation?\na. ∧\nb. ~\nc. →\n", "b"},
    {"What is the symbol for conjunction?\na. ∧\nb. v\nc. ↔\n", "a"},
    {"What is the symbol for disjunction?\na. ∧\nb. v\nc. →\n", "b"},
    {"What is the symbol for biconditional?\na. ↔\nb. →\nc. v\n", "a"},
    {"Which truth table result is always TRUE?\na. Contradiction\nb. Tautology\nc. Contingency\n", "b"},
    {"Which truth table result is always FALSE?\na. Contradiction\nb. Tautology\nc. Contingency\n", "a"},
    {"Which truth table result can be TRUE or FALSE?\na. Contradiction\nb. Tautology\nc. Contingency\n", "c"},
    {"If p ∧ q is false unless both p and q are true, which connective is this?\na. Conjunction\nb. Disjunction\nc. Conditional\n", "a"},
    {"In a conditional statement p → q, what is p?\na. Consequent\nb. Antecedent\nc. Biconditional\n", "b"},
    {"In a conditional statement p → q, what is q?\na. Consequent\nb. Antecedent\nc. Negation\n", "a"},


    {"DeMorgan’s Law for ~(p ∧ q) is:\na. ~p ∨ ~q\nb. ~p ∧ ~q\nc. ~p → ~q\n", "a"},
    {"DeMorgan’s Law for ~(p ∨ q) is:\na. ~p ∨ ~q\nb. ~p ∧ ~q\nc. ~p → ~q\n", "b"},
    {"The negation of p → q is ______.\na. ~p → ~q\nb. p ∧ ~q\nc. ~p ∨ q\nd. q → p\n", "b"},
    {"The converse of p → q is ______.\na. q → p\nb. ~p → ~q\nc. ~q → ~p\nd. p ↔ q\n", "a"},
    {"A proposition that is always TRUE regardless of the truth values of its variables is called ______.\na. contradiction\nb. tautology\nc. contingency\nd. converse\n", "b"},
    {"A proposition that is always FALSE is called ______.\na. tautology\nb. contingency\nc. contradiction\nd. negation\n", "c"},
    {"The contrapositive of p → q is ______.\na. q → p\nb. ~q → ~p\nc. p → ~q\nd. ~p → q\n", "b"}



}; 

shuffle(quiz.begin(), quiz.end(), g);
    cout << "=== Random Identification Quiz: IS ===\n\n"; 

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

    cout << "You have finished the quiz, Your final score is: " << score << endl;
        if (score == quiz.size()){
            cout << "You earned a perfect score! ";
        } else if (score == quiz.size()/2) {
            cout << "That was close better luck next time! " << endl;
        }else {
            cout << "Review more dude " << endl;
        }
    return 0;
}