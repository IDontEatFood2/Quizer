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
    // LESSON 1
    {"Maaring maging sanhi ng hindi pagkaunawaan", "sagabal"},
    {"Dahil sa Wika", "semantikong sagabal"},
    {"kundisyon sa katawan", "pisyolohikal na sagabal"},
    {"ingay sa paligid", "pisikal na sagabal"},
    {"dahil sa teknolohikal", "teknolohiya na sagabal"},
    {"Mental disorder", "sikolohikal na sagabal"},
    {"inner self", "intrapersonal"},
    {"2 or more people ang kausap", "interpersonal"},
    {"ginagamitan ng sosyal media", "pangmadlang na komunikasyon"},
    {"Ano ang tawag sa pagbibigay ng impormasyon?", "komunikasyon"},        
    {"Sino ang nagsabi noong 1985: 'patuloy na pakikipag-usap'?", "louis allen"},
    {"Sino ang nagsabi noong 1967: 'proseso ng pagpapasa at pag-unawa'?", "keith davis"},
    {"Sino ang nagsabi noong 1977: 'pagpapalitan ng impormasyon, idea, opinion'?", "newman at summer"},
    {"Sino ang nagsabi noong 1987: 'pagpapasa ng nararamdaman'?", "birvenu"},
    {"Sino ang nagsabi noong 2011: 'kalahok'?", "keyton"},

    // LESSON 2
        {"kultura - tumutukoy sa sining, batas, moral at kaugalian ng iba", "kultura"},
    {"sumasalamin sa wika na mayroon ang isang bansa", "kultura"},
    {"Batikang antripologo (bihasa sa kasaysayan)", "edward t. hall"},
    {"Saan nagtapos si Edward t. Hall", "stados unidos"},
    {"Pamantasan sa amerika", "edward t. hall"},
    {"Ginagamit ng direkta ang wika", "low context culture"},
    {"Pagpapakahulugan ang mga salita na hindi lamang nakabatay sa salitang ginamit", "high context culture"},
    {"Tumutukoy sa pagiging malay ng isang tao sa pagkakatulad at pagkakaiba ng kultura ng  bawat lipunan", "cultural sensitivity"},


    // LESSON 3
    {"body movement", "kinesika"},
    {"komunikasyon na ginagamitan ng espasyo", "proksemika"},
    {"komunikasyong naipaparating ang mensahe gamit ang tono ng pagsasalita", "paralinggwistika"},
    {"komunikasyong nakabatay sa panahon gaya ng oras", "chronemics"},
    {"sense of touch, komunikasyong nakabatay sa pandama", "haptics"},
    {"mata, komunikasyong tumutukoy sa paggamit ng mata", "oculesics"},
    {"boses, komunikasyong gamit ang tunog maliban pa sa pasalitang tunog", "vocalics"},
    {"mukha, damdaming nakapaloob sa mukha na ginagamit kapag nakikipag komunikasyon", "pictics"},
    {"mga simbolo sa paligid na may malinaw na mensahe", "iconics"},
    {"pang amoy, komunikasyong nakabatay sa pang amoy", "factorics"},
    {"bagay, paggamit ng bagay sa paghahatid ng komunikasyon", "objectics"},
    {"kulay, pagpapahiwatig ng mensahe gamit ang kulay", "colorics"}

}; 

shuffle(quiz.begin(), quiz.end(), g);
    cout << "=== Random Identification Quiz: Komunikasyon ===\n\n"; 

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