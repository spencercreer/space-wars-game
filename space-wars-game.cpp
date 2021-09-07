//--------------------------------------------------------------
// File: game_6F0686B1A_HW03.cpp
// Date: 19 September 2018
// This program is a choose your own adventure that allows the
// user to battle through space to WIN!
//--------------------------------------------------------------

#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main()
{
		//Declare variables
		string name;
		string weap;
		string arm;
		string droid;
		char weapon;
		char armor;
		int s = 0;
		int action = 0;
		int i = 0;
		int j = 1;
		int power = 0;
		int speed = 0;
		int accuracy = 0;
		int strength = 0;
		int hp = 0;
		int Xan_pow(0), Xan_spe(0), Xan_acc(0), Xan_str, Xan_hp(0);
		
		do
		{
			j = 1;
			// Begin the game. Choose character name.
			cout << "Zebular: ATTENTION cadet! My name is Zebular, general of the Uratis army." << endl << "What is your name?!" << endl << endl << "Enter your charachter name (name must not contain spaces): ";
			cin >> name;

			//Choose weapon.
			cout << endl << "Zebular: Hello " << name << "!" << " You are on the plant Poldar." << endl << "For several years we have been at war with the alien terrorist scum TORUS." << endl;
			cout << "You have been selected to battle the TORUS alien army." << endl;
			cout << "Let's first choose your weapon. Which weapon do you want to take to battle?" << endl << endl;
			cout << "(A) Plasma Blaster: power 3 speed 1 accuracy 4" << endl;
			cout << "(B) Stealth Sabor:  power 1 speed 3 accuracy 5" << endl;
			cout << "(C) Sniper Rifle:   power 1 speed 2 accuracy 6" << endl;
			cout << endl << "Enter your desired weapon by entering the associated letter" << endl << "(Entry is case sensitive): ";
			cin >> weapon;

			//Increment players stats by weapon choice.
			while (i == 0)
			{
				if (weapon == 'A')
				{
					weap = "Plasma Blaster";
					cout << endl << "Zebular: Nice choice!" << endl << "The Plasma Blaster is sure to wreak havoc on those alien slimeballs!" << endl;
					power = 3;
					speed = 1;
					accuracy = 4;

					cout << endl << name << "'s Stats:" << endl << "Weapon: " << weap << endl << "Power: " << power << endl << "Speed: " << speed << endl << "Accuracy: " << accuracy << endl;
					i = 1;
				}

				else if (weapon == 'B')
				{
					weap = "Stealth Sabor";
					cout << endl << "Zebular: It appears that you prefer a quick weapon over a powerful one." << endl << "The Stealth Sabor will definitely give you the speed you're looking for." << endl;
					power = 1;
					speed = 3;
					accuracy = 5;

					cout << endl << name << "'s Stats:" << endl << "Weapon: " << weap << endl << "Power: " << power << endl << "Speed: " << speed << endl << "Accuracy: " << accuracy << endl;
					i = 1;
				}

				else if (weapon == 'C')
				{
					weap = "Sniper Rifle";
					cout << endl << "Zebular: You sure won't miss with the Sniper Rifle!" << endl;
					power = 1;
					speed = 2;
					accuracy = 6;

					cout << endl << name << "'s Stats:" << endl << "Weapon: " << weap << endl << "Power: " << power << endl << "Speed: " << speed << endl << "Accuracy: " << accuracy << endl;
					i = 1;
				}

				else
				{
					cout << endl << "Zebular: Do you not know how to follow orders?!" << endl << "I'm starting to question whether you're the right soldier for the job." << endl << endl << "Make a valid selection (Entry is case sensitive): ";
					cin >> weapon;
				}
			}

			//Choose armor.
			cout << endl << "Next, we need to make sure that you have the proper armor." << endl << "Which armor suits you best?" << endl << endl;
			cout << "(X) Solar shield:    hp 4 speed 2 strength 3" << endl;
			cout << "(Y) Uranium suit:    hp 6 speed 1 strength 2" << endl;
			cout << "(Z) Lightning armor: hp 2 speed 3 strength 2" << endl;
			cout << endl << "Enter your desired armor by entering the associated letter" << endl << "(Entry is case sensitive): ";
			cin >> armor;

			//Increment players stats by armor choice.
			i = 0;
			while (i == 0)
			{
				if (armor == 'X')
				{
					arm = "Solar Shield";
					cout << endl << "Zebular: The Solar Shield uses power from our Alpha Centauri sun." << endl << "It is the most versatile armor we have." << endl;
					hp = 4;
					speed = speed + 2;
					strength = 3;

					cout << endl << name << "'s Stats:" << endl << "Weapon: " << weap << endl << "Armor: " << arm << endl << "Power: " << power << endl << "Speed: " << speed << endl << "Accuracy: " << accuracy << endl << "HP: " << hp << endl << "Strength: " << strength << endl;
					i = 1;
				}

				else if (armor == 'Y')
				{
					arm = "Uranium Suit";
					cout << endl << "Zebular: The high density Uranium Suit is the toughest thing we have." << endl << "It will sheild you well, but it may be a little tough to get around." << endl;
					hp = 6;
					speed = speed + 1;
					strength = 2;

					cout << endl << name << "'s Stats:" << endl << "Weapon: " << weap << endl << "Armor: " << arm << endl << "Power: " << power << endl << "Speed: " << speed << endl << "Accuracy: " << accuracy << endl << "HP: " << hp << endl << "Strength: " << strength << endl;
					i = 1;
				}

				else if (armor == 'Z')
				{
					arm = "Lightning Armor";
					cout << endl << "Zebular: Lightning Armor will definitely up your speed." << endl << "You better stay on your toes cause if you get hit then your toast." << endl;
					hp = 2;
					speed = speed + 3;
					strength = 2;

					cout << endl << name << "'s Stats:" << endl << "Weapon: " << weap << endl << "Armor: " << arm << endl << "Power: " << power << endl << "Speed: " << speed << endl << "Accuracy: " << accuracy << endl << "HP: " << hp << endl << "Strength: " << strength << endl;
					i = 1;
				}

				else
				{
					cout << endl << "Zebular: Do you not know how to follow orders?!" << endl << "I'm starting to question whether you're the right soldier for the job." << endl << endl << "Make a valid selection (Entry is case sensitive): ";
					cin >> armor;
				}
			}

			//Choose droid name.
			cout << endl << "Zebular: Looks like you are ready to take on the TORUS aliens." << endl << "One last thing, this droid will help you throughout your mission." << endl << "It will give you instruction from the Uratis army base." << endl;
			cout << "What would you like to name it?" << endl << endl << "Enter a droid name (name must not contain spaces): ";
			cin >> droid;
			cout << endl << "Zebular: " << droid << ", huh? That's an interesting name." << endl << "Well, " << droid << " will direct you from here." << endl << "This is as far as I go. You're on your own now kid. Good luck " << name << "!" << endl << "I hope to see you soon!" << endl << endl;
			cout << droid << ": Hi. I am " << droid << "..." << endl << "I have been programmed using C++ to assist you throughout your mission." << endl << "First we go to the planet Ranok to infultrate the TORUS base." << endl << endl;


			//Begin battle
			cout << "PLANET: RANOK 3 PARSECS FROM THE PLANET POLDAR" << endl << endl;
			cout << droid << ": Well here we are. It seems kind of quiet. I wonder wh..." << endl << "Oh no. It is a Xanar. A Xanar is a TORUS soldier. You will have to fight him to continue the mission. Analyzing the enemy..." << endl;

			while (j != 0)
			{
				//Randomly generate Xanar's stats
				srand(time(NULL));

				Xan_pow = rand() % 5 + 1;
				Xan_spe = rand() % 5 + 1;
				Xan_acc = rand() % 5 + 1;
				Xan_hp = rand() % 5 + 1;
				Xan_str = rand() % 5 + 1;

				//Display players stats, Xanar's stats and battle

				while (hp > 0 && Xan_hp > 0)
				{
					cout << endl << name << "'s Stats:				Xanar's Stats:" << endl << "Weapon: " << weap << "				Weapon: Titanium Claws" << endl << "Armor: " << arm << "				Armor: Scaled Armor" << endl << "Power: " << power << "					Power: " << Xan_pow << endl << "Speed: " << speed << "					Speed: " << Xan_spe << endl << "Accuracy: " << accuracy << "					Accuracy: " << Xan_acc << endl << "HP: " << hp << "						HP: " << Xan_hp << endl << "Strength: " << strength << "					Strength: " << Xan_str << endl;
					cout << endl << droid << ": What would you like to do?" << endl << endl << "(1) Run" << endl << "(2) Strike" << endl << "(3) Dodge" << endl << "(4) Block" << endl << endl << "Make your selection by entering the associated letter" << endl << "(Entry is case sensitive): ";
					cin >> action;
					switch (action)
					{
					case 1:
						if (speed >= Xan_spe)
						{
							cout << endl << droid << ": You got away!" << endl;
							Xan_hp = 0;
						}
						else
						{
							cout << endl << droid << ": You didn't get away" << endl << "You were hit!" << endl << "-" << Xan_pow << " hp" << endl;
							hp = hp - Xan_pow;
						}
						break;

					case 2:
						if (accuracy >= Xan_spe)
						{
							cout << endl << droid << ": That's a HIT! Great job!" << endl << "Xanar lost " << power << " hp" << endl;
							Xan_hp = Xan_hp - power;
						}
						else
						{
							cout << endl << droid << ": You missed. You were hit." << endl << "-" << Xan_pow << " hp" << endl;
							hp = hp - Xan_pow;
						}
						break;

					case 3:
						if (speed > Xan_acc)
						{
							cout << endl << droid << ": You dodge the Xanar's attack!" << endl << "It appears that the Xanar is getting tired and lost 1 power." << endl;
							Xan_pow = Xan_pow - 1;
						}
						else
						{
							cout << endl << droid << ": You were hit." << endl << "-" << Xan_pow << "hp" << endl;
							hp = hp - Xan_pow;
						}
						break;

					case 4:
						if (strength > Xan_pow)
						{
							cout << endl << droid << ": You blocked the Xanar's attack!" << endl << "It appears that the Xanar is getting tired and lost 1 speed." << endl;
							Xan_spe = Xan_spe - 1;
						}
						else
						{
							cout << endl << droid << ": Your block failed. You were hit." << endl << "-" << Xan_pow << " hp" << endl;
							hp = hp - Xan_pow;
						}
						break;

					default:
					{
						cout << endl << droid << ": System Error. Entry does not compute." << endl << "You were hit!" << endl << "-" << Xan_pow << "hp" << endl;
						hp = hp - Xan_pow;
						break;
					}

					}
				}
				if (Xan_hp <= 0)
					cout << endl << droid << ": You defeted the Xanar! That was a close one!" << endl;

				else
				{
					cout << endl << droid << ": You were defeted the Xanar!" << endl;
					j = 0;
				}

				cout << endl << droid << ": Oh no. It is another Xanar. You will have to fight him to continue the mission. Analyzing the enemy..." << endl;

				//Randomly generate Xanar's stats
				srand(time(NULL));

				Xan_pow = rand() % 5 + 1;
				Xan_spe = rand() % 5 + 1;
				Xan_acc = rand() % 5 + 1;
				Xan_hp = rand() % 5 + 1;
				Xan_str = rand() % 5 + 1;

				//Display players stats, Xanar's stats and battle

				while (hp > 0 && Xan_hp > 0)
				{
					cout << endl << name << "'s Stats:				Xanar's Stats:" << endl << "Weapon: " << weap << "				Weapon: Titanium Claws" << endl << "Armor: " << arm << "				Armor: Scaled Armor" << endl << "Power: " << power << "					Power: " << Xan_pow << endl << "Speed: " << speed << "					Speed: " << Xan_spe << endl << "Accuracy: " << accuracy << "					Accuracy: " << Xan_acc << endl << "HP: " << hp << "						HP: " << Xan_hp << endl << "Strength: " << strength << "					Strength: " << Xan_str << endl;
					cout << endl << droid << ": What would you like to do?" << endl << endl << "(1) Run" << endl << "(2) Strike" << endl << "(3) Dodge" << endl << "(4) Block" << endl << endl << "Make your selection by entering the associated letter" << endl << "(Entry is case sensitive): ";
					cin >> action;
					switch (action)
					{
					case 1:
						if (speed >= Xan_spe)
						{
							cout << endl << droid << ": You got away!" << endl;
							Xan_hp = 0;
						}
						else
						{
							cout << endl << droid << ": You didn't get away" << endl << "You were hit!" << endl << "-" << Xan_pow << " hp" << endl;
							hp = hp - Xan_pow;
						}
						break;

					case 2:
						if (accuracy >= Xan_spe)
						{
							cout << endl << droid << ": That's a HIT! Great job!" << endl << "Xanar lost " << power << " hp" << endl;
							Xan_hp = Xan_hp - power;
						}
						else
						{
							cout << endl << droid << ": You missed. You were hit." << endl << "-" << Xan_pow << " hp" << endl;
							hp = hp - Xan_pow;
						}
						break;

					case 3:
						if (speed > Xan_acc)
						{
							cout << endl << droid << ": You dodge the Xanar's attack!" << endl << "It appears that the Xanar is getting tired and lost 1 power." << endl;
							Xan_pow = Xan_pow - 1;
						}
						else
						{
							cout << endl << droid << ": You were hit." << endl << "-" << Xan_pow << "hp" << endl;
							hp = hp - Xan_pow;
						}
						break;

					case 4:
						if (strength > Xan_pow)
						{
							cout << endl << droid << ": You blocked the Xanar's attack!" << endl << "It appears that the Xanar is getting tired and lost 1 speed." << endl;
							Xan_spe = Xan_spe - 1;
						}
						else
						{
							cout << endl << droid << ": Your block failed. You were hit." << endl << "-" << Xan_pow << " hp" << endl;
							hp = hp - Xan_pow;
						}
						break;

					default:
					{
						cout << endl << droid << ": System Error. Entry does not compute." << endl << "You were hit!" << endl << "-" << Xan_pow << "hp" << endl;
						hp = hp - Xan_pow;
						break;
					}

					}
				}
				if (Xan_hp <= 0)
					cout << endl << droid << ": You defeted the Xanar! That was a close one!" << endl;

				else
				{
					cout << endl << droid << ": You were defeted the Xanar!" << endl;
					j = 0;
				}

				cout << endl << droid << ": Oh no. It is another Xanar. You will have to fight him to continue the mission. Analyzing the enemy..." << endl;

				//Randomly generate Xanar's stats
				srand(time(NULL));

				Xan_pow = rand() % 5 + 1;
				Xan_spe = rand() % 6 + 1;
				Xan_acc = rand() % 5 + 1;
				Xan_hp = rand() % 5 + 1;
				Xan_str = rand() % 5 + 1;

				//Display players stats, Xanar's stats and battle

				while (hp > 0 && Xan_hp > 0)
				{
					cout << endl << name << "'s Stats:				Xanar's Stats:" << endl << "Weapon: " << weap << "				Weapon: Titanium Claws" << endl << "Armor: " << arm << "				Armor: Scaled Armor" << endl << "Power: " << power << "					Power: " << Xan_pow << endl << "Speed: " << speed << "					Speed: " << Xan_spe << endl << "Accuracy: " << accuracy << "					Accuracy: " << Xan_acc << endl << "HP: " << hp << "						HP: " << Xan_hp << endl << "Strength: " << strength << "					Strength: " << Xan_str << endl;
					cout << endl << droid << ": What would you like to do?" << endl << endl << "(1) Run" << endl << "(2) Strike" << endl << "(3) Dodge" << endl << "(4) Block" << endl << endl << "Make your selection by entering the associated letter" << endl << "(Entry is case sensitive): ";
					cin >> action;
					switch (action)
					{
					case 1:
						if (speed >= Xan_spe)
						{
							cout << endl << droid << ": You got away!" << endl;
							Xan_hp = 0;
						}
						else
						{
							cout << endl << droid << ": You didn't get away" << endl << "You were hit!" << endl << "-" << Xan_pow << " hp" << endl;
							hp = hp - Xan_pow;
						}
						break;

					case 2:
						if (accuracy >= Xan_spe)
						{
							cout << endl << droid << ": That's a HIT! Great job!" << endl << "Xanar lost " << power << " hp" << endl;
							Xan_hp = Xan_hp - power;
						}
						else
						{
							cout << endl << droid << ": You missed. You were hit." << endl << "-" << Xan_pow << " hp" << endl;
							hp = hp - Xan_pow;
						}
						break;

					case 3:
						if (speed > Xan_acc)
						{
							cout << endl << droid << ": You dodge the Xanar's attack!" << endl << "It appears that the Xanar is getting tired and lost 1 power." << endl;
							Xan_pow = Xan_pow - 1;
						}
						else
						{
							cout << endl << droid << ": You were hit." << endl << "-" << Xan_pow << "hp" << endl;
							hp = hp - Xan_pow;
						}
						break;

					case 4:
						if (strength > Xan_pow)
						{
							cout << endl << droid << ": You blocked the Xanar's attack!" << endl << "It appears that the Xanar is getting tired and lost 1 speed." << endl;
							Xan_spe = Xan_spe - 1;
						}
						else
						{
							cout << endl << droid << ": Your block failed. You were hit." << endl << "-" << Xan_pow << " hp" << endl;
							hp = hp - Xan_pow;
						}
						break;

					default:
					{
						cout << endl << droid << ": System Error. Entry does not compute." << endl << "You were hit!" << endl << "-" << Xan_pow << "hp" << endl;
						hp = hp - Xan_pow;
						break;
					}

					}
				}
				if (Xan_hp <= 0)
					cout << endl << droid << ": You defeted the Xanar! That was a close one!" << endl;

				else
				{
					cout << endl << droid << ": You were defeted the Xanar!" << endl;
					j = 0;
				}
				j = 0;
			}

			if (hp > 0)
			{
				cout << droid << ": YOU DEFEATED THE TORUS ARMY!!!!!! YOU WIN" << endl << "Would you like to play again?" << endl << "Enter 1 for yes and 0 for no: ";
				cin >> s;
				cout << s << endl << endl;
			}
			else
			{
				cout << endl << droid << ": You Lose!" << endl << "Would you like to play again?" << endl << "Enter 1 for yes any other number for no: ";
				cin >> s;
				cout << s << endl << endl;
			}

			i = 0;
			power = 0;
			speed = 0;
			accuracy = 0;
			strength = 0;
			hp = 0;

		} while (s == 1);

	system("pause");
	return 0;
}