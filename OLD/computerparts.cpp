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
    {"Occupational Health and Safety (OHS) is primarily a method of?\na. controlling electrical hazards\nb. stating how employees are expected to behave on company property\nc. defining IT security policies\nd. managing data privacy compliance\n", "b"},

{"In a Land Grid Array (LGA), the pins are located on?\na. the processor\nb. the motherboard\nc. both processor and board\nd. the heat sink\n", "b"},

{"In a Pin Grid Array (PGA), the pins are found on?\na. the processor\nb. the motherboard\nc. the RAM slot\nd. the power supply\n", "a"},

{"The memory slot on a motherboard is used to?\na. connect expansion cards\nb. install RAM modules\nc. attach the power cable\nd. control the BIOS settings\n", "b"},

{"The BIOS stores?\na. the operating system\nb. the motherboard’s configuration and settings\nc. all user documents\nd. video drivers only\n", "b"},

{"The CMOS battery maintains?\na. USB power when system is on sleep mode\nb. BIOS data when the system is powered off\nc. CPU voltage regulation\nd. fan speed control\n", "b"},

{"Expansion buses allow users to?\na. connect more memory slots\nb. insert additional expansion cards\nc. increase CPU clock speed\nd. store BIOS data externally\n", "b"},

{"PCI (Peripheral Component Interconnect) slots are designed to?\na. connect RAM modules\nb. allow installation of powered peripheral cards\nc. link hard drives directly\nd. replace the CPU socket\n", "b"},

{"AGP (Accelerated Graphics Port) slots are mainly designed for?\na. network interface cards\nb. connecting hard drives\nc. supporting GPUs\nd. managing BIOS updates\n", "c"},

{"ISA (Industry Standard Architecture) slots are known as?\na. the newest generation of expansion slots\nb. the oldest types of motherboard slots\nc. USB-based expansion interfaces\nd. the standard for modern GPUs\n", "b"},

{"IDE (Integrated Drive Electronics) is a standard interface used for?\na. connecting displays\nb. connecting hard drives and optical drives\nc. adding expansion cards\nd. linking RAM modules\n", "b"},

{"SATA (Serial Advanced Technology Attachment) connects?\na. the CPU to GPU\nb. the power supply to the motherboard\nc. host bus adapters to storage devices\nd. USB ports to audio jacks\n", "c"},

{"The NorthBridge chipset controls?\na. communication between the CPU and RAM\nb. communication between USB and hard drives\nc. sound and network output\nd. BIOS storage\n", "a"},

{"The SouthBridge chipset manages?\na. RAM and CPU interactions\nb. slower peripheral communications like USB and BIOS\nc. GPU performance only\nd. fan and temperature regulation\n", "b"},

{"Which port is typically pink and used for microphones?\na. line-in\nb. microphone\nc. speaker\nd. auxiliary\n", "b"},

{"Which 3.5mm port color is used for speakers or headphones?\na. pink\nb. green\nc. blue\nd. yellow\n", "b"},

{"Older motherboards used which port for monitors?\na. HDMI\nb. VGA\nc. DVI\nd. DisplayPort\n", "b"},

{"The Ethernet port is typically what color?\na. green\nb. colorless\nc. yellow\nd. blue\n", "b"},

{"The purple PS/2 port is used for?\na. mouse\nb. keyboard\nc. printer\nd. monitor\n", "b"},

{"USB 3.0 ports are typically identified by what color?\na. colorless\nb. blue\nc. black\nd. red\n", "b"},

{"The computer case mainly provides?\na. data storage\nb. power conversion\nc. protection and structural support\nd. software control\n", "c"},

{"The power supply converts?\na. DC to AC\nb. AC to DC\nc. DC to DC\nd. AC to AC\n", "b"},

{"The voltage selector switch on a power supply typically toggles between?\na. 100V and 150V\nb. 110V/115V and 220V/230V\nc. 120V and 240V\nd. 90V and 200V\n", "b"},

{"A UPS (Uninterruptible Power Supply) is mainly used to?\na. store additional RAM\nb. protect the computer from power fluctuations\nc. increase CPU performance\nd. cool the motherboard\n", "b"},

{"A Molex connector is used to connect?\na. SSDs only\nb. optical or hard drives\nc. RAM modules\nd. GPUs\n", "b"},

{"A Berg connector is used to power?\na. floppy drives\nb. optical drives\nc. SATA drives\nd. SSDs\n", "a"},

{"A modular power supply allows?\na. overclocking without BIOS access\nb. detachable power cables and connectors\nc. faster boot times\nd. RAM overvoltage control\n", "b"},

{"A fully modular PSU means?\na. no detachable cables\nb. only fan cables detachable\nc. every connector is detachable\nd. no need for external power\n", "c"},

{"A semi-modular PSU means?\na. no detachable cables\nb. some cables are permanent, others detachable\nc. all cables detachable\nd. only SATA cables removable\n", "b"},

{"A Hard Disk Drive (HDD) stores data using?\na. magnetic platters\nb. flash memory chips\nc. laser beams\nd. optical mirrors\n", "a"},

{"A Solid State Drive (SSD) stores data using?\na. rotating platters\nb. flash memory\nc. magnetic tape\nd. optical lasers\n", "b"},

{"A SATA cable offers what type of connection?\na. serial\nb. parallel\nc. optical\nd. wireless\n", "a"},

{"An IDE cable offers what type of connection?\na. serial\nb. parallel\nc. networked\nd. modular\n", "b"},

{"A Video Capture Card is used to?\na. capture and record video input\nb. render 3D graphics\nc. boost network speed\nd. store large files\n", "a"},

{"A LAN Card allows?\na. computer-to-network communication\nb. external hard drive installation\nc. USB expansion\nd. printer setup\n", "a"},

{"A TV tuner card enables?\na. Bluetooth connectivity\nb. television signal reception\nc. faster network speeds\nd. screen capture\n", "b"},

{"An Optical Disc Drive reads data using?\na. magnetic fields\nb. laser light\nc. electrical resistance\nd. radio waves\n", "b"},
{"What is the Land Grid Array (LGA) used for?\na. For AMD processors\nb. For Intel processors\nc. For both Intel and AMD processors\nd. For graphic cards\n", "b"},

{"What is the Pin Grid Array (PGA) used for?\na. For AMD processors\nb. For Intel processors\nc. For both Intel and AMD processors\nd. For expansion slots\n", "a"},


{"A Floppy Disk Drive (FDD) is used to?\na. read and write floppy disks\nb. connect to SSDs\nc. control BIOS settings\nd. power the CPU\n", "a"}


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