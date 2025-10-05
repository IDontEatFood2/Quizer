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

    {"An electronic device that accepts data, processes it, and gives information. What is it called?\na. Hardware\nb. Software\nc. Computer\nd. Peripheral\n", "c"},
    {"Which type of computer measures continuous data?\na. Analog\nb. Digital\nc. Hybrid\nd. Microcomputer\n", "a"},
    {"Which type of computer processes binary data?\na. Analog\nb. Digital\nc. Hybrid\nd. Supercomputer\n", "b"},
    {"Which type of computer is a combination of analog and digital?\na. Digital\nb. Analog\nc. Hybrid\nd. Microcomputer\n", "c"},
    {"Which computer is the fastest and used for weather forecasting?\na. Supercomputer\nb. Mainframe\nc. Mini/Server\nd. Microcomputer\n", "a"},
    {"Which computer supports many users at once and is used in large-scale business processing?\na. Supercomputer\nb. Mainframe\nc. Mini/Server\nd. Microcomputer\n", "b"},
    {"Which device combines many functions into one (example: camera, music, internet)?\na. Technological Convergence\nb. Supercomputer\nc. Microcomputer\nd. Peripheral\n", "a"},
    {"Which career focuses on building computer parts?\na. CS\nb. CE\nc. IT\nd. SE\n", "b"},
    {"Which career focuses on programming?\na. CS\nb. CE\nc. IS\nd. IT\n", "a"},
    {"Which career manages computer systems?\na. CE\nb. CS\nc. IT\nd. SE\n", "c"},
    {"Which career applies computers in business?\na. CS\nb. IS\nc. IT\nd. SE\n", "b"},
    {"Which career develops software?\na. CE\nb. SE\nc. IT\nd. CS\n", "b"},
    {"What is raw facts called in IT?\na. Information\nb. Data\nc. Input\nd. Backup\n", "b"},
    {"What is processed, meaningful data called?\na. Data\nb. Information\nc. Storage\nd. Input\n", "b"},
    {"Which is the brain of the computer?\na. CPU\nb. RAM\nc. ROM\nd. Hard Drive\n", "a"},
    {"Which is temporary memory?\na. ROM\nb. CPU\nc. RAM\nd. SSD\n", "c"},
    {"Which is permanent memory?\na. RAM\nb. ROM\nc. CPU\nd. Keyboard\n", "b"},
    {"Which of the following is an input device?\na. Monitor\nb. Mouse\nc. Printer\nd. Speaker\n", "b"},
    {"Which of the following is an output device?\na. Keyboard\nb. Mouse\nc. Monitor\nd. Webcam\n", "c"},
    {"Which device is considered a peripheral?\na. CPU\nb. RAM\nc. Webcam\nd. Motherboard\n", "c"},
    {"What is the physical parts of a computer called?\na. Software\nb. Hardware\nc. Peripheral\nd. Network\n", "b"},
    {"Which is productivity software?\na. Excel\nb. Photoshop\nc. Games\nd. Calendars\n", "a"},
    {"Which is creative software?\na. Excel\nb. Animation software\nc. Contact lists\nd. Word\n", "b"},
    {"Which is organization software?\na. Calendar\nb. Photo editor\nc. Game\nd. PowerPoint\n", "a"},
    {"Which is fun/personal software?\na. Game\nb. Word\nc. Excel\nd. Calendar\n", "a"},
    {"Which is specialized software?\na. Photoshop\nb. Hotel management software\nc. Calendar\nd. Game\n", "b"},
    {"Which part of the information processing cycle receives data?\na. Input\nb. Process\nc. Storage\nd. Output\n", "a"},
    {"Which part of the information processing cycle processes data?\na. Input\nb. CPU\nc. Storage\nd. Backup\n", "b"},
    {"Which part of the information processing cycle shows results?\na. Input\nb. Process\nc. Output\nd. Storage\n", "c"},
    {"Which part of the information processing cycle keeps copies for safety?\na. Backup\nb. Output\nc. Input\nd. Process\n", "a"},
    {"Which is a global network connecting computers worldwide?\na. Internet\nb. World Wide Web\nc. Cloud\nd. ISP\n", "a"},
    {"WWW stands for?\na. World Wide Web\nb. Wireless Web\nc. Web Wide World\nd. Wide Web\n", "a"},
    {"Which connects your device to the web?\na. ISP\nb. Server\nc. Client\nd. Browser\n", "a"},
    {"Which provides data to a client?\na. Client\nb. Server\nc. ISP\nd. URL\n", "b"},
    {"Which is an example of a browser?\na. Chrome\nb. Zoom\nc. Google Drive\nd. Skype\n", "a"},
    {"Which is voice over internet?\na. Email\nb. FTP\nc. VoIP\nd. Cloud storage\n", "c"},
    {"Which stores files online?\na. Printer\nb. Cloud Storage\nc. Monitor\nd. CPU\n", "b"},
    {"Website address is called?\na. URL\nb. ISP\nc. Server\nd. Browser\n", "a"},
    {"Which protects your data online?\na. Malware\nb. Cybersecurity\nc. Phishing\nd. Netiquette\n", "b"},
    {"Fake links that steal information?\na. Malware\nb. Phishing\nc. Strong passwords\nd. Backup\n", "b"},
    {"Which is proper online behavior?\na. Netiquette\nb. Virus\nc. Malware\nd. Hack\n", "a"},
    {"What type of software tells the computer what to do and manages hardware?\na. Application Software\nb. System Software\nc. Utility Program\nd. Operating System\n", "b"},
{"Which type of software performs specific user tasks?\na. System Software\nb. Application Software\nc. Driver\nd. Utility Program\n", "b"},
{"Which is the main system software that manages memory, devices, and files?\na. Driver\nb. OS\nc. Utility Program\nd. Application Software\n", "b"},
{"Booting a computer refers to?\na. Installing software\nb. Starting the computer and loading OS\nc. Shutting down\nd. Running a program\n", "b"},
{"Which stores data temporarily before transfer in the OS?\na. Buffer\nb. Driver\nc. File Manager\nd. Printer\n", "a"},
{"Which holds print jobs until the printer is ready?\na. Multitasking\nb. Buffer\nc. Print Spooling\nd. Driver\n", "c"},
{"Which allows running multiple programs at the same time?\na. Buffer\nb. Multitasking\nc. Print Spooling\nd. File Manager\n", "b"},
{"Which allows the OS to communicate with hardware devices?\na. File Manager\nb. Driver\nc. Performance Monitor\nd. Utility Program\n", "b"},
{"Which keeps track of file locations and allows quick retrieval?\na. Driver\nb. Buffer\nc. File Manager\nd. Performance Monitor\n", "c"},
{"Which checks CPU, memory, and disk performance?\na. Driver\nb. Performance Monitor\nc. Buffer\nd. File Manager\n", "b"},
{"Which interface requires typing commands?\na. GUI\nb. CLI\nc. Menu\nd. Desktop\n", "b"},
{"Which interface uses icons, menus, and windows?\na. CLI\nb. GUI\nc. Driver\nd. File Manager\n", "b"},
{"Which of these is a GUI element displaying program or data?\na. Desktop\nb. Display Window\nc. Menu\nd. Icon\n", "b"},
{"Which OS is popular and comes in versions like 2000, XP, and Vista?\na. Mac OS\nb. Windows\nc. Linux\nd. IBM OS/2\n", "b"},
{"Which OS is user-friendly with strong graphics?\na. Linux\nb. Windows\nc. Mac OS\nd. IBM OS/2\n", "c"},
{"Which OS is open-source, free, and secure?\na. Mac OS\nb. Windows\nc. Linux\nd. IBM OS/2\n", "c"},
{"Which server OS is used for file sharing and local area networks?\na. UNIX\nb. Novell NetWare\nc. Linux\n", "b"},
{"Which OS can run on multiple platforms, from PCs to supercomputers?\na. UNIX\nb. Windows Server\nc. Palm OS\n", "a"},
{"Which OS is used in handheld devices like PDAs and early smartphones?\na. Linux\nb. Palm OS\nc. Windows Server\n", "b"},
{"Which OS is used in embedded devices and smartphones?\na. Palm OS\nb. Windows Mobile\nc. UNIX\n", "b"},
{"Which program blocks unauthorized access to your computer or network?\na. Utility Program\nb. Firewall\nc. Driver\nd. Application Software\n", "b"},
{"Which program converts programming code into machine language?\na. Utility Program\nb. Translator\nc. Driver\nd. File Manager\n", "b"}



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

