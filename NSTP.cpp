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

{"A student refuses to stand during the national anthem in the flag ceremony claiming it’s unnecessary. According to the Flag and Heraldic Code, what should be done during the anthem?\na. Sit quietly\nb. Place right hand on chest and face the flag\nc. Wave small flags\nd. Sing any version of the anthem\n", "b"},
{"You are at a parade when the national flag passes by. What should you do as a sign of respect?\na. Ignore it\nb. Salute or place right hand over chest\nc. Take a photo\nd. Wave a smaller flag\n", "b"},
{"During a calamity, the Philippine flag is flown at half-mast. What does this symbolize?\na. Celebration\nb. Respect for the dead\nc. Start of independence\nd. Hero’s parade\n", "b"},
{"A teacher is organizing a flag ceremony. According to the Flag Code, what song should be played as the flag is raised?\na. Bayan Ko\nb. Lupang Hinirang\nc. Ako ay Pilipino\nd. Pilipinas Kong Mahal\n", "b"},
{"A private building owner plans to raise the Philippine flag on May 28. Is this allowed?\na. No, only on June 12\nb. Yes, it’s National Flag Day\nc. No, only for government buildings\n", "b"},
{"A city mayor dies while in office. How long should the flag be flown at half-mast?\na. 10 days\nb. 7 days\nc. 3 days\n", "c"},
{"A group plans to use the national flag as a tablecloth during a celebration. What violation is this?\na. Improper display\nb. Mutilation\nc. Use as drapery or covering\n", "c"},
{"When should all government offices observe flag-raising ceremonies?\na. Every Monday morning\nb. Every Friday afternoon\nc. Every Wednesday\n", "a"},
{"A veteran dies and his casket is covered with the national flag. Which color should cover the right side?\na. Red\nb. Blue\nc. White\n", "b"},
{"A singer plans to remix the national anthem for entertainment. Is this allowed?\na. Yes, if well-sung\nb. No, it must follow original tempo and lyrics\nc. Only for foreign concerts\n", "b"},
{"During the flag-lowering ceremony, how should the flag be lowered?\na. Quickly\nb. Slowly and solemnly\nc. Any speed is fine\n", "b"},
{"At night, a public plaza displays the flag but without illumination. What rule is violated?\na. It must be illuminated at night\nb. It must be removed after sunset\nc. None, it’s allowed\n", "a"},
{"A citizen places the national flag below a stage platform. What is wrong here?\na. It should not be below any platform\nb. Nothing wrong\nc. It depends on the event\n", "a"},
{"Which of the following is *not* allowed under the Flag Code?\na. Printing the flag on handkerchiefs\nb. Raising it on Independence Day\nc. Flying it at government offices\n", "a"},
{"What should be done immediately after singing the national anthem during flag ceremonies?\na. Prayer\nb. Pledge of Allegiance\nc. Speech by teacher\n", "b"},
{"A student paints the national flag horizontally on a wall. What should be corrected?\na. It should fall freely when hoisted\nb. It must not be horizontal or painted\nc. It needs brighter colors\n", "b"},
{"A foreign embassy displays their flag beside the Philippine flag. When is this allowed?\na. During fiestas\nb. In embassies or diplomatic offices\nc. At public concerts\n", "b"},
{"A person is caught wearing clothes designed like the national flag. What violation is this?\na. Defilement\nb. Wearing as costume\nc. Improper color use\n", "b"},
{"A group plans to hang multiple flags as decoration between poles. What is this called?\na. Drapery\nb. Festoon\nc. Banner\n", "b"},
{"If the President dies, how many days should the flag be flown at half-mast?\na. 10 days\nb. 7 days\nc. 5 days\n", "a"},
{"A teacher wants students to sing “Lupang Hinirang” in English. What does the law say?\na. It must be sung in its original Filipino lyrics\nb. Any language is fine\nc. Only if approved by DepEd\n", "a"},
{"Which part of the flag must be hoisted upward when displayed vertically against a wall?\na. Blue field\nb. Red field\nc. White triangle\n", "c"},
{"A barangay captain died. When should the flag be half-masted?\na. 3 days\nb. On the day of interment\nc. 7 days\n", "b"},
{"A student claims he can alter the national anthem’s lyrics for fun. What rule applies?\na. Prohibited; must retain original lyrics\nb. Allowed if educational\nc. Allowed for social media use\n", "a"},
{"You see a flag displayed under a painting in a restaurant. What’s wrong?\na. It should never be under any picture\nb. Nothing, it’s decorative\nc. Depends on owner’s permission\n", "a"},
{"When facing the flag during ceremonies, where should the right hand be placed?\na. Over the chest\nb. Behind the back\nc. Raised high\n", "a"},
{"Who has custody of the Great Seal of the Republic?\na. Senate President\nb. President of the Philippines\nc. Chief Justice\n", "b"},
{"When the flag is used to cover a casket, which must be at the head?\na. White triangle\nb. Blue field\nc. Red field\n", "a"},
{"A person plans to add an advertisement logo to the national flag. What violation is this?\na. Defacing the flag\nb. Artistic freedom\nc. No violation\n", "a"},
{"What is the national motto written beneath the Coat of Arms?\na. Maka-Diyos, Maka-Tao, Makakalikasan at Makabansa\nb. Bayanihan, Kalayaan, Katarungan\nc. Mabuhay ang Pilipinas\n", "a"},
{"Which color of the flag represents bravery and patriotism?\na. Red\nb. Blue\nc. White\n", "a"},
{"Which color of the flag symbolizes peace, truth, and justice?\na. Red\nb. Blue\nc. White\n", "b"},
{"Which rays of the sun represent the first provinces under martial law?\na. 8 rays of the sun\nb. 3 stars\nc. Red field\n", "a"},
{"If there is a typhoon signal raised in the area, what must be done with the flag?\na. Lowered\nb. Half-masted\nc. Brought indoors\n", "c"},
{"What does each star in the Philippine flag represent?\na. Three branches of government\nb. Luzon, Visayas, Mindanao\nc. Three presidents\n", "b"},
{"In the Preamble, whose aid do the Filipino people implore?\na. Heroes\nb. Almighty God\nc. Constitution\n", "b"},
{"According to the Preamble, what society do Filipinos aim to build?\na. Wealthy society\nb. Just and humane society\nc. Powerful society\n", "b"},
{"Which phrase in the Preamble expresses love for the nation’s future generations?\na. Blessings of independence and democracy\nb. Posterity\nc. Rule of law\n", "b"},
{"The Preamble begins with what words?\na. We, the sovereign Filipino people\nb. We, the Constitution makers\nc. In the beginning\n", "a"},
{"Which of the following is *not* an objective of the Constitution?\na. Promote common good\nb. Create disorder\nc. Secure independence\n", "b"},
{"Why is the Preamble considered an invocation?\na. It calls for God’s guidance\nb. It’s a law\nc. It defines government powers\n", "a"},
{"Which word best describes the Constitution?\na. Supreme law of the land\nb. A suggestion\nc. A political slogan\n", "a"},
{"The Preamble sets the stage for what?\na. The Bill of Rights\nb. The entire Constitution\nc. National laws only\n", "b"},
{"Which value is *not* mentioned in the Preamble?\na. Truth\nb. Love\nc. Wealth\n", "c"},
{"The Constitution defines the relationship between what two entities?\na. Citizens and the government\nb. Schools and students\nc. Courts and police\n", "a"},
{"When was the 1987 Constitution ratified?\na. February 2, 1987\nb. June 12, 1986\nc. October 12, 1986\n", "a"},
{"The first Philippine Constitution was written in what language?\na. Filipino\nb. Spanish\nc. English\n", "b"},
{"Which Constitution introduced the Bill of Rights?\na. 1899 Malolos\nb. 1973 Constitution\nc. 1987 Constitution\n", "c"},
{"Which principle determines citizenship by blood?\na. Jus sanguinis\nb. Jus soli\nc. Repatriation\n", "a"},
{"Which principle grants citizenship by place of birth?\na. Jus soli\nb. Jus sanguinis\nc. Naturalization\n", "a"},
{"Natural-born citizens are those who are citizens from?\na. Election\nb. Birth\nc. Naturalization\n", "b"},
{"Which law provides ways citizenship may be lost or reacquired?\na. Commonwealth Act No. 63\nb. Republic Act No. 9139\nc. Commonwealth Act No. 473\n", "a"},
{"A Filipino woman marries a foreigner and acquires his nationality. How does she lose citizenship?\na. By marriage under husband’s law\nb. By express renunciation\nc. By oath of allegiance\n", "a"},
{"A natural-born Filipino becomes a U.S. citizen. How can he regain Philippine citizenship?\na. Through Reacquisition Act of 2003\nb. By moving back to PH\nc. By taking a Filipino spouse\n", "a"},
{"A foreigner has lived in the Philippines for 10 years, owns land, and speaks Filipino. Which process can make him a citizen?\na. Judicial naturalization\nb. Repatriation\nc. Adoption\n", "a"},
{"Who are considered natural-born citizens?\na. Those who elected citizenship at age 21\nb. Those citizens from birth\nc. Those naturalized by law\n", "b"},
{"A foreigner introduced a useful invention and married a Filipina. How many years of residence is required for him to be naturalized?\na. 10 years\nb. 5 years\nc. 3 years\n", "b"},
{"An alien applies for citizenship under RA 9139. What kind of naturalization is this?\na. Administrative\nb. Judicial\nc. Legislative\n", "a"},
{"Which office handles administrative naturalization applications?\na. Office of the Solicitor General\nb. Office of the Ombudsman\nc. Department of Justice\n", "a"},
{"Who chairs the Special Committee on Naturalization?\na. Solicitor General\nb. Secretary of Justice\nc. DFA Secretary\n", "a"},
{"If Congress passes a law granting citizenship to a foreigner, what type of naturalization is it?\na. Legislative\nb. Administrative\nc. Judicial\n", "a"},
{"Which is *not* a way to lose citizenship under CA No. 63?\na. Express renunciation\nb. Serving foreign military\nc. Voting in PH elections\n", "c"},
{"What is dual citizenship?\na. Having two nationalities\nb. Having two passports\nc. Being undecided\n", "a"},
{"A Filipino citizen takes an oath of allegiance to another country. What happens?\na. Loses Philippine citizenship\nb. Retains both citizenships automatically\nc. None\n", "a"},
{"To whom must a citizen show loyalty and allegiance?\na. Family\nb. Republic of the Philippines\nc. Barangay\n", "b"},
{"Which of the following is a duty of a citizen?\na. To obey laws\nb. To ignore politics\nc. To avoid voting\n", "a"},
{"When called by the government to serve, citizens must be willing to?\na. Defend the State\nb. Pay fines\nc. Leave the country\n", "a"},
{"Which is an obligation of every Filipino to ensure dignity of family life?\na. Engage in gainful work\nb. Join the army\nc. Study abroad\n", "a"},
{"What should citizens do to help in national development?\na. Contribute to welfare of the State\nb. Avoid paying taxes\nc. Stay neutral\n", "a"},
{"Which document guarantees fundamental civil rights?\na. Bill of Rights\nb. Flag Code\nc. Executive Order\n", "a"},
{"Which phrase in the Preamble expresses fairness and equality?\na. Truth, justice, freedom, love, equality, and peace\nb. Dangal at kalayaan\nc. Maka-tao at makabansa\n", "a"},
{"What does the term “Constitution” literally mean?\na. Supreme law organizing the government\nb. National song\nc. Historical event\n", "a"},
{"When the Preamble says “under the rule of law,” what does it imply?\na. Everyone is subject to law\nb. Only leaders must obey\nc. Citizens can ignore rules\n", "a"},
{"Who are the framers of the 1987 Constitution?\na. Constitutional Commission\nb. Congress\nc. President\n", "a"},
{"When was the final draft of the Constitution completed?\na. October 12, 1986\nb. February 2, 1987\nc. June 12, 1986\n", "a"},
{"Which phrase in the Preamble refers to love for one’s country?\na. Promote the common good\nb. Conserve and develop our patrimony\nc. Establish a government\n", "b"},
{"The Constitution serves as the framework that defines?\na. Powers of government\nb. Local customs\nc. Historical sites\n", "a"},
{"Who is responsible for ensuring the proper conduct of flag ceremonies?\na. Office of the President\nb. DepEd\nc. Local Government Unit\n", "a"},
{"Which institution must hold flag ceremonies every Monday and Friday?\na. All government offices and schools\nb. Only DepEd schools\nc. Only LGUs\n", "a"},
{"What is the purpose of the National Anthem according to the Flag Code?\na. Inspire nationalism and unity\nb. For entertainment\nc. For political rallies\n", "a"},
{"Which law declares that dual allegiance is inimical to national interest?\na. Article IV, Section 5 of the 1987 Constitution\nb. Commonwealth Act No. 63\nc. RA 9139\n", "a"},
{"In the Preamble, what does 'posterity' mean?\na. Future generations\nb. National leaders\nc. Ancient ancestors\n", "a"},
{"The National Coat of Arms’ blue field represents what?\na. Peace and justice\nb. Bravery\nc. Faith\n", "a"},
{"The red field in the Coat of Arms represents what?\na. Patriotism and bravery\nb. Purity\nc. Honesty\n", "a"},
{"The eight rays of the sun stand for which provinces?\na. Manila, Bulacan, Pampanga, Nueva Ecija, Morong, Laguna, Batangas, Cavite\nb. Luzon, Visayas, Mindanao\nc. Ilocos, Cebu, Davao\n", "a"},
{"Where should the Great Seal be affixed?\na. On all presidential commissions\nb. On every classroom\nc. On government vehicles\n", "a"},
{"Who may use the national flag to cover a casket?\na. Military, veterans, national artists\nb. Anyone\nc. Only presidents\n", "a"},
{"What act prohibits defacing or trampling the flag?\na. Section 39 of the Flag Code\nb. Article IV of the Constitution\nc. Commonwealth Act No. 63\n", "a"},
{"What do the three stars on the flag symbolize?\na. Luzon, Visayas, Mindanao\nb. Peace, Freedom, Love\nc. Government branches\n", "a"},
{"When may the flag be flown 24 hours?\na. In Malacañang and key national sites\nb. At all schools\nc. Never allowed\n", "a"},
{"In the Preamble, what does “truth, justice, freedom, love, equality, and peace” refer to?\na. Ideals and aspirations\nb. Duties of citizens\nc. National anthem lines\n", "a"},
{"What is the English meaning of “Saligang Batas”? \na. Constitution\nb. Law book\nc. Freedom\n", "a"},
{"Which Constitution replaced the 1973 Constitution?\na. 1987 Constitution\nb. 1943 Constitution\nc. 1935 Constitution\n", "a"},
{"The Constitution promotes what kind of government?\na. Democratic and republican\nb. Monarchy\nc. Dictatorship\n", "a"},
{"What does 'patrimony' refer to in the Preamble?\na. National heritage\nb. Political system\nc. Family property\n", "a"},
{"Who must observe the Pledge of Allegiance after the anthem?\na. All citizens present\nb. Only students\nc. Only teachers\n", "a"},
{"What is the official title of the Philippine National Anthem?\na. Lupang Hinirang\nb. Bayang Magiliw\nc. Pilipinas Kong Mahal\n", "a"},
{"Which phrase in the Preamble expresses social harmony?\na. Promote the common good\nb. Conserve and develop patrimony\nc. Secure independence\n", "a"},
{"What form of respect must be shown when singing the anthem?\na. Stand and place right palm on chest\nb. Sit and sing quietly\nc. Bow down\n", "a"},
{"What is the motto inscribed below the Coat of Arms?\na. Maka-Diyos, Maka-Tao, Makakalikasan at Makabansa\nb. Mabuhay Pilipinas\nc. Bayan Ko\n", "a"}


}; 

shuffle(quiz.begin(), quiz.end(), g);
    cout << "=== Random Identification Quiz: NSTP ===\n\n"; 

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
