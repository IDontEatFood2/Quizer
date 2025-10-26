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

{"The process of sharing data, programs, and information between two or more computers.","communication"},
{"carry data from one computer to another","channels"},
{"means linking people and resources through computer networks","conectivity"},
{"used in ethernet cables","twisted pair"},
{"solid copper core more than 80 times twisted pair","coaxial cable"},
{"light carries data","optic cable"},
{"straight line","infrared"},
{"high frequency radio waves","microwave"},
{"microwave relay station in the sky","satellite"},
{"two types of signals","analog, digital"},
{"converts analog and digital signals","modems"},
{"Kbps, means","thousand bits per second"},
{"Mbps means","million bits per second"},
{"Gbps","billion bits per second"},
{"Measurement of the capacity of the channel","bandwith"},
{"set of communication rules","protocols"},
{"is a communication system","computer network"},
{"connects two or more computers","networks"},
{"describes how a network is arranged","topology"},
{"what is arrangement called","topology"},
{"small computers linked to a central unit","star network"},
{"central unit is called the?","network hub"},
{"control is maintaned by","pooling"},
{"each device handles its own communication","bus network"},
{"bus network has a common connecting cable called?","backbone"},
{"each device is connected to two other devices","ring network"},
{"several computers linked to a central host","tree network"},
{"private network within a org","intranets"},
{"private network that connects orgs","extranets"},
{"securuty system, protects against external threats","firewall"},
{"manages a companies LAN and WAN networks","network administraitor"},
{"LAN stands for?","local area network"},
{"what does modem stand for?","modulator and demodulator"},
{"WAN stands for?","wide area network"}


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