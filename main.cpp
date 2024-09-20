#include <iostream>
#include "rolls.h"
using namespace std;
int main(){
	int shooterRoll[2],faderRoll[2];
	int diceOne,count, diceTwo;
	bool win = false;
        string shooter, fader, playerOne, playerTwo;
	cout << "----GLIESE DICE-ROLLING GAME WITH TWO PLAYERS----" << endl <<endl;
	cout << "Player 1, please enter your name: ";
       	cin >> playerOne;
	cout << "Player 2, please enter your name: ";
       	cin >> playerTwo;
	while(true){
		cout<< playerOne << ", press enter to roll: ";
		cin.ignore();         	
		cin.get(); 
		diceOne = roll();
		cout << playerOne <<": " << diceOne << endl;
	        cout<< playerTwo << ", press enter to roll: ";
		cin.get(); 
		diceTwo = roll();
		cout << playerTwo <<": " << diceTwo << endl;
		if(diceOne>diceTwo){
			break;
		} else if (diceTwo > diceOne) {
			break;
		} else {
			cout << "Thats a tie! Roll again...";
			continue;	
		}
		
	}	
	if(diceOne>diceTwo){
		shooter=playerOne;
       		fader=playerTwo;		
	} else {	
		shooter=playerTwo;
		fader=playerOne;
	}
	count = 0;	
	cout<< shooter<<" starts first.";
	while(count<3){
		cout<< shooter << ", press enter to roll.";
		cin.get(); 
		shooterRoll[0] = roll();
		shooterRoll[1] = roll();
		cout<< shooter <<" : "<< shooterRoll[0] <<"-"<< shooterRoll[1] <<endl;
		
		if((shooterRoll[0] == shooterRoll[1]) && shooterRoll[0]>=5){
			cout << shooter <<" wins!"<<endl;
			win = true;
			break;
		} else if((shooterRoll[0] == shooterRoll[1]) && shooterRoll[0]<5){
			cout << fader << " wins!"<<endl;
			win = true;
			break;
		} 
		cout<< fader << ", press enter to roll.";
		cin.get();
		faderRoll[0] = roll();
                faderRoll[1] = roll();
		cout<< fader <<" : " <<faderRoll[0] << "-" << faderRoll[1]<<endl;
		
		if((faderRoll[0] == faderRoll[1]) && faderRoll[0]>=5){
		       	cout << fader <<" wins!"<<endl;
			win = true;
			break;
		} else if((faderRoll[0] == faderRoll[1]) && faderRoll[0]<5){
			cout << shooter << " wins!"<<endl;
			win = true;
			break;
		}
		count++;
	}
	if(win == false){
		cout <<"Tie!"<<endl;
	}	
	return 0;
}

