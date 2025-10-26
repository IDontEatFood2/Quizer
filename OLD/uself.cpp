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



{"What did Pre-Socratic philosophers mainly focus on?\na. The self\nb. Nature and the physical world\nc. Politics\nd. Society\n", "b"},
{"Who is regarded as the first philosopher?\na. Plato\nb. Socrates\nc. Aristotle\nd. Descartes\n", "b"},
{"What was the main focus of Socrates’ philosophy?\na. Nature\nb. The self (body and soul)\nc. Politics\nd. Art\n", "b"},
{"Where did Socrates live?\na. Rome\nb. Athens\nc. Sparta\nd. Corinth\n", "b"},
{"In Athens, what shaped culture and beliefs?\na. Religion\nb. Technology\nc. Industry\nd. War\n", "a"},
{"What political system valued people’s right to be heard in Athens?\na. Monarchy\nb. Democracy\nc. Oligarchy\nd. Aristocracy\n", "b"},
{"What did the Socratic Method involve?\na. Lectures\nb. Asking questions to guide discovery\nc. Writing essays\nd. Debates\n", "b"},
{"Who was the student of Socrates?\na. Aristotle\nb. Plato\nc. Descartes\nd. Hume\n", "b"},
{"How many parts of the soul did Plato describe?\na. Two\nb. Three\nc. Four\nd. Five\n", "b"},
{"Which part of Plato’s soul is responsible for reasoning and wisdom?\na. Rational\nb. Spirited\nc. Appetitive\nd. Emotional\n", "a"},
{"Which part of the soul controls desires and cravings?\na. Rational\nb. Appetitive\nc. Spirited\nd. Moral\n", "b"},
{"Which part of the soul governs courage and discipline?\na. Spirited\nb. Rational\nc. Appetitive\nd. Logical\n", "a"},
{"According to Plato, a person is just when which parts dominate?\na. Rational and Spirited\nb. Appetitive and Spirited\nc. Rational and Appetitive\nd. All three equally\n", "a"},
{"Who said “Cogito Ergo Sum”?\na. Socrates\nb. Plato\nc. René Descartes\nd. David Hume\n", "c"},
{"What does “Cogito Ergo Sum” mean?\na. I am human\nb. I think, therefore I am\nc. I exist, therefore I live\nd. I think, therefore I act\n", "b"},
{"In Descartes’ philosophy, what does 'Cogito' represent?\na. Body\nb. Soul or mind\nc. Spirit\nd. Reason\n", "b"},
{"What does 'Externa' represent in Descartes’ theory?\na. Soul\nb. Body\nc. Mind\nd. Rational thought\n", "b"},
{"Which of the following is NOT one of Descartes’ three types of ideas?\na. Adventitious\nb. Fabricated\nc. Innate\nd. Logical\n", "d"},
{"What kind of ideas come from external sources according to Descartes?\na. Adventitious\nb. Fabricated\nc. Innate\nd. Imagined\n", "a"},
{"Ideas created by imagination are called?\na. Adventitious\nb. Fabricated\nc. Innate\nd. Natural\n", "b"},
{"Ideas given by God are called?\na. Adventitious\nb. Fabricated\nc. Innate\nd. Imaginary\n", "c"},
{"Who separated knowledge into impressions and ideas?\na. Descartes\nb. Hume\nc. Ryle\nd. Plato\n", "b"},
{"What are impressions according to Hume?\na. Weak thoughts\nb. Direct sensory experiences\nc. Logical reasoning\nd. Innate ideas\n", "b"},
{"What are ideas according to Hume?\na. Strong experiences\nb. Copies of impressions\nc. Natural instincts\nd. Logical arguments\n", "b"},
{"Who said “You are what you do”? \na. Gilbert Ryle\nb. David Hume\nc. Plato\nd. Socrates\n", "a"},
{"What did Gilbert Ryle reject?\na. Mind-body unity\nb. Mind-body separation\nc. Rational thought\nd. Physical perception\n", "b"},
{"What did Ryle believe builds the self?\na. Feelings\nb. Actions and experiences\nc. Dreams\nd. Desires\n", "b"},
{"Who emphasized that body and mind are intertwined?\na. Descartes\nb. Merleau-Ponty\nc. Plato\nd. Hume\n", "b"},
{"According to Merleau-Ponty, perception comes from?\na. Logic\nb. Lived experiences\nc. Emotions\nd. Dreams\n", "b"},
{"Which philosopher focused on lived experience and perception?\na. Merleau-Ponty\nb. Socrates\nc. Descartes\nd. Ryle\n", "a"},
{"What is conduct disorder?\na. Respect for authority\nb. Anger and trouble with authority\nc. Obedience to society\nd. Peaceful behavior\n", "b"},
{"What does sociology study?\na. Animals\nb. Society and human relations\nc. Geography\nd. Environment\n", "b"},
{"What are wild or feral children known for?\na. Living with humans\nb. Lacking human interaction\nc. Being educated\nd. Being disciplined\n", "b"},
{"Which of the following is NOT a quality of self?\na. Separate\nb. Unique\nc. Consistent\nd. Inconsistent\n", "d"},
{"Who introduced the concepts of 'moi' and 'personne'?\na. Mead\nb. Mauss\nc. Vygotsky\nd. Ryle\n", "b"},
{"In Mauss’ theory, what is 'moi'?\na. False self\nb. True self\nc. Social self\nd. Mask\n", "b"},
{"In Mauss’ theory, what is 'personne'?\na. True self\nb. False or social self\nc. Rational self\nd. Bodily self\n", "b"},
{"What does 'persona' mean?\na. Mask\nb. Personality\nc. Mind\nd. Spirit\n", "a"},
{"Who proposed the Role-Taking Theory?\na. Mead\nb. Mauss\nc. Vygotsky\nd. Hume\n", "a"},
{"What is the first stage of Mead’s Role-Taking Theory?\na. Play\nb. Game\nc. Preparatory\nd. Mature\n", "c"},
{"During which stage do children imitate others?\na. Preparatory\nb. Play\nc. Game\nd. Mature\n", "a"},
{"At what stage do children play roles without significant others?\na. Preparatory\nb. Play\nc. Game\nd. Adult\n", "b"},
{"At what stage do children learn rules and understand society?\na. Preparatory\nb. Play\nc. Game\nd. Role model\n", "c"},
{"Who emphasized learning through social interaction?\na. Vygotsky\nb. Mead\nc. Mauss\nd. Ryle\n", "a"},
{"According to Vygotsky, learning first happens between people. This is called?\na. Intra-psychological\nb. Inter-psychological\nc. Interpersonal\n", "b"},
{"Learning that occurs within the individual is called?\na. Inter-psychological\nb. Intra-psychological\nc. Meta-cognitive\n", "b"},
{"Which of the following is an elementary mental function?\na. Hunger\nb. Language\nc. Attention\nd. Perception\n", "a"},
{"Which of the following is a higher mental function?\na. Hunger\nb. Common sense\nc. Language\nd. Reflex\n", "c"},
{"What does MKO stand for?\na. More Knowledgeable Other\nb. Most Known Object\nc. Main Knowledge Order\n", "a"},
{"What does ZPD stand for?\na. Zone of Personal Discipline\nb. Zone of Proximal Development\nc. Zone of Psychological Division\n", "b"},
{"Which philosopher said that body and mind work together to perceive the world?\na. Ryle\nb. Merleau-Ponty\nc. Descartes\nd. Hume\n", "b"}





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

