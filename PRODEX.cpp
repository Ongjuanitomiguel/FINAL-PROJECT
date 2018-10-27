#include<iostream>
#include<string>

using namespace std;
	class Game{
		public :
			int yourChar;
			string currentChar;
			bool isInterviewed,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
			int count;
			void intro(){
				cout << "Introduction: \nIn a peaceful Village, some changes happened. It suffers from series of killings and death is a continuous threat to everyone living in that villa as when the killer has not been caught. Villagers are in danger. We need your help! Let's secure the villagers and bring the villa back to it's life!";
				cout << "\n\n\n\n\nIMPORTANT NOTE : CHECKING AGAIN THE CLUES WILL MAKE YOU GAME OVER AND LOSE THE GAME";
			}

			void chooseCharacter(int yourChar){
				cout << "Level 1: Choose your character \n \nWho would you like to be?\n1- Policeman\n2- Policewoman :\n";
				cout << "I am playing as : ";cin >> yourChar;
				switch(yourChar){
					case 1:
						this->currentChar = "Policeman";
						break;
					case 2 :
						this->currentChar = "Policewoman";
						break;
				}
			}

			void gameStart(){

			}
	/*****************************************case number : 1****************************************************************************/
			void inTheRiver(){
				int whoToAsk;

				cout << "Level 3: Who to ask";
				cout << "\n\n\n\n1- River Cleanliness Maintenance\n2- People who lives around the village \n";
				cout << "I will investigate number : ";
				cin >> whoToAsk;
				switch(whoToAsk){
					case 1:
							this->count = this->count + 1;

						if(!this->a){
							riverCleanlinessMainenance();
						}else{
							cout << "Already reviewed\n You lose for not following instruction";

						}



						break;
					case 2:
												this->count = this->count + 1;
							if(!this->b){
							peopleWhoLivesAroundTheVillage();
						}else{
													cout << "Already reviewed\n You lose for not following instruction";

						}

						break;
				}
			}

			void riverCleanlinessMainenance(){
				int newDecision;
				this->a = false;
				if(this->a){
					cout << "Reviewed!";
				}else{
				cout << "You : I am " << this->currentChar  << " of this city\n";
				cout << "You : I just have a few Questions\n";
				cout << "You : Where are you when the incident happened? \n";
				cout << "River Cleanliness Maintenance : Beside the river \n";
				cout << "You : Who's with you that time? \n";
				cout << "River Cleanliness Maintenance : Me Alone, Im on my duty  \n";
				cout << "You : Do you know any potential killer? \n";
				cout << "River Cleanliness Maintenance : I dont have any idea \n";
				cout << "You : Do you know the victim by any chance? \n";
				cout << "River Cleanliness Maintenance : .... \n\n\n\n\n\n\n";
				cout << "[1] Continue investigation\n[2]Guess the killer\n";
				cout << "Decision : ";
				cin >> newDecision;
				this->a =  true;
					switch(newDecision){
					case 1:
										this->count = this->count + 1;
						if(this->a){
							int decision;
							this->n = false;
							cout << "Want to continue investigation ? ";
							cin >> decision;
							if(decision==1){
								int decision;
									this->n = false;
								investigate(decision);
							}else if(decision == 2){
								whoIsTheKiller();
							}

						}else{
								cout << "You have review me!";


						}
						break;
					case 2:
							whoIsTheKiller();
				}
					}

			}








			void peopleWhoLivesAroundTheVillage(){

				int newDecision;
					this->b = false;
				if(this->b){
					cout << "Reviewed!";
				}else{
				cout << "You : I am " << this->currentChar  << " of this city\n";
				cout << "You : I just have a few Questions\n";
				cout << "You : Where are you when the incident happened? \n";
				cout << "People who lives around the village :: At the park  \n";
				cout << "You : Who's with you that time? \n";
				cout << "People who lives around the village : Im with my neighbors/friends   \n";
				cout << "You : Do you know any potential killer? \n";
				cout << "People who lives around the village : I dont think so  \n";
				cout << "You : Do you know the victim by any chance? \n";
				cout << "People who lives around the village :He's a resident here  \n\n\n\n\n\n\n";
				cout << "[1] Continue investigation\n[2]Guess the killer\n";
				cout << "Decision : ";
				cin >> newDecision;

				this->b =  true;
					switch(newDecision){
					case 1:
									this->count = this->count + 1;
						if(this->b){
							int decision;
							this->o = false;
							cout << "Want to continue investigation ? ";
							cin >> decision;
							if(decision==1){
								int decision;
									this->o = false;
								investigate(decision);
							}else if(decision == 2){
								whoIsTheKiller();
							}

						}else{
								cout << "You have review me!";


						}
						break;
					case 2:
							whoIsTheKiller();
				}
					}

			}





	/*****************************************end of case number : 1****************************************************************************/

















	/*****************************************case number : 2****************************************************************************/

		void park(){
				int whoToAsk;

				cout << "Level 3: Who to ask";
				cout << "\n1- Management\n2- People playing and roaming inside the park \n";
				cout << "I will investigate number : ";
				cin >> whoToAsk;
				switch(whoToAsk){
					case 1:
													this->count = this->count + 1;
						if(!this->c){
							management();
						}else{
							cout << "Already reviewed\nYou lose for not following instruction";

						}



						break;
					case 2:
													this->count = this->count + 1;
							if(!this->d){
								peoplePlaying();
						}else{
							cout << "Already reviewed\nYou lose for not following instruction";

						}

						break;
				}
			}













			void management(){
					int newDecision;
					this->c = false;
					if(this->c){
						cout << "Reviewed!";
					}else{
				cout << "You : I am " << this->currentChar  << " of this city\n";
				cout << "You : I just have a few Questions\n";
				cout << "You : Where are you when the incident happened? \n";
				cout << "Management : At the office \n";
				cout << "You : Who's with you that time? \n";
				cout << "Management : Im with my Co-workers  \n";
				cout << "You : Do you know any potential killer? \n";
				cout << "Management :We haven't noticed any suspicious activities that day  \n";
				cout << "You : Do you know the victim by any chance? \n";
				cout << "Management:One of the resident in this village  \n";
				cout << "[1] Continue investigation\n[2]Guess the killer\n";
				cout << "Decision : ";
				cin >> newDecision;
				this->c =  true;
					switch(newDecision){
					case 1:
										this->count = this->count + 1;
						if(this->c){
							int decision;
							this->d = false;
							cout << "Want to continue investigation ? ";
							cin >> decision;
							if(decision==1){
								int decision;
									this->d = false;
								investigate(decision);
							}else if(decision == 2){
								whoIsTheKiller();
							}

						}else{
								cout << "You have review me!";


						}
						break;
					case 2:
							whoIsTheKiller();
				}
					}
				}






			void peoplePlaying(){
				int newDecision;
					this->d = false;
					if(this->d){
						cout << "Reviewed!";
					}else{
				cout << "You : I am " << this->currentChar  << " of this city\n";
				cout << "You : I just have a few Questions\n";
				cout << "You : Where are you when the incident happened? \n";
				cout << "People playing and roaming inside the park :we're at the park  \n";
				cout << "You : Who's with you that time? \n";
				cout << "People playing and roaming inside the park : Im with my co residents s  \n";
				cout << "You : Do you know any potential killer? \n";
				cout << "People playing and roaming inside the park :I think he/she is not a resident here  \n";
				cout << "You : Do you know the victim by any chance? \n";
				cout << "People playing and roaming inside the park: Our neighbor, living beside our house  \n";
				cout << "[1] Continue investigation\n[2]Guess the killer\n";
				cout << "Decision : ";
				cin >> newDecision;
				this->d =  true;
					switch(newDecision){
					case 1:
									this->count = this->count + 1;
						if(this->d){
							int decision;
							this->e = false;
							cout << "Want to continue investigation ? ";
							cin >> decision;
							if(decision==1){
								int decision;
									this->e = false;
								investigate(decision);
							}else if(decision == 2){
								whoIsTheKiller();
							}

						}else{
								cout << "You have review me!";


						}
						break;
					case 2:
							whoIsTheKiller();
				}
					}

				}

	/*****************************************end of case number : 2****************************************************************************/








	/*****************************************case number : 3****************************************************************************/
			void albertHouse(){
					int whoToAsk;

				cout << "Level 3: Who to ask";
				cout << "\n1Father\n2-Mother\n3-Brother\n4-Sister\n";
				cout << "I will investigate number : ";
				cin >> whoToAsk;
				switch(whoToAsk){
					case 1:
								this->count = this->count + 1;
						if(!this->e){
						father();
						}else{
							cout << "Already reviewed\n You lose for not following instruction";

						}

					break;
					case 2:
								this->count = this->count + 1;
						if(!this->f){
						mother();
						}else{
							cout << "Already reviewed\n You lose for not following instruction";

						}
					break;
					case 3:
								this->count = this->count + 1;
							if(!this->g){
						brother();
						}else{
							cout << "Already reviewed\n You lose for not following instruction";

						}
						break;
					case 4 :
								this->count = this->count + 1;
							if(!this->h){
						sister();
						}else{
							cout << "Already reviewed\n You lose for not following instruction";

						}
					break;
				}




			}









			void mother(){

					int newDecision;
					this->f = false;
					if(this->f){
						cout << "Reviewed!";
					}else{

				cout << "You : I am " << this->currentChar  << " of this city\n";
				cout << "You : I just have a few Questions\n";
				cout << "You : Where are you when the incident happened? \n";
				cout << "Mother :I had an appointed meeting with the village president.   \n";
				cout << "You : Who's with you that time? \n";
				cout << "Mother : My family, aside from my husband 'cause he had to see a friend. \n";
				cout << "You : Do you know any potential killer? \n";
				cout << "Mother :I don't know, my son is really a nice person.   \n";
				cout << "You : Do you know the victim by any chance? \n";
				cout << "Mother: Of course, he is my dearest son.   \n";
				cout << "[1] Continue investigation\n[2]Guess the killer\n";
				cout << "Decision : ";
				cin >> newDecision;
				this->f = true;
				switch(newDecision){
					case 1:
					this->count = this->count + 1;
						if(this->f){
							int decision;
							this->g = false;
							cout << "Want to continue investigation ? ";
							cin >> decision;
							if(decision==1){
								int decision;
									this->g = false;
								investigate(decision);
							}else if(decision == 2){
								whoIsTheKiller();
							}

						}else{
								cout << "You have review me!";


						}
						break;
					case 2:
							whoIsTheKiller();
				}
				}
			}









			void father(){
					int newDecision;
					this->e = false;
					if(this->e){
						cout << "Reviewed!";
					}else{

				cout << "You : I am " << this->currentChar  << " of this city\n";
				cout << "You : I just have a few Questions\n";
				cout << "You : Where are you when the incident happened? \n";
				cout << "Father :we're at the park  \n";
				cout << "You : Who's with you that time? \n";
				cout << "Father :? I was with my whole family. We were appointed to a meeting with the village president.  \n";
				cout << "You : Do you know any potential killer? \n";
				cout << "Father :My family, like what I've said.  \n";
				cout << "You : Do you know the victim by any chance? \n";
				cout << "Father:? My son is actually really nice to everyone  \n";
				cout << "[1] Continue investigation\n[2]Guess the killer\n";
				cout << "Decision : ";
				cin >> newDecision;
				this->e = true;
				switch(newDecision){
					case 1:
					this->count = this->count + 1;
						if(this->e){
							int decision;
							this->f = false;
							cout << "Want to continue investigation ? ";
							cin >> decision;
							if(decision==1){
								int decision;
									this->f = false;
								investigate(decision);
							}else if(decision == 2){
								whoIsTheKiller();
							}

						}else{
								cout << "You have review me!";


						}
						break;
					case 2:
							whoIsTheKiller();
				}
				}
			}



			void brother(){
					int newDecision;
					this->g = false;
					if(this->g){
						cout << "Reviewed!";
					}else{

				cout << "You : I am " << this->currentChar  << " of this city\n";
				cout << "You : I just have a few Questions\n";
				cout << "You : Where are you when the incident happened? \n";
				cout << "Brother :My mom and my sister went to meet the president of the village.  \n";
				cout << "You : Who's with you that time? \n";
				cout << "Brother : Only my mom and my sister.   \n";
				cout << "You : Do you know any potential killer? \n";
				cout << "Brother  My brother is nice to everyone. He was so much loved.   \n";
				cout << "You : Do you know the victim by any chance? \n";
				cout << "Brother: We were very close and I assure you that he is a nice person.  \n";
				cout << "[1] Continue investigation\n[2]Guess the killer\n";
				cout << "Decision : ";
				cin >> newDecision;
				this->g = true;
				switch(newDecision){
					case 1:
					this->count = this->count + 1;
						if(this->g){
							int decision;
							this->h = false;
							cout << "Want to continue investigation ? ";
							cin >> decision;
							if(decision==1){
								int decision;
									this->h = false;
								investigate(decision);
							}else if(decision == 2){
								whoIsTheKiller();
							}

						}else{
								cout << "You have review me!";


						}
						break;
					case 2:
							whoIsTheKiller();
				}
				}
			}

			void sister(){
					int newDecision;
					this->h = false;
					if(this->h){
						cout << "Reviewed!";
					}else{

				cout << "You : I am " << this->currentChar  << " of this city\n";
				cout << "You : I just have a few Questions\n";
				cout << "You : Where are you when the incident happened? \n";
				cout << "Sister :I was in a meeting with the village president.  \n";
				cout << "You : Who's with you that time? \n";
				cout << "Sister : My mom and my brother.  \n";
				cout << "You : Do you know any potential killer? \n";
				cout << "Sister :Well, he had an argument with dad the last night. I love my dad but I noticed this past few days that he is becoming hot-headed with Albert.  \n";
				cout << "You : Do you know the victim by any chance? \n";
				cout << "Sister: We aren't that close aside form he's my brother. Please sir, serve him justice.  \n";
				cout << "[1] Continue investigation\n[2]Guess the killer\n";
				cout << "Decision : ";
				cin >> newDecision;
				this->h = true;
				switch(newDecision){
					case 1:
					this->count = this->count + 1;
						if(this->h){
							int decision;
							this->i = false;
							cout << "Want to continue investigation ? ";
							cin >> decision;
							if(decision==1){
								int decision;
									this->i = false;
								investigate(decision);
							}else if(decision == 2){
								whoIsTheKiller();
							}

						}else{
								cout << "You have review me!";


						}
						break;
					case 2:
							whoIsTheKiller();
				}
				}
			}
	/*****************************************end of case number : 3 ****************************************************************************/









	/*****************************************case number : 4****************************************************************************/
			void villagePresident(){
					int newDecision;
					this->j = false;
					if(this->j){
						cout << "Reviewed!";
					}else{

				cout << "You : I am " << this->currentChar  << " of this city\n";
				cout << "You : I just have a few Questions\n";
				cout << "You : Where are you when the incident happened? \n";
				cout << "The village president :? I was in a meeting with his family. Aside from him and his father. \n";
				cout << "You : Who's with you that time? \n";
				cout << "The village president: Just his family members and my secretary outside the office \n";
				cout << "You : Do you know any potential killer? \n";
				cout << "The village president :I barely knew the victim and it's the fist criminal incident here in the village.   \n";
				cout << "You : Do you know the victim by any chance? \n";
				cout << "The village president: I only know about him because of his family.  \n";
				cout << "[1] Continue investigation\n[2]Guess the killer\n";
				cout << "Decision : ";
				cin >> newDecision;
				this->j = true;
				switch(newDecision){
					case 1:
					this->count = this->count + 1;
						if(this->j){
							int decision;
							this->k = false;
							cout << "Want to continue investigation ? ";
							cin >> decision;
							if(decision==1){
								int decision;
									this->k = false;
								investigate(decision);
							}else if(decision == 2){
								whoIsTheKiller();
							}

						}else{
								cout << "You have review me!";


						}
						break;
					case 2:
							whoIsTheKiller();
				}
				}
			}

			void villageHeadGuard(){
					int newDecision;
					this->l = false;
					if(this->l){
						cout << "Reviewed!";
					}else{

				cout << "You : I am " << this->currentChar  << " of this city\n";
				cout << "You : I just have a few Questions\n";
				cout << "You : Where are you when the incident happened? \n";
				cout <<  "The village headguard :It's exactly when I'm done roaming around the village.   \n";
				cout << "You : Who's with you that time? \n";
				cout << " The village headguard : I'm alone when roaming in with my bike.  \n";
				cout << "You : Do you know any potential killer? \n";
				cout << " The village headguard :The village was actually very quiet and normal during my duty. It wasn't really suspicious, that's why I was surprised.  \n";
				cout << "You : Do you know the victim by any chance? \n";
				cout << " The village headguard:Yes, his family is well-known for being nice to everyone.  \n";
				cout << "[1] Continue investigation\n[2]Guess the killer\n";
				cout << "Decision : ";
				cin >> newDecision;
				this->l = true;
				switch(newDecision){
					case 1:
					this->count = this->count + 1;
						if(this->l){
							int decision;
							this->m = false;
							cout << "Want to continue investigation ? ";
							cin >> decision;
							if(decision==1){
								int decision;
									this->m = false;
								investigate(decision);
							}else if(decision == 2){
								whoIsTheKiller();
							}

						}else{
								cout << "You have review me!";


						}
						break;
					case 2:
							whoIsTheKiller();
				}
				}
			}
			void toVillageOffice(){
						int whoToAsk;

				cout << "Level 3: Who to ask \n\n\n\n\n";
				cout << "1The village president\n2-The village headguard";
				cout << "I will investigate number : ";
				cin >>  whoToAsk;
				switch(whoToAsk){
					case 1:
								this->count = this->count + 1;
						if(!this->j){
						villagePresident();
						}else{
							cout << "Already reviewed\n You lose for not following instruction";

						}

					break;
					case 2:
						if(!this->l){
						villageHeadGuard();
						}else{
							cout << "Already reviewed\n You lose for not following instruction";

						}
					break;

		}


			}






	/*****************************************end of case number : 4****************************************************************************/



		/*****************************************Investigate start****************************************************************************/

			void investigate(int decision){

						cout << "One pleasant morning was another day for everyone on the villa. People jog around, sweep streets and greet everyone they encounter on the street. Well, that was the usual. While you were walking, you saw a dead body of a little boy floating on the river. It was Albert. A well-known person who lives in the villa.";
				cout << "\n\n\nLevel 2- Investigation\nWhere do you want to start?\n1- River\n2- Park\n3- Albert's house\n4- Village's office";
				cout << "\nI will investigate number : ";
				cin >> decision;
				switch(decision){
					case 1 :
					inTheRiver();
					break;

					case 2 :
							park();

					break;

					case 3 :
							albertHouse();
					break;
					case 4 :
							toVillageOffice();
					break;
					default :

					break;
				}
			}

			void whoIsTheKiller(){

				int theKiller;
				cout << "Who is the killer ?\n==========================================================================\n1- River Cleanliness Maintenance\n2- People who lives around the village\n3- Management\n4- People playing and roaming inside the park\n5- Family members\n6- Father\n3.1.3- Mother\n7- Housemaid\n8- The village president\n9- The village headguard";
				cout <<"\nThe killer is number :  ";cin >> theKiller;
				if(theKiller == 6){
					cout <<"******************************************************************\n";
					cout << "You solve it! Congratulations \n!";
					cout <<"******************************************************************";
				}else{
					cout <<"******************************************************************\n";
					cout << "The suspect also kill you, You lose\n";
					cout <<"******************************************************************";
				}
			}

			void countTheCount(){
				cout << this->count;
			}
	};



int main(){
	Game g;
	int chooseChar,charToInvestigate;
	g.intro();

	g.chooseCharacter(chooseChar);
	g.gameStart();
	g.investigate(charToInvestigate);
		g.countTheCount();

	return 0;
}
