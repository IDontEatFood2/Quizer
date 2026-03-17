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
    // LESSON 1

{"Basic concepts contemporary world – Things happening now or recently in global society.", "basic concepts contemporary world"}, 
{"A limited worldview focused only on one’s local community.", "parochialism"}, 
{"The interconnectedness and integration of people, businesses, and cultures worldwide.", "globalization"}, 

{"Barriers that slow down or prevent the movement of people, goods, or ideas.", "solid"}, 
{"The ease of movement and flexibility of people, goods, and information.", "liquid"}, 
{"The movement of people, goods, ideas, and culture across borders.", "flows"}, 

{"The way of life of a society, including beliefs, arts, language, and traditions.", "culture"}, 
{"The process of cultures interacting and influencing each other globally.", "cultural globalization"}, 

{"Increasing similarity between cultures.", "homogeneity"}, 
{"Cultural diversity and the creation of new cultural forms.", "heterogeneity"}, 
{"One culture dominating or influencing another.", "cultural imperialism"}, 
{"Adoption of american products, ideas, and behaviors by other countries.", "americanization"}, 
{"Society adopting characteristics of fast-food chains like efficiency and standardization.", "mcdonaldization"}, 

{"Fast and convenient ways to produce or access goods.", "efficiency"}, 
{"Uniform products and services everywhere.", "predictability / standardization"}, 
{"Emphasis on quantity over quality.", "calculability"}, 
{"Replacing human labor with technology or machines.", "control"}, 

{"Mixing of two or more cultures to create a new one.", "cultural hybridization"}, 
{"The combination of global and local culture.", "glocalization"}, 

{"Cultures remain fundamentally different despite global interaction.", "cultural differentialism"}, 
{"Cultures become more similar through interaction.", "cultural convergence"}, 

{"Culture shared by people worldwide.", "global culture"}, 
{"Unique customs and traditions of a particular society.", "local culture"}, 

{"A system of beliefs, practices, and worship related to a god or gods.", "religion"}, 
{"Using violence to enforce or promote a religious belief.", "religious extremism"}, 
{"Oldest religion in the world mainly practiced in India, 3rd largest globally.", "hinduism"}, 
{"Based on the teachings of siddhartha gautama and practiced in many parts of asia.", "buddhism"}, 
{"Based on the belief in one god and the covenant between god and the jewish people.", "judaism"}, 
{"The world’s largest religion based on the teachings of jesus christ.", "christianity"}, 
{"Second-largest religion based on the teachings of the prophet muhammad.", "islam"}, 

{"Being reborn into a new life after death.", "reincarnation"}, 
{"The sum of a person’s actions affecting future experiences.", "karma"}, 
{"A state of perfect peace and freedom from suffering.", "nirvana"}, 
{"A savior or king promised in religious teachings.", "messiah"}, 
{"The christian belief in one god in three persons: father, son, holy spirit.", "trinity"}, 

{"The holy book of judaism.", "torah"}, 
{"The holy book of christianity.", "bible"}, 
{"The holy book of islam.", "qur’an"}, 
{"Jewish place of worship.", "synagogue"}, 
{"Muslim place of worship.", "mosque"}, 

{"Dividing the world into smaller geographic regions.", "regionalization"}, 
{"Prioritizing the interests of a specific region over a larger area.", "regionalism"}, 
{"A group of countries in the same geographic area.", "region"}, 

{"An unregulated system of trade without high tariffs.", "free market"}, 
{"When one producer controls supply and limits competition.", "monopoly"}, 
{"A tax on imported goods or services.", "tariff"}, 

{"A military alliance formed to protect europe.", "nato"}, 
{"A military alliance formed by the soviet union in response to nato.", "warsaw pact"}, 
{"Association of southeast asian nations promoting economic and political cooperation.", "asean"}, 
{"Organization of petroleum exporting countries controlling oil prices globally.", "opec"}



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
