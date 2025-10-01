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

// LESSON 1 – What is Art & Humanities
{"art brings life to ordinary things", "beauty"},
{"art reflects hopes and emotions; nakakapagpasaya at nagbibigay ng pag-asa", "happiness and hope"},
{"art helps us understand ourselves and express feelings", "identity and self"},
{"art expresses pain and suffering; nakakatulong sa paghilom ng damdamin", "grief and healing"},
{"art reminds us of history and values", "remembering and mark-making"},
{"art raises social or political awareness", "awareness"},
{"art shows regional identity and unites people", "culture and togetherness"},

// LESSON 2.1 & 2.2 – Elements of Art
{"nagbibigay ng mood o damdamin (warm = masaya, cool = malungkot)", "colors"},
{"maaaring tuwid, kurba, pahilis; nagbibigay direksyon at hugis", "lines"},
{"flat (2D) o may volume (3D)", "shape and structure"},
{"pag-uulit ng linya, hugis, o kulay para magmukhang may galaw", "rhythm"},
{"paraan ng artist sa pagpapakita ng ideya", "style"},
{"gamit ng artist (pintura, lapis, kahoy, digital, atbp.)", "medium"},

// LESSON 3 – Different Styles or Forms of Art (Part I)
{"greek/roman art; perpekto ang katawan, columns sa arkitektura", "classicism"},
{"relihiyoso, flat, mosaic, stained glass", "medieval"},
{"perspective, chiaroscuro, sfumato", "renaissance"},
{"stylized, elongated figures", "mannerism"},
{"madamdamin, dramatic, malalim ang shadow", "baroque"},
{"pagbabalik sa classical style", "neoclassicism"},
{"ordinary life, bright colors, blur outlines", "impressionism"},
{"emosyon, malalakas na kulay", "expressionism"},
{"sobrang bright colors, exciting effect", "fauvism"},
{"gawa sa dots", "pointillism"},
{"posters, women figures, decorative", "art nouveau"},
{"parang panaginip, imagination", "surrealism"},

// LESSON 4 – Who is an Artist (Part II)
{"geometric, maraming angles", "cubism"},
{"simpleng hugis at kulay (rectangles, primary colors)", "concretism"},
{"basic shapes, pure abstraction", "suprematism"},
{"anti-art, shock effect", "dadaism"},
{"ordinary objects turned to art", "ready-made"},
{"freedom, action painting", "abstract expressionism"},
{"large flat colors", "color field"},
{"from pop culture", "pop art"},
{"optical illusion", "op art"},
{"exhibition space becomes art", "installation"},
{"kalikasan ang medium", "environmental art"},

// LESSON 5 – Philippine Art
{"filipino identity makukulay, diverse, nagkakaisa", "filipino art"},
{"backlighting, glow (palay maiden)", "fernando amorsolo"},
{"spoliarium, blood compact, romanticism/realism", "juan luna"},
{"sabel, expressionism, social issues", "bencab"},
{"women in daily life, cubism (fish harvest)", "anita magsaysay-ho"},
{"cubist-expressionist, emotional (dogs, crucifixion)", "ang kiukok"},
{"murals, history and folk culture", "carlos 'botong' francisco"},
{"abstract expressionism, bold tropical colors (space transfiguration)", "jose joya"},
{"transparent cubism (fish vendors)", "vicente manansala"},
{"abstract, biomorphic (petals in the sun)", "hernando ocampo"},
{"father of modern sculpture", "napoleon abueva"}

}; 
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