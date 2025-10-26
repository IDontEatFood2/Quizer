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

int score = 0;


vector<Questions> quiz = {

    {"What is a set?\na. A list of related items\nb. A well-defined collection of distinct objects\nc. A random group of elements\n", "b"},
{"What is an element?\na. A group of sets\nb. An object that belongs to a set\nc. A collection of subsets\n", "b"},
{"What does the symbol ∈ mean?\na. Subset of\nb. Element of\nc. Equal to\n", "b"},
{"What does the symbol ⊆ mean?\na. Equal set\nb. Subset of\nc. Not equal to\n", "b"},
{"What does the symbol ∅ represent?\na. A finite set\nb. An empty set\nc. A universal set\n", "b"},
{"What is a universal set?\na. A set containing all elements under discussion\nb. A set with no elements\nc. A subset of all other sets\n", "a"},
{"What is a subset?\na. A set that contains all possible subsets\nb. A set whose elements are all in another set\nc. A set with more elements than another\n", "b"},
{"What is a proper subset?\na. A subset that is not equal to the original set\nb. A subset equal to the original set\nc. A subset containing one element\n", "a"},
{"What are disjoint sets?\na. Sets that share all elements\nb. Sets with no elements in common\nc. Sets that are identical\n", "b"},
{"What is a power set?\na. A set containing all possible subsets of another set\nb. A set containing all elements under discussion\nc. A set with an infinite number of elements\n", "a"},
{"What is the symbol for union?\na. ∩\nb. ∪\nc. –\n", "b"},
{"What does union (A ∪ B) mean?\na. All elements in A or B or both\nb. Only elements common to A and B\nc. Elements in A but not in B\n", "a"},
{"What does intersection (A ∩ B) mean?\na. All elements in A or B\nb. Elements common to both A and B\nc. Elements in A but not in B\n", "b"},
{"What does A – B represent?\na. Elements in B but not in A\nb. Elements in A but not in B\nc. All elements in A and B\n", "b"},
{"What is the complement of A (Aᶜ)?\na. All elements not in A, from the universal set\nb. All elements in A only\nc. All elements in both A and B\n", "a"},
{"What are equal sets?\na. Sets with exactly the same elements\nb. Sets with similar size but different elements\nc. Sets with no elements\n", "a"},
{"What is a finite set?\na. A set with a countable number of elements\nb. A set with an uncountable number of elements\nc. A set with no elements\n", "a"},
{"What is an infinite set?\na. A set with no elements\nb. A set that continues endlessly\nc. A set with only one element\n", "b"},
{"What is the symbol × used for in sets?\na. Union\nb. Intersection\nc. Cartesian product\n", "c"},
{"What is a Cartesian product?\na. The set of all possible ordered pairs from two sets\nb. The union of two sets\nc. The difference of two sets\n", "a"},
{"What is cardinality?\na. The name of a set\nb. The number of elements in a set\nc. The elements shared by two sets\n", "b"},
{"What is the difference between A ⊆ B and A ⊂ B?\na. None, they mean the same\nb. ⊆ allows equality, ⊂ means not equal\nc. ⊂ allows equality, ⊆ means not equal\n", "b"},
{"What does it mean if A ∩ B = ∅?\na. A and B are equal\nb. A and B are disjoint\nc. A is a subset of B\n", "b"},
{"What is the roster method?\na. Listing all elements of a set inside braces\nb. Describing a set using a rule\nc. Naming the number of elements\n", "a"},
{"What is the set-builder method?\na. Writing sets in word form\nb. Describing sets by a property of elements\nc. Listing elements one by one\n", "b"},
{"If |A| = 3, what does that mean?\na. Set A has 3 elements\nb. Set A is the universal set\nc. Set A has no elements\n", "a"},
{"What does the expression P(A) mean?\na. The intersection of A\nb. The power set of A\nc. The complement of A\n", "b"},
{"What is the universal symbol for intersection?\na. ∩\nb. ∪\nc. –\n", "a"},
{"Which operation combines all elements from two sets?\na. Intersection\nb. Union\nc. Difference\n", "b"},
{"Which operation finds only the elements both sets share?\na. Union\nb. Intersection\nc. Complement\n", "b"},
{"What kind of set has no intersection with another?\na. Equal set\nb. Disjoint set\nc. Infinite set\n", "b"},
{"What is the universal symbol for an empty set?\na. {}\nb. ∅\nc. 0\n", "b"},
{"What is the universal symbol for the universal set?\na. U\nb. A\nc. ∅\n", "a"},
{"What type of set has no beginning or end?\na. Infinite set\nb. Finite set\nc. Disjoint set\n", "a"},
{"What do we call a collection of ordered pairs?\na. Power set\nb. Cartesian product\nc. Universal set\n", "b"},
{"What do we call a set with only one element?\na. Singleton set\nb. Empty set\nc. Proper subset\n", "a"}







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
        } else if (score > quiz.size()/2) {
            cout << "That was close you had only " <<  quiz.size()- score << " wrong. better luck next time! " << endl;
        }else {
            cout << "Review more dude, you got "<< quiz.size()- score << " wrong"  << endl;
        }
    return 0;
}