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
{"what is a computer?\na. a mechanical calculator\nb. an electronic, programmable device\nc. a type of smartphone\nd. a network cable\n", "b"},

{"which type of computer solves problems using continuously variable physical phenomena?\na. digital computer\nb. analog computer\nc. hybrid computer\nd. mainframe computer\n", "b"},

{"which type of computer processes information using discrete values?\na. analog computer\nb. digital computer\nc. hybrid computer\nd. mechanical computer\n", "b"},

{"computers designed for communication are known as?\na. computers for communicating\nb. analog computers\nc. mobile computers\nd. servers\n", "a"},

{"windows, linux, and macintosh computers are categorized by?\na. manufacturer and operating system\nb. size\nc. price\nd. storage capacity\n", "a"},

{"supercomputers, mainframes, and servers belong to which category of computers?\na. large computers\nb. mid-sized computers\nc. mobile devices\nd. analog systems\n", "a"},

{"personal computers, workstations, desktops, and laptops are considered?\na. large computers\nb. mid-sized computers\nc. mobile devices\nd. hybrid computers\n", "b"},

{"smartphones, pdas, and digital audio players are examples of?\na. mobile computers\nb. mid-sized computers\nc. mainframe systems\nd. desktop devices\n", "a"},

{"what is a supercomputer?\na. a basic home computer\nb. a computer that performs trillions of calculations per second\nc. a handheld gaming console\nd. a communication device\n", "b"},

{"a desktop computer’s cpu is typically housed in a?\na. tower configuration\nb. handheld device\nc. monitor screen\nd. smartphone case\n", "a"},

{"what is another term for a laptop?\na. desktop computer\nb. notebook computer\nc. handheld calculator\nd. microprocessor\n", "b"},

{"what is a tablet pc?\na. a large desktop computer\nb. a portable computing device with a touchscreen interface\nc. a mainframe\nd. a tower server\n", "b"},

{"what is a netbook?\na. a large server computer\nb. a small-sized laptop computer\nc. a gaming console\nd. a smartphone\n", "b"},

{"what is technological convergence?\na. the process of combining technology and art\nb. the tendency of technical devices to take on each other’s functions\nc. when devices lose computing power\nd. mixing analog and digital signals\n", "b"},

{"which device best represents technological convergence?\na. smartphone\nb. desktop computer\nc. mainframe\nd. analog calculator\n", "a"},

{"what is ubiquitous computing also called?\na. virtual computing\nb. embedded technology\nc. cloud computing\nd. mobile processing\n", "b"},

{"what does ubiquitous computing do?\na. places computing power in your environment to sense information such as temperature and humidity\nb. connects multiple computers into a network\nc. improves internet speed\nd. converts analog data into digital signals\n", "a"},

{"in which of the following settings are computers used?\na. business, home, education, law enforcement, arts, medicine, entertainment\nb. only business and education\nc. only arts and entertainment\nd. only medicine and law\n", "a"},

{"which career involves studying computer hardware and software systems and how devices interface?\na. computer science\nb. computer engineering\nc. software engineering\nd. information technology\n", "b"},

{"which field involves designing software and solving problems like security threats?\na. computer science\nb. information systems\nc. computer engineering\nd. hardware design\n", "a"},

{"which career focuses on designing technology solutions to solve business problems?\na. information technology\nb. computer science\nc. information systems\nd. software engineering\n", "c"},

{"which field ensures technology infrastructure supports users?\na. information technology\nb. computer engineering\nc. data analytics\nd. network design\n", "a"},

{"which field involves writing software programs for public or commercial use?\na. software engineering\nb. information systems\nc. computer science\nd. information technology\n", "a"},

{"what field provides career paths related to website creation and management?\na. web development\nb. data science\nc. cybersecurity\nd. cloud engineering\n", "a"},

{"which field involves creating programs for smartphones and mobile devices?\na. mobile app development\nb. system analysis\nc. robotics\nd. hardware design\n", "a"},

{"what is a computer?\na. a mechanical calculator\nb. an electronic, programmable device\nc. a type of smartphone\nd. a network cable\n", "b"},

{"which type of computer solves problems using continuously variable physical phenomena?\na. digital computer\nb. analog computer\nc. hybrid computer\nd. mainframe computer\n", "b"},

{"which type of computer processes information using discrete values?\na. analog computer\nb. digital computer\nc. hybrid computer\nd. mechanical computer\n", "b"},

{"computers designed for communication are known as?\na. computers for communicating\nb. analog computers\nc. mobile computers\nd. servers\n", "a"},

{"windows, linux, and macintosh computers are categorized by?\na. manufacturer and operating system\nb. size\nc. price\nd. storage capacity\n", "a"},

{"supercomputers, mainframes, and servers belong to which category of computers?\na. large computers\nb. mid-sized computers\nc. mobile devices\nd. analog systems\n", "a"},

{"personal computers, workstations, desktops, and laptops are considered?\na. large computers\nb. mid-sized computers\nc. mobile devices\nd. hybrid computers\n", "b"},

{"smartphones, pdas, and digital audio players are examples of?\na. mobile computers\nb. mid-sized computers\nc. mainframe systems\nd. desktop devices\n", "a"},

{"what is a supercomputer?\na. a basic home computer\nb. a computer that performs trillions of calculations per second\nc. a handheld gaming console\nd. a communication device\n", "b"},

{"a desktop computer’s cpu is typically housed in a?\na. tower configuration\nb. handheld device\nc. monitor screen\nd. smartphone case\n", "a"},

{"what is another term for a laptop?\na. desktop computer\nb. notebook computer\nc. handheld calculator\nd. microprocessor\n", "b"},

{"what is a tablet pc?\na. a large desktop computer\nb. a portable computing device with a touchscreen interface\nc. a mainframe\nd. a tower server\n", "b"},

{"what is a netbook?\na. a large server computer\nb. a small-sized laptop computer\nc. a gaming console\nd. a smartphone\n", "b"},

{"what is technological convergence?\na. the process of combining technology and art\nb. the tendency of technical devices to take on each other’s functions\nc. when devices lose computing power\nd. mixing analog and digital signals\n", "b"},

{"which device best represents technological convergence?\na. smartphone\nb. desktop computer\nc. mainframe\nd. analog calculator\n", "a"},

{"what is ubiquitous computing also called?\na. virtual computing\nb. embedded technology\nc. cloud computing\nd. mobile processing\n", "b"},

{"what does ubiquitous computing do?\na. places computing power in your environment to sense information such as temperature and humidity\nb. connects multiple computers into a network\nc. improves internet speed\nd. converts analog data into digital signals\n", "a"},

{"in which of the following settings are computers used?\na. business, home, education, law enforcement, arts, medicine, entertainment\nb. only business and education\nc. only arts and entertainment\nd. only medicine and law\n", "a"},

{"which career involves studying computer hardware and software systems and how devices interface?\na. computer science\nb. computer engineering\nc. software engineering\nd. information technology\n", "b"},

{"which field involves designing software and solving problems like security threats?\na. computer science\nb. information systems\nc. computer engineering\nd. hardware design\n", "a"},

{"which career focuses on designing technology solutions to solve business problems?\na. information technology\nb. computer science\nc. information systems\nd. software engineering\n", "c"},

{"which field ensures technology infrastructure supports users?\na. information technology\nb. computer engineering\nc. data analytics\nd. network design\n", "a"},

{"which field involves writing software programs for public or commercial use?\na. software engineering\nb. information systems\nc. computer science\nd. information technology\n", "a"},

{"what field provides career paths related to website creation and management?\na. web development\nb. data science\nc. cybersecurity\nd. cloud engineering\n", "a"},

{"which field involves creating programs for smartphones and mobile devices?\na. mobile app development\nb. system analysis\nc. robotics\nd. hardware design\n", "a"},

{"what is the internet?\na. the world’s largest computer network\nb. a single website\nc. a local database\nd. a mobile application\n", "a"},

{"the internet is best described as?\na. the physical infrastructure that allows us to connect and store content\nb. a program for creating web pages\nc. a wireless router\nd. a file-sharing app\n", "a"},

{"what is the web?\na. a system of content that resides on internet servers\nb. the hardware that connects computers\nc. a social media platform\nd. a browser plugin\n", "a"},

{"the web is a collection of?\na. websites or web pages stored in servers and connected through the internet\nb. emails and attachments\nc. desktop applications\nd. offline documents\n", "a"},

{"a single website is made up of?\na. one or more web pages\nb. a single URL\nc. only text files\nd. databases only\n", "a"},

{"what is web 1.0 also known as?\na. static web\nb. interactive web\nc. semantic web\nd. mobile web\n", "a"},

{"web 1.0 allowed users to?\na. read content but not interact\nb. write and edit content\nc. communicate live\nd. upload videos\n", "a"},

{"what is web 2.0 known as?\na. interactive web\nb. static web\nc. semantic web\nd. text-based web\n", "a"},

{"web 2.0 allows users to?\na. read, interact, write, and collaborate\nb. only read content\nc. only browse files\nd. only play videos\n", "a"},

{"web 3.0 is also known as?\na. semantic web\nb. static web\nc. offline web\nd. analog web\n", "a"},

{"web 3.0 allows users to?\na. read, interact, write, collaborate, and access connected content\nb. only read and write\nc. only browse\nd. only upload files\n", "a"},

{"which of the following is a type of internet broadband connection?\na. DSL\nb. bluetooth\nc. usb\nd. infrared\n", "a"},

{"which of the following is another type of broadband connection?\na. cable\nb. floppy disk\nc. ethernet card\nd. usb hub\n", "a"},

{"which broadband type uses satellites for connectivity?\na. satellite internet\nb. cable internet\nc. dsl\nc. wifi only\n", "a"},

{"what does an isp do?\na. allows you to access the internet\nb. secures email accounts\nc. stores files locally\nd. provides antivirus protection\n", "a"},

{"what is an ip address?\na. a series of numbers that uniquely identifies a location on the internet\nb. a domain name\nc. a browser extension\nd. a password code\n", "a"},

{"what does url stand for?\na. uniform resource locator\nb. unified resource link\nc. universal routing layer\nd. user registration link\n", "a"},

{"what does a url do?\na. it’s the text address entered in a browser to go to a website\nb. it connects two computers directly\nc. it saves files offline\nd. it stores user data\n", "a"},

{"what does http stand for?\na. hypertext transfer protocol\nb. hypertext transmission program\nc. host transfer process\nd. hyperlink testing protocol\n", "a"},

{"what does http do?\na. allows you to view a website and transfer data from the server\nb. stores cookies on your device\nc. connects email servers\nd. compresses web files\n", "a"},

{"https stands for?\na. hypertext transfer protocol secure\nb. high transfer text protocol system\nc. hyper technical text platform system\nd. host transfer text program\n", "a"},

{"https provides what feature?\na. a secured connection\nb. faster graphics\nc. offline browsing\nd. data compression\n", "a"},

{"what is a domain name?\na. identifies the group of servers or organization name of a website\nb. an email account\nc. a file name\nd. a search engine\n", "a"},

{"what is a tld?\na. top level domain\nb. text location directory\nc. terminal link device\nd. transfer line data\n", "a"},

{"what does a tld do?\na. acts as a suffix (like .com or .edu) identifying the domain type\nb. stores website data\nc. encrypts content\nd. provides site graphics\n", "a"},

{"generic tlds are?\na. domain suffixes with three or more characters\nb. country code domains\nc. limited-use domains\nd. subdomain names\n", "a"},

{"a web address is also known as a?\na. url\nb. ip address\nc. hyperlink\nd. html tag\n", "a"},

{"what is a browser used for?\na. navigating and displaying online content\nb. writing computer code\nc. designing hardware\nd. installing software\n", "a"},

{"what is a hyperlink?\na. text or object that points to a destination on the web\nb. a file format\nc. an image type\nd. a browser tool\n", "a"},

{"what is a search engine?\na. a website used to find web content using keywords\nb. a hardware search tool\nc. a data compression system\nd. a file transfer protocol\n", "a"},

{"which of the following are examples of search engines?\na. google, yahoo, bing\nb. facebook, instagram, tiktok\nc. outlook, gmail, yahoo mail\nd. word, excel, powerpoint\n", "a"},

{"what is the first page of a website called?\na. home page\nb. search page\nc. main file\nd. landing tab\n", "a"},

{"what is a search directory?\na. a type of search engine that organizes results by category\nb. a folder for downloads\nc. a web address bar\nd. a hardware directory\n", "a"},

{"what are keywords?\na. words or phrases entered into a search engine to find information\nb. encrypted passwords\nc. html tags\nd. filenames\n", "a"},

{"what is hypertext?\na. text that is linked to another web destination\nb. bold or colored text\nc. a form of data compression\nd. digital handwriting\n", "a"},

{"what is a metasearch engine?\na. a tool that uses multiple search engines to find results\nb. a social media platform\nc. a private network\nd. a web server\n", "a"},

{"what is a plug-in or player?\na. an app added to a browser to support media or file viewing\nb. a hardware connector\nc. an antivirus program\nd. a text editor\n", "a"},

{"what is copyright?\na. a legal right of ownership protecting content\nb. a programming language\nc. a storage system\nd. a web domain suffix\n", "a"},

{"what is intellectual property?\na. creations of the mind such as inventions, designs, or artworks\nb. physical property of computers\nc. company stock ownership\nd. website hosting rights\n", "a"},

{"p2p file sharing can lead to?\na. identity theft and malware downloads\nb. faster browsing\nc. improved privacy\nd. better encryption\n", "a"},

{"what is the invisible or deep web?\na. hidden collections of information not indexed by search engines\nb. the surface web\nc. offline stored files\nd. private browsing mode\n", "a"},

{"what do crawlers do?\na. follow hyperlinks to find and index web data\nb. remove files from servers\nc. send email messages\nd. compress web pages\n", "a"},

{"what is data integration?\na. combining data from multiple sources for complete results\nb. deleting duplicate files\nc. encrypting search results\nd. renaming web files\n", "a"},

{"what is e-commerce?\na. using the internet to transact business\nb. creating websites\nc. downloading media\nc. browsing blogs\n", "a"},

{"b2b e-commerce involves?\na. businesses selling to other businesses\nb. companies selling to consumers\nc. consumers selling to each other\nd. government contracts only\n", "a"},

{"b2c e-commerce involves?\na. businesses selling directly to consumers\nb. consumers selling to each other\nc. business-to-business sales\nd. wholesale trade\n", "a"},

{"c2c e-commerce involves?\na. consumers buying and selling from each other online\nb. businesses trading with governments\nc. corporate networks\nd. private enterprise sales\n", "a"},

{"what was one of the first internet services?\na. email\nb. web browsing\nc. video streaming\nd. social media\n", "a"},

{"the first email was sent in?\na. 1971\nb. 1980\nc. 1990\nd. 2000\n", "a"},

{"what is an email client?\na. a program used to access email, such as outlook\nb. an email address\nc. a hardware device\nd. an isp service\n", "a"},

{"an email address includes?\na. a username, domain name, and domain suffix\nb. only a username\nc. only a password\nd. only the isp name\n", "a"},

{"voip stands for?\na. voice over internet protocol\nb. virtual online input process\nc. video output interface program\nd. voice operation internal protocol\n", "a"},

{"voip allows you to?\na. make voice calls over the internet\nb. send video messages offline\nc. encrypt emails\nd. store data in the cloud\n", "a"},

{"what is web conferencing?\na. technology for live online meetings and presentations\nb. a video editing software\nc. a type of cloud storage\nd. a file-sharing site\n", "a"},

{"mime stands for?\na. multipurpose internet mail extensions\nb. multi-interface messaging environment\nc. media internet management engine\nd. mail integration module exchange\n", "a"},

{"mime format allows emails to?\na. include non-text attachments like media files or pdfs\nb. send faster\nc. block spam automatically\nd. encrypt user data\n", "a"},

{"smtp stands for?\na. simple mail transfer protocol\nb. secure mail transfer platform\nc. system mail transport process\nd. server message transfer protocol\n", "a"},

{"smtp is used to?\na. send mime-formatted messages to an email server\nb. download attachments\nc. open web browsers\nd. search websites\n", "a"},

{"imap stands for?\na. internet message access protocol\nb. integrated mail access program\nc. internal message allocation process\nd. internet mail automation protocol\n", "a"},

{"imap is used to?\na. retrieve email from a server\nb. send email\nc. encrypt messages\nd. compress files\n", "a"},

{"pop3 stands for?\na. post office protocol version 3\nb. personal online program\nc. private output process\nd. public operations protocol\n", "a"},

{"pop3 is used to?\na. retrieve email from a server\nb. send email\nc. host web servers\nd. create email addresses\n", "a"},

{"system software tells the computer?\na. how to play games\nb. what to do and how to do it\nc. how to design graphics\nd. how to connect to the internet\n", "b"},

{"how many main categories of software exist?\na. one\nb. two\nc. three\nd. four\n", "b"},

{"which type of software includes programs that perform one task?\na. system software\nb. application software\nc. utility software\nd. driver software\n", "b"},

{"which software controls the operations of a computer system?\na. operating system\nb. system software\nc. application software\nd. firmware\n", "b"},

{"which of the following is a function of an operating system?\na. printing documents\nb. managing memory\nc. saving power\nd. connecting to the internet\n", "b"},

{"what process loads the operating system when a computer is turned on?\na. rebooting\nb. booting\nc. loading\nd. formatting\n", "b"},

{"what is the temporary storage area used to hold data waiting to transfer?\na. buffer\nb. file\nc. cache\nd. disk\n", "a"},

{"print spooling refers to?\na. printing instantly\nb. holding a document in buffer until ready to print\nc. saving files to printer\nd. scanning documents\n", "b"},

{"what is multitasking?\na. using multiple computers\nb. working on two or more applications at the same time\nc. opening multiple browsers\nd. copying many files\n", "b"},

{"what enables the operating system to communicate with hardware devices?\na. driver\nb. firmware\nc. GUI\nd. compiler\n", "a"},

{"which component keeps track of stored files and their locations?\na. buffer\nb. file manager\nc. driver\nd. command line\n", "b"},

{"what checks a computer’s speed and efficiency?\na. system log\nb. performance monitor\nc. task scheduler\nd. cache checker\n", "b"},

{"which interface requires typing commands?\na. graphical user interface\nb. command line interface\nc. desktop interface\nd. hybrid interface\n", "b"},

{"which interface uses pictures or icons to represent actions?\na. command line interface\nb. graphical user interface\nc. text interface\nd. script interface\n", "b"},

{"what is the main screen where graphical elements are displayed called?\na. desktop\nb. folder\nc. window\nd. icon\n", "a"},

{"which Windows version was designed for business and network computers?\na. Windows XP\nb. Windows 2000 Professional\nc. Windows Vista\nd. Windows ME\n", "b"},

{"which Windows version improved security and networking?\na. Windows XP\nb. Windows Vista\nc. Windows 7\nd. Windows 95\n", "b"},

{"which Mac OS introduced UNIX as its foundation?\na. Mac OS 9\nb. Mac OS X\nc. Mac OS 8\nd. Mac OS Server\n", "b"},

{"which operating system runs DOS and Windows programs and is used for business?\na. Linux\nb. UNIX\nc. IBM OS/2\nd. Solaris\n", "c"},

{"what is Linux known for?\na. high cost\nb. instability\nc. open-source flexibility and security\nd. limited use\n", "c"},

{"which system software is widely used for local area networks?\na. Windows Server\nb. Novell Netware\nc. UNIX\nd. Linux\n", "b"},

{"which operating system is cross-platform and runs on any computer type?\na. UNIX\nb. Windows\nc. DOS\nd. Chrome OS\n", "a"},

{"Palm OS is used for?\na. servers\nb. desktop PCs\nc. handheld devices\nd. mainframes\n", "c"},

{"Windows Mobile was designed for?\na. gaming consoles\nb. smartphones and PDAs\nc. supercomputers\nd. IoT devices\n", "b"},


{"application software is used to?\na. control the computer\nb. get things done by the user\nc. manage memory\nd. monitor performance\n", "b"},

{"which of the following is NOT a type of application software?\na. packaged software\nb. customized software\nc. firmware\nd. shareware\n", "c"},

{"packaged software is?\na. custom made for one company\nb. sold to the public on a retail basis\nc. open-source only\nd. free to everyone\n", "b"},

{"customized software is?\na. designed for entertainment\nb. created to meet a company’s specific needs\nc. preinstalled on all PCs\nd. available free online\n", "b"},

{"shareware is?\na. free trial software with optional payment\nb. completely free\nc. open-source code\nd. built-in software\n", "a"},

{"freeware is?\na. paid monthly\nb. provided free of charge\nc. limited use only\nd. subscription-based\n", "b"},

{"open-source software means?\na. code is hidden from the public\nb. code is available for public modification\nc. cannot be copied\nd. only runs on Windows\n", "b"},

{"productivity software includes?\na. antivirus programs\nb. word processors and spreadsheets\nc. photo editors\nd. games\n", "b"},

{"word processing software is used to?\na. play videos\nb. create and edit text documents\nc. edit images\nd. manage files\n", "b"},

{"desktop publishing software allows users to?\na. print only text\nb. create documents with text and graphics\nc. program applications\nd. browse the web\n", "b"},

{"spreadsheets are used to?\na. design logos\nb. organize and calculate data\nc. store audio files\nd. manage printers\n", "b"},

{"macros in spreadsheets are used to?\na. change color\nb. automate complex tasks\nc. delete formulas\nd. print charts\n", "b"},

{"database software manages?\na. computer memory\nb. large amounts of data\nc. multimedia files\nd. hardware drivers\n", "b"},

{"a collection of data organized in tables is called?\na. field\nb. record\nc. database\nd. spreadsheet\n", "c"},

{"a collection of related fields forms a?\na. record\nb. table\nc. file\nd. link\n", "a"},

{"a database management system (DBMS) allows users to?\na. edit images\nb. create and manage databases\nc. browse the internet\nd. print reports\n", "b"},

{"a relational database allows?\na. linking of tables\nb. storage of images\nc. printing of forms\nd. multimedia editing\n", "a"},

{"presentation graphics software is used to?\na. design databases\nb. create slide shows\nc. format text\nd. compress files\n", "b"},

{"project management software helps users?\na. track schedules and budgets\nb. design videos\nc. format spreadsheets\nd. play music\n", "a"},

{"personal finance software helps users?\na. pay bills and track expenses\nb. edit photos\nc. manage hardware\nd. send emails\n", "a"},

{"tax preparation software helps users?\na. create databases\nb. prepare and file tax returns\nc. design presentations\nd. manage hardware\n", "b"},

{"entertainment software includes?\na. spreadsheets\nb. interactive games, videos, and music\nc. legal software\nd. database tools\n", "b"},

{"painting programs create images in?\na. bit-map form\nb. vector form\nc. 3D models\nd. charts\n", "a"},

{"drawing programs use?\na. lines and curves to create images\nb. pixels only\nc. spreadsheets\nd. audio files\n", "a"},

{"CAD software is used for?\na. creating music\nb. designing architectural and engineering models\nc. browsing websites\nd. making presentations\n", "b"},

{"video and audio editing software allows users to?\na. record and modify media clips\nb. print photos\nc. manage emails\nd. create spreadsheets\n", "a"},

{"web authoring software helps users?\na. build web pages without programming\nb. code in C++\nc. install browsers\nd. configure servers\n", "a"},

{"communication software includes?\na. spreadsheets\nb. browsers, search engines, and chat apps\nc. painting tools\nd. antivirus\n", "b"},

{"instant messaging software enables?\na. real-time communication\nb. file compression\nc. database linking\nd. coding\n", "a"},

{"groupware allows?\na. collaboration and information sharing\nb. image editing\nc. tax preparation\nd. downloading movies\n", "a"},

{"web conferencing software allows?\na. online meetings between participants\nb. playing games\nc. local printing\nd. memory management\n", "a"}









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