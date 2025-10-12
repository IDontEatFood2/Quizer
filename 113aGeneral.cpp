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

// 3.1 A WORLD OF DIGITAL DEVICES


    //chapter 1

    {"what is a computer?\na. an electronic programmable device\nb. a mechanical typewriter\nc. a storage cabinet\nd. a manual calculator\n", "a"},

{"which term describes a device that can be programmed to process data?\na. analog\nb. computer\nc. storage\nd. memory\n", "b"},

{"what are the main categories of computers?\na. digital and wireless\nb. laptop and desktop\nc. analog, digital, and communicating computers\nd. super and mini\n", "c"},

{"which type of computer uses continuous signals?\na. digital computer\nb. analog computer\nc. laptop\nd. smartphone\n", "b"},

{"which type of computer uses binary (0s and 1s)?\na. analog computer\nb. digital computer\nc. tablet\nd. server\n", "b"},
{"which computers are typically windows or linux based?\na. smartphones\nb. personal computers\nc. tablets\nd. game consoles\n", "b"},

{"macintosh computers are manufactured by?\na. dell\nb. hp\nc. apple\nd. lenovo\n", "c"},
{"which category includes supercomputers, mainframes, and servers?\na. large computers\nb. mid-sized computers\nc. mobile devices\nd. embedded systems\n", "a"},

{"which category includes desktop, workstation, and laptop?\na. large\nb. mid-sized\nc. mobile\nd. analog\n", "b"},

{"which category includes smartphones, digital audio players, and pda?\na. large\nb. mid-sized\nc. mobile devices\nd. mechanical\n", "c"},
{"which is the most powerful type of computer?\na. desktop\nb. laptop\nc. supercomputer\nd. tablet\n", "c"},

{"which computer is designed to be stationary on a desk?\na. desktop\nb. smartphone\nc. tablet\nd. server\n", "a"},

{"which portable computer folds open and closed?\na. tablet\nb. laptop\nc. desktop\nd. server\n", "b"},

{"which computer has a touchscreen and is flat like a pad?\na. laptop\nb. tablet pc\nc. netbook\nd. mainframe\n", "b"},

{"which is a small, lightweight, inexpensive laptop?\na. supercomputer\nb. mainframe\nc. netbook\nd. workstation\n", "c"},
{"what is technological convergence?\na. combining multiple technologies into one device\nb. deleting files from a device\nc. slowing down technology\nd. separating devices by function\n", "a"},

{"which term refers to a device that combines functions (e.g., phone, camera, music)?\na. server device\nb. convergence device\nc. storage device\nd. analog device\n", "b"},

{"online services play a role in convergence by?\na. replacing electricity\nb. allowing access to apps and data online\nc. breaking devices\nd. removing memory\n", "b"},

{"which computing field focuses on designing computer hardware?\na. computer science\nb. computer engineering\nc. it\nd. software engineering\n", "b"},

{"which field focuses on programming and algorithms?\na. computer science\nb. graphic design\nc. accounting\nd. marketing\n", "a"},

{"which field focuses on managing business data and systems?\na. information systems\nb. biology\nc. history\nd. economics\n", "a"},

{"which field deals with using computers to manage information and networks?\na. information technology\nb. culinary arts\nc. political science\nd. agriculture\n", "a"},

{"which career designs and builds software applications?\na. mechanic\nb. software engineering\nc. nursing\nd. architecture\n", "b"},
{"what component processes instructions?\na. monitor\nb. cpu\nc. keyboard\nd. printer\n", "b"},

{"a cpu is also called?\na. central processing unit\nb. computer processing utility\nc. core program unit\nd. central program user\n", "a"},

{"what is a microprocessor?\na. small storage chip\nb. cpu on a single chip\nc. input device\nd. battery\n", "b"},

{"processor speed is measured in?\na. volts\nb. hertz\nc. inches\nd. pixels\n", "b"},

{"what temporarily stores data while the cpu works?\na. hard drive\nb. ram\nc. flash drive\nd. dvd\n", "b"},

{"what stores frequently used data for faster access?\na. cache memory\nb. cd-rom\nc. keyboard\nd. monitor\n", "a"},
{"what is permanent data storage?\na. ram\nb. storage\nc. cache\nd. cpu\n", "b"},

{"storage capacity is measured in?\na. seconds\nb. gigabytes\nc. meters\nd. pixels\n", "b"},

{"which is a storage device?\na. hard disk\nb. dvd\nc. usb flash\nd. all of the above\n", "d"},
{"why should you back up data?\na. to lose files quicker\nb. to protect against data loss\nc. to slow the computer down\nd. it's not important\n", "b"},

{"some jobs require?\na. deleting files\nb. keeping backups\nc. never using storage\nd. ignoring data\n", "b"},






 // chapter 2   

{"what is the internet?\na. a single computer\nb. a global network of connected computers\nc. a type of software\nd. a social media platform\n", "b"},
{"the internet allows users to?\na. send and receive data\nb. browse the web\nc. communicate with others\nd. all of the above\n", "d"},
{"the largest network in the world is called?\na. local area network (lan)\nb. wide area network (wan)\nc. the internet\nd. intranet\n", "c"},
{"what is the world wide web (www)?\na. the same as the internet\nb. a collection of web pages and websites\nc. a programming language\nd. a type of antivirus software\n", "b"},
{"what is needed to access the internet?\na. monitor\nb. operating system\nc. internet service provider (isp)\nd. printer\n", "c"},
{"which term refers to connecting a computer to the internet?\na. hyperlink\nb. login\nc. going online\nd. uploading\n", "c"},
{"what is a web page?\na. a printed document\nb. a document on the internet\nc. a hardware device\nd. a type of email\n", "b"},
{"what is a website?\na. a collection of related web pages\nb. a single image\nc. a browser\nd. a type of virus\n", "a"},
{"what software is used to view web pages?\na. spreadsheet\nb. browser\nc. database\nd. compiler\n", "b"},
{"what do you type into a browser to go to a website?\na. ip address\nb. url\nc. file name\nd. folder path\n", "b"},


{"which early network is considered the foundation of the internet?\na. napster\nb. friendster\nc. arpanet\nd. ethernet\n", "c"},
{"arpanet was originally created by?\na. nasa\nb. department of defense\nc. microsoft\nd. harvard university\n", "b"},
{"what was the main purpose of arpanet?\na. online shopping\nb. military communication\nc. gaming\nd. social networking\n", "b"},
{"in what decade did arpanet start?\na. 1950s\nb. 1960s\nc. 1970s\nd. 1980s\n", "b"},
{"who are credited with developing tcp/ip?\na. bill gates and steve jobs\nb. vinton cerf and robert kahn\nc. larry page and sergey brin\nd. mark zuckerberg and elon musk\n", "b"},
{"what does tcp/ip allow?\na. typing faster\nb. different networks to communicate\nc. storing files\nd. printing documents\n", "b"},
{"when did the internet become available to the public?\na. 1970s\nb. late 1980s to early 1990s\nc. 2000s\nd. 2010s\n", "b"},
{"who invented the world wide web in 1989?\na. bill gates\nb. tim berners-lee\nc. steve jobs\nd. mark zuckerberg\n", "b"},
{"what was the first web browser called?\na. google chrome\nb. mosaic\nc. netscape\nd. firefox\n", "b"},
{"which decade saw a massive growth in internet usage?\na. 1960s\nb. 1970s\nc. 1990s\nd. 1950s\n", "c"},


{"what is a network?\na. collection of web pages\nb. two or more computers connected to share data\nc. a mobile app\nd. a database\n", "b"},
{"what device connects multiple computers in a network?\na. scanner\nb. router\nc. printer\nd. monitor\n", "b"},
{"what device connects a local network to the internet?\na. modem\nb. flash drive\nc. cpu\nd. keyboard\n", "a"},
{"what does isp stand for?\na. internet secure program\nb. internal service provider\nc. internet service provider\nd. instant server protocol\n", "c"},
{"what identifies a device on a network?\na. url\nb. ip address\nc. file extension\nd. ram size\n", "b"},
{"what is a domain name?\na. the hardware of the computer\nb. a user’s password\nc. a human-readable web address (like google.com)\nd. a type of virus\n", "c"},
{"what translates domain names into ip addresses?\na. cpu\nb. dns server\nc. firewall\nd. browser\n", "b"},
{"what does http stand for?\na. hyper terminal transfer program\nb. hypertext transfer protocol\nc. hyper tool text process\nd. hosted transfer platform\n", "b"},
{"what does https provide that http does not?\na. faster speed\nb. security and encryption\nc. better images\nd. offline access\n", "b"},
{"what is bandwidth?\na. screen resolution\nb. amount of data that can be transferred\nc. number of users online\nd. size of a webpage\n", "b"},


{"what type of connection uses telephone lines and is very slow?\na. fiber\nb. dsl\nc. dial-up\nd. satellite\n", "c"},
{"which connection uses phone lines but is faster than dial-up?\na. dsl\nb. fiber\nc. satellite\nd. wifi\n", "a"},
{"which connection uses cable tv lines for internet?\na. dial-up\nb. cable\nc. fiber\nd. hotspot\n", "b"},
{"which internet connection uses light through glass fibers?\na. cable\nb. fiber optic\nc. satellite\nd. dial-up\n", "b"},
{"which internet connection uses communication satellites?\na. fiber\nb. cable\nc. satellite\nd. ethernet\n", "c"},
{"which technology provides wireless internet in homes and public areas?\na. bluetooth\nb. wifi\nc. usb\nd. vpn\n", "b"},
{"what allows smartphones to share their internet connection?\na. hotspot\nb. router\nc. firewall\nd. modem\n", "a"},
{"what does lan stand for?\na. large area network\nb. local area network\nc. low access network\nd. linked application network\n", "b"},
{"what does wan stand for?\na. wide area network\nb. web access node\nc. wireless area network\nd. world application network\n", "a"},
{"what is a vpn used for?\na. downloading files faster\nb. providing secure and private connection\nc. deleting viruses\nd. increasing ram\n", "b"},

{"what is any electronic device that uses data in digital form?\na. analog device\nb. digital device\nc. mechanical device\nd. storage device\n", "b"},

{"what is a device connected to a computer that adds functionality?\na. processor\nb. motherboard\nc. peripheral device\nd. router\n", "c"},

{"do all digital devices have memory, operating system, power source, and storage?\na. no\nb. only computers\nc. yes\nd. only phones\n", "c"},

{"what type of memory do digital devices use to store data?\na. analog memory\nb. digital memory\nc. cloud memory\nd. cache memory\n", "b"},

{"what powers all digital devices?\na. battery or electricity\nb. monitor\nc. keyboard\nd. mouse\n", "a"},

{"what manages functions on digital devices?\na. bios\nb. hard drive\nc. operating system\nd. firewall\n", "c"},

{"what keeps data long-term on digital devices?\na. ram\nb. storage\nc. cache\nd. cpu\n", "b"},

{"what is another term for external device?\na. rom\nb. peripheral device\nc. operating system\nd. motherboard\n", "b"},

{"what is the primary circuit board in a computer?\na. cpu\nb. power supply\nc. motherboard\nd. hard disk\n", "c"},

{"what component processes instructions?\na. monitor\nb. cpu\nc. ram\nd. mouse\n", "b"},

{"what does cpu stand for?\na. central process unit\nb. central processing unit\nc. computer processing utility\nd. core program unit\n", "b"},

{"what stores permanent system instructions like bios?\na. ram\nb. hard drive\nc. rom\nd. cache\n", "c"},

{"what stores temporary data for active programs?\na. rom\nb. ram\nc. hard disk\nd. usb drive\n", "b"},

{"what does ram stand for?\na. random access memory\nb. read and manage\nc. remote access module\nd. run all media\n", "a"},

{"what contains startup instructions for the computer?\na. cpu\nb. bios\nc. ram\nd. cache\n", "b"},

{"what holds sound, graphics, and expansion cards?\na. cpu\nb. storage device\nc. motherboard slots\nd. usb ports\n", "c"},

{"what converts ac power to dc power in a computer?\na. hard disk\nb. power supply\nc. ram\nd. monitor\n", "b"},

{"what are examples of power sources?\na. usb, hdmi, vga\nb. power cords, batteries, solar cells\nc. keyboard, mouse, monitor\nd. rom, ram, cpu\n", "b"},

{"what must computing devices have to run?\na. antivirus\nb. power supply\nc. printer\nd. speakers\n", "b"},

{"what does ac to dc conversion allow?\na. faster internet\nb. safe power for components\nc. larger storage\nd. brighter display\n", "b"},

{"what is used to reduce electricity consumption?\na. cache memory\nb. overclocking\nc. power management\nd. antivirus\n", "c"},

{"what are connection points to plug in devices?\na. ram slots\nb. ports\nc. drivers\nd. directories\n", "b"},

{"what type of port is used for keyboards and mice?\na. ethernet\nb. hdmi\nc. usb port\nd. audio port\n", "c"},

{"what port connects monitors?\na. display or hdmi port\nb. usb port\nc. ps/2 port\nd. power port\n", "a"},

{"what port is used for internet connection?\na. ethernet port\nb. usb port\nc. audio port\nd. hdmi port\n", "a"},

{"what port is used for audio devices?\na. ethernet port\nb. audio port\nc. display port\nd. serial port\n", "b"},

{"what reads data from and writes data to storage media?\na. cpu\nb. storage device\nc. ram\nd. monitor\n", "b"},

{"what do storage devices use to access media?\na. ports\nb. drivers\nc. drives\nd. servers\n", "c"},

{"what is the main internal permanent storage device?\na. ram\nb. flash drive\nc. optical drive\nd. hard disk\n", "d"},

{"what drive reads cds and dvds?\na. flash drive\nb. optical drive\nc. hard drive\nd. ssd\n", "b"},

{"what portable device stores data externally?\na. motherboard\nb. external hard drive\nc. cpu\nd. gpu\n", "b"},

{"what small solid-state device stores data?\na. flash drive\nb. hard disk\nc. optical disk\nd. printer\n", "a"},

{"what stores data even when the computer is off?\na. ram\nb. cache\nc. storage media\nd. cpu\n", "c"},

{"what device enters text into the computer?\na. mouse\nb. scanner\nc. keyboard\nd. monitor\n", "c"},

{"what device moves a pointer on screen?\na. mouse\nb. printer\nc. webcam\nd. microphone\n", "a"},

{"what device converts physical documents to digital form?\na. webcam\nb. scanner\nc. printer\nd. monitor\n", "b"},

{"what device captures video?\na. speakers\nb. webcam\nc. projector\nd. cpu\n", "b"},

{"what devices are used for gaming?\na. keyboard and mouse\nb. web browser\nc. gaming devices\nd. firewall\n", "c"},

{"what pen-like device writes on a screen?\na. stylus / electronic pen\nb. mouse\nc. scanner\nd. usb\n", "a"},

{"what device reads rfid tags?\na. barcode scanner\nb. rfid reader\nc. webcam\nd. printer\n", "b"},

{"what input device responds to touch?\na. keyboard\nb. touchscreen\nc. joystick\nd. mouse\n", "b"},

{"what input device captures sound?\na. speakers\nb. microphone\nc. projector\nd. printer\n", "b"},

{"what software secretly records typed keystrokes?\na. antivirus\nb. firewall\nc. keystroke logging software\nd. task manager\n", "c"},

{"how to protect against keyloggers?\na. uninstall programs\nb. use antivirus and spyware software\nc. disable keyboard\nd. restart computer\n", "b"},

{"what device displays visual output?\na. scanner\nb. monitor\nc. keyboard\nd. mouse\n", "b"},

{"what device produces sound output?\na. printer\nb. speakers\nc. webcam\nd. router\n", "b"},

{"what device prints text and images?\na. monitor\nb. printer\nc. speakers\nd. scanner\n", "b"},

{"what device projects images on a screen?\na. webcam\nb. projector\nc. printer\nd. keyboard\n", "b"},

{"what influences how fast programs run?\na. processor speed\nb. monitor size\nc. mouse sensitivity\nd. screen brightness\n", "a"},

{"how is processor speed measured?\na. volts\nb. gigahertz (ghz)\nc. pixels\nd. megabytes\n", "b"},

{"what type of processor has multiple cores?\na. dual-core\nb. single core\nc. multicore\nd. overclocked\n", "c"},

{"what does a multicore processor allow?\na. slower performance\nb. simultaneous task processing\nc. less power usage\nd. no multitasking\n", "b"},

{"what controls and coordinates the activities of computer hardware and software?\na. application software\nb. system software\nc. drivers\nd. firmware\n", "b"},

{"what tells the computer what to do and how to do it?\na. hardware\nb. system software\nc. internet\nd. cpu\n", "b"},

{"what acts as the middleman between user, application software, and hardware?\na. operating system\nb. processor\nc. antivirus\nd. network\n", "a"},

{"what type of software manages the computer’s resources?\na. application software\nb. system software\nc. games\nd. drivers\n", "b"},

{"what prepares the computer to run other programs?\na. word processor\nb. system software\nc. database\nd. browser\n", "b"},

{"what makes the computer usable by managing operations automatically?\na. utility tools\nb. system software\nc. storage\nd. input devices\n", "b"},

{"what are the two main types of system software?\na. os and applications\nb. os and utility programs\nc. hardware and software\nd. ram and rom\n", "b"},

{"which type of software includes the operating system?\na. application software\nb. system software\nc. network software\nd. development tools\n", "b"},

{"which type of software includes antivirus, backup tools, and file management?\na. application software\nb. operating system\nc. utility programs\nd. drivers\n", "c"},

{"what manages memory, files, and connected devices?\na. antivirus\nb. operating system\nc. compiler\nd. browser\n", "b"},

{"what assists the operating system with maintenance tasks?\na. utility programs\nb. drivers\nc. hardware\nd. firmware\n", "a"},

{"what is the main purpose of system software?\na. entertainment\nb. to manage and control computer operations\nc. browsing the internet\nd. designing graphics\n", "b"},

{"what prepares the computer to run application software?\na. keyboard\nb. system software\nc. printer\nd. cpu\n", "b"},

{"what is the most important type of system software?\na. compiler\nb. antivirus\nc. operating system\nd. browser\n", "c"},

{"what manages all of a computer’s resources?\na. os\nb. storage device\nc. printer\nd. keyboard\n", "a"},

{"what loads when a computer is turned on?\na. word processor\nb. operating system\nc. antivirus\nd. browser\n", "b"},

{"what provides the user interface for interaction?\na. cpu\nb. operating system\nc. router\nd. ram\n", "b"},

{"what manages memory, processor, files, and devices?\na. os\nb. cache memory\nc. keyboard\nd. utility software\n", "a"},

{"what is the process of loading the operating system into memory?\na. installation\nb. booting\nc. compiling\nd. formatting\n", "b"},

{"what type of boot happens when the computer is turned on?\na. warm boot\nb. cold boot\nc. restart\nd. reset\n", "b"},

{"what type of boot happens when the computer is restarted?\na. cold boot\nb. warm boot\nc. power off\nd. shutdown\n", "b"},

{"what checks hardware during startup?\na. os\nb. bios\nc. boot process\nd. ram\n", "c"},

{"what program is used by the operating system to start the computer?\na. compiler\nb. bios\nc. editor\nd. antivirus\n", "b"},

{"what stores the basic input/output system?\na. ram\nb. rom\nc. hard drive\nd. cpu\n", "b"},

{"what loads the operating system into ram?\na. cache\nb. bootstrap loader\nc. hard drive\nd. driver\n", "b"},

{"what is the temporary storage used by the operating system?\na. rom\nb. usb\nc. ram\nd. dvd\n", "c"},

{"what keeps track of where programs and data are stored?\na. processor management\nb. file management\nc. device management\nd. cache\n", "b"},

{"what controls the flow of data through the cpu?\na. ram\nb. processor management\nc. bios\nd. antivirus\n", "b"},

{"what allows multiple programs to run at the same time?\na. multitasking\nb. defragmenting\nc. downloading\nd. compiling\n", "a"},

{"what manages tasks and allocates resources?\na. firewall\nb. task management\nc. keyboard driver\nd. sound card\n", "b"},

{"what controls communication between computer and peripheral devices?\na. task manager\nb. device management\nc. bios\nd. ram\n", "b"},

{"what software makes it possible to use hardware devices?\na. operating system\nb. device drivers\nc. antivirus\nd. compiler\n", "b"},

{"what is a device driver?\na. hardware component\nb. power supply\nc. a program that tells the os how to communicate with hardware\nd. internet tool\n", "c"},

{"what ensures that programs do not interfere with each other?\na. disk cleanup\nb. memory management\nc. firewall\nd. bios\n", "b"},

{"what monitors system performance?\na. keyboard\nb. operating system\nc. printer\nd. cpu\n", "b"},

{"what provides error messages and alerts to the user?\na. operating system\nb. gpu\nc. router\nd. monitor\n", "a"},

{"what allows the user to install and uninstall programs?\na. compiler\nb. operating system\nc. browser\nd. firewall\n", "b"},

{"what function ensures data is saved and organized properly?\na. file management\nb. multitasking\nc. device input\nd. bios setup\n", "a"},

{"what protects the computer from unauthorized access?\na. device driver\nb. security management\nc. ram\nd. printer\n", "b"},

{"what part of the os verifies usernames and passwords?\na. login screen\nb. security system\nc. task manager\nd. startup utility\n", "b"},

{"what interface allows users to use icons and windows?\na. command-line interface\nb. gui\nc. bios\nd. compiler\n", "b"},

{"what interface requires text commands?\na. graphical interface\nb. gui\nc. command-line interface\nd. multitasking interface\n", "c"},

{"what is the part of the operating system that users interact with?\na. kernel\nb. user interface\nc. boot loader\nd. driver\n", "b"},

{"what does ui stand for?\na. user input\nb. user interface\nc. unit interface\nd. universal input\n", "b"},

{"what type of interface uses text commands?\na. gui\nb. cli\nc. api\nd. url\n", "b"},

{"what type of interface uses icons, windows, menus, and buttons?\na. cli\nb. bios\nc. gui\nd. cache\n", "c"},

{"which interface is harder to learn but uses less memory?\na. gui\nb. touchscreen\nc. cli\nd. voice interface\n", "c"},

{"which interface is easier to use and more common today?\na. cli\nb. gui\nc. assembly\nd. batch\n", "b"},

{"what does gui stand for?\na. general user input\nb. graphical user interface\nc. global utility interface\nd. graphical unit integration\n", "b"},

{"what is an example of a command-line interface?\na. windows\nb. ms-dos\nc. android\nd. macos\n", "b"},

{"what is an example of a gui?\na. linux terminal\nb. ms-dos\nc. windows\nd. command prompt\n", "c"},

{"what provides visual interaction between user and computer?\na. cli\nb. bios\nc. gui\nd. kernel\n", "c"},

{"what allows typing commands to control the computer?\na. gui\nb. cli\nc. touchscreen\nd. voice assistant\n", "b"},

{"what type of os is designed for home and office computers?\na. personal computer operating system\nb. server operating system\nc. embedded operating system\nd. real-time operating system\n", "a"},

{"what os is the most widely used on pcs?\na. macos\nb. linux\nc. microsoft windows\nd. unix\n", "c"},

{"what os is created by apple for mac computers?\na. windows\nb. macintosh\nc. linux\nd. android\n", "b"},

{"what os is known for being open-source and secure?\na. windows\nb. macos\nc. linux\nd. ios\n", "c"},

{"which os has the largest software compatibility?\na. linux\nb. windows\nc. macos\nd. android\n", "b"},

{"which os is known for its stability and is used by professionals?\na. macintosh\nb. windows\nc. linux\nd. chrome os\n", "a"},

{"which os is customizable and free to modify?\na. windows\nb. macos\nc. linux\nd. ios\n", "c"},

{"which os is commonly used by programmers and servers?\na. macos\nb. linux\nc. windows\nd. android\n", "b"},

{"which pc os offers the most user-friendly interface?\na. linux\nb. windows\nc. unix\nd. dos\n", "b"},

{"which pc os is exclusive to apple hardware?\na. linux\nb. windows\nc. macintosh\nd. ubuntu\n", "c"},

{"what type of os manages multiple users and resources on a network?\na. personal os\nb. server operating system\nc. mobile os\nd. embedded os\n", "b"},

{"what os handles file sharing, security, and network management?\na. mobile os\nb. server operating system\nc. personal os\nd. real-time os\n", "b"},

{"what is a popular microsoft server os?\na. windows server\nb. mac server\nc. linux mint\nd. android server\n", "a"},

{"what server os is commonly used on web servers?\na. windows 10\nb. linux\nc. ios\nd. chrome os\n", "b"},

{"what server os is known for stability and uptime?\na. macos\nb. linux\nc. windows home\nd. android\n", "b"},

{"what server os is used by large companies for enterprise tasks?\na. unix\nb. ios\nc. blackberry os\nd. ms-dos\n", "a"},

{"which server os supports hundreds of users at the same time?\na. personal os\nb. server operating system\nc. embedded os\nd. mobile os\n", "b"},

{"what type of os provides centralized control of data and devices?\na. mobile os\nb. personal os\nc. server operating system\nd. gaming os\n", "c"},

{"what type of software assists the operating system with maintenance tasks?\na. drivers\nb. utility programs\nc. compilers\nd. browsers\n", "b"},

{"what utility program protects against malware?\na. disk cleanup\nb. antivirus software\nc. file explorer\nd. backup tool\n", "b"},

{"what utility removes unwanted files to free space?\na. disk cleanup\nb. firewall\nc. task manager\nd. boot loader\n", "a"},

{"what utility helps organize files on the hard drive?\na. disk defragmenter\nb. antivirus\nc. compiler\nd. paint\n", "a"},

{"what utility makes copies of data for protection?\na. file explorer\nb. backup software\nc. disk cleanup\nd. browser\n", "b"},

{"what utility protects the computer from unauthorized access?\na. firewall\nb. scanner\nc. printer\nd. taskbar\n", "a"},

{"what utility monitors system performance and resources?\na. paint\nb. system monitoring tools\nc. video player\nd. game engine\n", "b"},

{"what utility allows file compression and extraction?\na. firewall\nb. zip utility\nc. disk defragmenter\nd. antivirus\n", "b"},

{"what utility helps recover deleted files?\na. file recovery software\nb. disk cleanup\nc. bios\nd. bluetooth\n", "a"},

{"what software converts programming code into machine language?\na. browser\nb. language translator\nc. media player\nd. firewall\n", "b"},

{"what are the three types of translators?\na. compiler, interpreter, assembler\nb. bios, cpu, ram\nc. gui, cli, os\nd. rom, ram, cache\n", "a"},

{"what translator converts entire programs at once?\na. interpreter\nb. compiler\nc. assembler\nd. driver\n", "b"},

{"what translator converts and runs code line by line?\na. compiler\nb. interpreter\nc. assembler\nd. boot loader\n", "b"},

{"what translator converts assembly language into machine code?\na. compiler\nb. interpreter\nc. assembler\nd. debugger\n", "c"},

{"which translator produces faster executing programs?\na. interpreter\nb. compiler\nc. assembler\nd. script\n", "b"},

{"which translator is useful for debugging line by line?\na. compiler\nb. interpreter\nc. device driver\nd. firewall\n", "b"},

{"which translator works with low-level mnemonics?\na. interpreter\nb. assembler\nc. compiler\nd. gui\n", "b"},

{"what is the output of a compiler?\na. source code\nb. executable file\nc. hardware drivers\nd. bytecode\n", "b"},

{"what is the output of an assembler?\na. machine code\nb. javascript\nc. binary input\nd. html\n", "a"},

{"what device enters text into the computer?\na. mouse\nb. keyboard\nc. monitor\nd. speaker\n", "b"},

{"what device moves a pointer on screen?\na. printer\nb. scanner\nc. mouse\nd. webcam\n", "c"},

{"what device converts physical documents to digital form?\na. projector\nb. scanner\nc. microphone\nd. keyboard\n", "b"},

{"what device captures video?\na. webcam\nb. speaker\nc. printer\nd. monitor\n", "a"},

{"what devices are used for gaming?\na. cpu and ram\nb. gaming devices\nc. routers\nd. scanners\n", "b"},

{"what pen-like device writes on a screen?\na. stylus or electronic pen\nb. mouse\nc. joystick\nd. usb cable\n", "a"},

{"what device reads rfid tags?\na. barcode scanner\nb. rfid reader\nc. webcam\nd. microphone\n", "b"},

{"what input device responds to touch?\na. touchscreen\nb. keyboard\nc. speaker\nd. printer\n", "a"},

{"what input device captures sound?\na. printer\nb. speaker\nc. microphone\nd. webcam\n", "c"},

{"what software secretly records typed keystrokes?\na. antivirus\nb. firewall\nc. keystroke logging software\nd. task manager\n", "c"},

{"how to protect against keyloggers?\na. ignore them\nb. use antivirus and spyware software\nc. uninstall os\nd. turn off computer\n", "b"},

{"what device displays visual output?\na. keyboard\nb. monitor\nc. mouse\nd. hard drive\n", "b"},

{"what device produces sound output?\na. cpu\nb. speakers\nc. bios\nd. keyboard\n", "b"},

{"what device prints text and images?\na. monitor\nb. printer\nc. webcam\nd. router\n", "b"},

{"what device projects images on a screen?\na. projector\nb. scanner\nc. mouse\nd. flash drive\n", "a"},

{"what influences how fast programs run?\na. screen size\nb. processor speed\nc. mouse sensitivity\nd. cable length\n", "b"},

{"how is processor speed measured?\na. volts\nb. gigahertz (ghz)\nc. pixels\nd. milliliters\n", "b"},

{"what type of processor has multiple cores?\na. single-core\nb. multicore\nc. analog\nd. wireless\n", "b"},

{"what does a multicore processor allow?\na. slower performance\nb. simultaneous task processing\nc. only one program at a time\nd. no multitasking\n", "b"},

{"what is any electronic device that uses data in digital form?\na. analog device\nb. digital device\nc. mechanical device\nd. storage device\n", "b"},

{"what part of the computer holds the cpu, memory, and components?\na. motherboard\nb. printer\nc. monitor\nd. usb hub\n", "a"},

{"what component processes instructions?\na. gpu\nb. cpu\nc. ram\nd. rom\n", "b"},

{"what does cpu stand for?\na. central process unit\nb. central processing unit\nc. computer personal unit\nd. control processing utility\n", "b"},

{"what stores permanent system instructions like bios?\na. ram\nb. hard disk\nc. rom\nd. cache\n", "c"},

{"what stores temporary data for active programs?\na. ram\nb. hard drive\nc. rom\nd. gpu\n", "a"},

{"what contains startup instructions for the computer?\na. cpu\nb. bios\nc. gpu\nd. usb\n", "b"},

{"what holds sound, graphics, and expansion cards?\na. cpu socket\nb. motherboard slots\nc. storage bay\nd. battery pack\n", "b"},

{"what converts ac power to dc power in a computer?\na. voltage cable\nb. power supply\nc. gpu\nd. hard drive\n", "b"},

{"what are examples of power sources?\na. speakers, mouse\nb. power cords, batteries, solar cells\nc. cpu, ram, rom\nd. keyboard, monitor\n", "b"},

{"what must computing devices have to run?\na. monitor\nb. power supply\nc. speakers\nd. printer\n", "b"},

{"what does ac to dc conversion allow?\na. faster internet\nb. safe power for components\nc. more storage\nd. better graphics\n", "b"},

{"what is used to reduce electricity consumption?\na. power management\nb. disk cleanup\nc. antivirus\nd. overclocking\n", "a"},

{"what are connection points to plug in devices?\na. ports\nb. files\nc. icons\nd. folders\n", "a"},

{"what type of port is used for keyboards and mice?\na. hdmi\nb. usb port\nc. ethernet\nd. audio jack\n", "b"},

{"what port connects monitors?\na. display or hdmi port\nb. usb\nc. ethernet\nd. serial port\n", "a"},

{"what port is used for internet connection?\na. hdmi\nb. audio\nc. ethernet port\nd. vga\n", "c"},

{"what port is used for audio devices?\na. ps/2\nb. ethernet\nc. audio port\nd. hdmi\n", "c"},

{"what reads data from and writes data to storage media?\na. cpu\nb. storage device\nc. gpu\nd. network card\n", "b"},

{"what do storage devices use to access media?\na. drives\nb. wires\nc. speakers\nd. mouse\n", "a"},

{"what is the main internal permanent storage device?\na. ram\nb. hard disk\nc. cache\nd. cpu\n", "b"},

{"what drive reads cds and dvds?\na. optical drive\nb. hard drive\nc. usb\nd. ssd\n", "a"},

{"what portable device stores data externally?\na. keyboard\nb. external hard drive\nc. gpu\nd. cpu\n", "b"},

{"what small solid-state device stores data?\na. flash drive\nb. dvd\nc. motherboard\nd. speaker\n", "a"},

{"what stores data even when the computer is off?\na. ram\nb. storage media\nc. cache\nd. cpu\n", "b"},

{"what uses the internet to store data remotely?\na. usb\nb. cloud storage\nc. ram\nd. gpu\n", "b"},

{"what is a file?\na. a physical object\nb. a collection of data stored with a name\nc. a hardware component\nd. a type of cpu\n", "b"},

{"what does dram stand for?\na. dynamic ram\nb. digital ram\nc. dual ram\nd. direct ram\n", "a"},

{"what does sram stand for?\na. static ram\nb. serial ram\nc. system ram\nd. small ram\n", "a"},

{"what does sdram stand for?\na. super dynamic ram\nb. synchronous dynamic ram\nc. system data ram\nd. standard ram\n", "b"},

{"what is the machine cycle?\na. steps cpu performs to process data\nb. turning off the computer\nc. printing documents\nd. loading drivers\n", "a"},

{"what is data?\na. processed output\nb. raw facts\nc. instructions\nd. software\n", "b"},

{"what is information?\na. random numbers\nb. raw data\nc. processed data with meaning\nd. unused memory\n", "c"},

{"what is the information processing cycle?\na. input only\nb. input, process, output, storage\nc. output, delete\nd. process only\n", "b"},

{"what number system do computers use?\na. decimal\nb. binary system\nc. hexadecimal\nd. roman numerals\n", "b"},

{"what is a bit?\na. 8 bytes\nb. 1 digit in binary\nc. a file\nd. 1000 bytes\n", "b"},

{"what is a byte?\na. 8 bits\nb. 1 bit\nc. 16 bits\nd. 1024 bits\n", "a"},

{"what performs calculations and logic operations?\na. ram\nb. cpu\nc. hard drive\nd. monitor\n", "b"},

{"what is temporary memory used by the cpu?\na. rom\nb. ram\nc. flash drive\nd. monitor\n", "b"},

{"what stores frequently used data for faster access?\na. cache memory\nb. hard drive\nc. usb\nd. gpu\n", "a"},

{"what shows output visually?\na. monitor\nb. keyboard\nc. ram\nd. cpu\n", "a"},

{"what is permanent storage of data?\na. ram\nb. storage\nc. cache\nd. cpu\n", "b"},

{"what should you do regularly to prevent data loss?\na. delete files\nb. ignore updates\nc. back up files\nd. turn off pc\n", "c"},


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
        } else if (score > quiz.size()/2) {
            cout << "That was close you had only " <<  quiz.size()- score << " wrong. better luck next time! " << endl;
        }else {
            cout << "Review more dude, you got "<< quiz.size()- score << " wrong"  << endl;
        }
    return 0;
}