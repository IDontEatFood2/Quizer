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



{"What did Pre-Socratic philosophers mainly focus on?\na. The self\nb. Nature and the physical world\nc. Politics\nd. Religion\n", "b"},
{"Why is Socrates regarded as the first philosopher?\na. He focused on nature\nb. He centered philosophy on the self\nc. He was a scientist\nd. He studied politics\n", "b"},
{"Which method involves asking questions to guide someone to discover answers themselves?\na. Socratic Method\nb. Cartesian Method\nc. Empirical Method\nd. Scientific Method\n", "a"},
{"Which of the following shaped Athenian culture and beliefs during Socrates' time?\na. Religion\nb. Technology\nc. Industry\nd. Science\n", "a"},
{"Which political system in Athens valued people's right to be heard?\na. Monarchy\nb. Democracy\nc. Oligarchy\nd. Theocracy\n", "b"},
{"Which part of Plato’s soul is responsible for reasoning and wisdom?\na. Spirited\nb. Rational\nc. Appetitive\nd. Emotional\n", "b"},
{"Which part of the soul regulates courage, will, and discipline according to Plato?\na. Appetitive\nb. Rational\nc. Spirited\nd. Logical\n", "c"},
{"According to Plato, a person is JUST when which parts of the soul dominate?\na. Rational and Spirited\nb. Spirited and Appetitive\nc. Appetitive and Rational\nd. All three equally\n", "a"},
{"What does 'Cogito Ergo Sum' mean?\na. I am human\nb. I think, therefore I am\nc. I exist, therefore I think\nd. I feel, therefore I exist\n", "b"},
{"In Descartes’ theory, which is responsible for decision-making?\na. Externa\nb. Cogito\nc. Appetitive\nd. Rational\n", "b"},
{"Which of the following is NOT one of Descartes’ three types of ideas?\na. Adventitious\nb. Fabricated\nc. Innate\nd. Logical\n", "d"},
{"What are 'impressions' according to David Hume?\na. Ideas formed from imagination\nb. Weak copies of thoughts\nc. Strong sensory experiences\nd. Abstract reasoning\n", "c"},
{"What did Gilbert Ryle believe about the self?\na. It is separate from the body\nb. It is based on actions and experiences\nc. It is purely mental\nd. It is only physical\n", "b"},
{"What did Maurice Merleau-Ponty emphasize?\na. Mind and body are separate\nb. Perception is based only on the mind\nc. Body and mind are intertwined\nd. Perception is irrelevant\n", "c"},
{"What does conduct disorder often involve?\na. Respect for authority\nb. Anger towards authority and causing trouble\nc. Following social rules\n", "b"},
{"What is sociology the study of?\na. Human biology\nb. Society and human relations\nc. Political systems\n", "b"},
{"What are wild or feral children known for?\na. Having strong memory\nb. Never experiencing human interaction\nc. Being highly educated\n", "b"},
{"Which of the following is NOT a quality of the self?\na. Separate\nb. Unique\nc. Inconsistent\nd. Consistent\n", "c"},
{"According to Marcel Mauss, which represents the true self?\na. Moi\nb. Personne\nc. Persona\nd. Id\n", "a"},
{"What does 'persona' mean in Marcel Mauss' theory?\na. True self\nb. False or social self (mask)\nc. Biological self\nd. Rational self\n", "b"},
{"What is the first stage in George Herbert Mead’s Role-Taking Theory?\na. Game\nb. Play\nc. Preparatory\nd. Generalized\n", "c"},
{"At what stage do children start understanding the roles of others and society?\na. Preparatory\nb. Play\nc. Game\nd. Symbolic\n", "c"},
{"According to Vygotsky, learning is primarily driven by?\na. Isolation\nb. Social interaction\nc. Genetics\nd. Imitation only\n", "b"},
{"Which of the following is an elementary mental function?\na. Language\nb. Advanced memory\nc. Hunger\nd. Perception\n", "c"},
{"Which of the following is a higher mental function?\na. Hunger\nb. Common sense\nc. Language\nd. Basic memory\n", "c"},
{"What does MKO stand for in Vygotsky’s theory?\na. Most Knowledgeable Observer\nb. More Knowledgeable Other\nc. Most Known Order\n", "b"},
{"What does ZPD stand for?\na. Zone of Psychological Development\nb. Zone of Proximal Development\nc. Zone of Personal Discipline\n", "b"}




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
