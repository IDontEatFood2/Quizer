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
 
    {"Which part of a message previews the discussion and reveals its subject or purpose?", "introduction"},

{"Which part of a message brings it to a perceptible end instead of simply stopping?", "conclusion"},

{"What is the basic rule of thumb in paragraphing?", "three ideas per paragraph"},

{"Which punctuation mark ends an interrogative sentence?", "question mark"},

{"What is the Latin phrase meaning 'course of life'?", "curriculum vitae"},

{"What does the French word from which 'resume' originated mean?", "to sum up"},

{"Which document is usually only one or two pages long and summarizes a person's qualifications?", "resume"},

{"What is the single-page letter included with a job application to introduce the applicant?", "cover letter"},

{"Which type of speech aims to provide information that the audience does not have?", "informative speech"},

{"What type of speech is delivered without advance preparation?", "impromptu"},

{"What type of speech involves the rote recitation of a written message committed to memory?", "memorized"},

{"What is the most formal speech style with fixed and unchanging expressions?", "frozen"},

{"Which speech style is most commonly used among friends?", "casual"},

{"Which circle in Kachru's model includes countries such as the USA, UK, and Australia?", "inner circle"},

{"What does ENL stand for?", "english as a native language"},

{"To which of Kachru's circles does the Philippines belong?", "outer circle"},

{"Who is credited with developing the Three Concentric Circles model of World Englishes?", "braj kachru"},

{"Which variety of language is closest to the standard variety?", "acrolect"},

{"What is the middle variety between acrolect and basilect?", "mesolect"},

{"What is the least prestigious or most nonstandard variety in the acrolect-mesolect-basilect continuum?", "basilect"},

{"What is the legal language characterized by archaic expressions and technical terminology?", "legalese"},

{"According to Goman's article, how is communication across cultures described?", "challenging"},

{"What punctuation mark combines a question mark and an exclamation point?", "interrobang"},

{"How should the title of a book-length work, such as a play or opera, be formatted in writing?", "underlined or printed in italics"},

{"What refers to the distinct way a person communicates in different situations?", "speech style"},

{"What is the middle part of a speech that develops and discusses the main points?", "body"},

{"Which punctuation mark indicates the end of a declarative sentence?", "period"},

{"Which punctuation mark separates two independent clauses or items in a complex list?", "semicolon"},

{"Which punctuation mark indicates possession or the omission of letters?", "apostrophe"},

{"Which punctuation mark expresses strong emotion or excitement?", "exclamation point"},

{"Which punctuation marks enclose direct speech or quoted words?", "quotation marks"},

{"Which punctuation mark separates words, phrases, or items in a list?", "comma"},

{"Which punctuation mark connects words or parts of words?", "hyphen"},

{"Which punctuation mark introduces a list, explanation, or quotation?", "colon"},

{"Which type of speech aims to convince the audience to accept an idea or take action?", "persuasive speech"},

{"Which type of speech aims to amuse and entertain the audience?", "entertainment speech"},

{"Which speech delivery method involves preparation and practice but uses minimal notes during presentation?", "extemporaneous"},

{"Which speech delivery method involves reading a written message word for word?", "manuscript"},

{"Which type of speech is delivered during special occasions, ceremonies, and formal events?", "ceremonial speech"},

{"Which type of speech aims to motivate, encourage, and uplift the audience?", "inspirational speech"},

{"Which speech style is used between people with very close personal relationships?", "intimate"},

{"Which speech style is commonly used in professional conversations that involve two-way communication?", "consultative"},

{"Which speech style is used in formal situations such as academic lectures and official presentations?", "formal"},

{"Which circle in Kachru's model includes countries where English is learned mainly as a foreign language?", "expanding circle"}

}; 

shuffle(quiz.begin(), quiz.end(), g);
    cout << "=== Random Identification Quiz ===\n\n"; 

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
            cout << "Review more dude, you got "<< quiz.size()- score << " wrong"  << endl;
        }
    return 0;
}
