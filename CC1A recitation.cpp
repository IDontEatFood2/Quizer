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

{"The process of sharing data, programs, and information between two or more computers? a. Communication b. Connectivity c. Networking d. Transmission", "a"},
{"Carry data from one computer to another. a. Links b. Channels c. Protocols d. Waves", "b"},
{"Means linking people and resources through computer networks. a. Modulation b. Connectivity c. Transmission d. Synchronization", "b"},
{"Used in Ethernet cables. a. Fiber optics b. Coaxial cable c. Twisted pair d. Infrared cable", "c"},
{"Solid copper core, more than 80 times twisted pair. a. Coaxial cable b. Fiber optic c. Twisted pair d. Infrared cable", "a"},
{"Light carries data. a. Twisted pair b. Fiber optic cable c. Coaxial cable d. Satellite signal", "b"},
{"Straight line transmission. a. Infrared b. Microwave c. Satellite d. Bluetooth", "a"},
{"High-frequency radio waves. a. Infrared b. Microwave c. Coaxial d. Twisted pair", "b"},
{"Microwave relay station in the sky. a. Router b. Satellite c. Access point d. Modem", "b"},
{"Two types of signals. a. Binary and decimal b. Analog and digital c. Radio and optical d. Wired and wireless", "b"},
{"Converts analog and digital signals. a. Router b. Firewall c. Modem d. Switch", "c"},
{"Kbps means? a. Thousand bits per second b. Million bits per second c. Billion bits per second d. Kilobytes per second", "a"},
{"Mbps means? a. Thousand bits per second b. Million bits per second c. Billion bits per second d. Megabytes per second", "b"},
{"Gbps means? a. Thousand bits per second b. Million bits per second c. Billion bits per second d. Gigabytes per second", "c"},
{"Measurement of the capacity of the channel. a. Latency b. Throughput c. Bandwidth d. Frequency", "c"},
{"Set of communication rules. a. Networks b. Protocols c. Channels d. Commands", "b"},
{"Is a communication system. a. Computer program b. Computer network c. Internet protocol d. Router setup", "b"},
{"Connects two or more computers. a. Firewall b. Network c. Protocol d. Bandwidth", "b"},
{"Describes how a network is arranged. a. Design b. Direction c. Topology d. Mapping", "c"},
{"What is arrangement called? a. Architecture b. Topology c. Blueprint d. Routing", "b"},
{"Small computers linked to a central unit. a. Bus network b. Star network c. Ring network d. Tree network", "b"},
{"The central unit is called the? a. Network hub b. Router c. Switch d. Node", "a"},
{"Control is maintained by? a. Switching b. Routing c. Pooling d. Signaling", "c"},
{"Each device handles its own communication. a. Bus network b. Star network c. Mesh network d. Tree network", "a"},
{"Bus network has a common connecting cable called? a. Line b. Backbone c. Trunk d. Wire", "b"},
{"Each device is connected to two other devices. a. Star network b. Ring network c. Tree network d. Bus network", "b"},
{"Several computers linked to a central host. a. Star network b. Tree network c. Bus network d. Ring network", "b"},
{"Private network within an organization. a. Internet b. Intranet c. Extranet d. VPN", "b"},
{"Private network that connects organizations. a. LAN b. Extranet c. Intranet d. WLAN", "b"},
{"Security system that protects against external threats. a. Router b. Switch c. Firewall d. Modem", "c"},
{"Manages a company’s LAN and WAN networks. a. IT Technician b. Programmer c. Network administrator d. Web developer", "c"},
{"LAN stands for? a. Local Access Node b. Local Area Network c. Limited Area Net d. Linked Access Network", "b"},
{"What does modem stand for? a. Module encoder b. Modulation device c. Modulator and demodulator d. Modular demotion", "c"},
{"WAN stands for? a. Wired Access Network b. Wide Area Node c. Wide Area Network d. Wireless Area Network", "c"},


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
