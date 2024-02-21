

#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>


using namespace std;
int main(){
	cout<<"      CCCCCCCCCCCC    AAAAAAAAAAAA    SSSSSSSSS    IIIIIIIIIIII   NNNN NN          NNNN  OOOOOOOOOOOOOO"<<endl;
	cout<<"      CCCCCCCCCCCC    AAAAAAAAAAAA    SSSSSSSSS    IIIIIIIIIIII   NNNN  NN         NNNN  OOOOOOOOOOOOOO"<<endl;
	cout<<"      CC              AA        AA    SS                II        NNNN   NN        NNNN  OO          OO"<<endl;
	cout<<"      CC              AA        AA    SS                II        NNNN    NN       NNNN  OO          OO"<<endl;
	cout<<"      CC              AA        AA    SSSSSSSSS         II        NNNN     NN      NNNN  OO          OO"<<endl;
	cout<<"      CC              AAAAAAAAAAAA    SSSSSSSSS         II        NNNN      NN     NNNN  OO          OO"<<endl;
	cout<<"      CC              AAAAAAAAAAAA           SS         II        NNNN       NN    NNNN  OO          OO"<<endl;
	cout<<"      CC              AA        AA           SS         II        NNNN        NN   NNNN  OO          OO"<<endl;
	cout<<"      CCCCCCCCCCCC    AA        AA    SSSSSSSSS    IIIIIIIIIIII   NNNN         NN  NNNN  OOOOOOOOOOOOOO"<<endl;
	cout<<"      CCCCCCCCCCCC    AA        AA    SSSSSSSSS    IIIIIIIIIIII   NNNN          NN NNNN  OOOOOOOOOOOOOO"<<endl<<endl<<endl;
	
cout<<"                                        By Ukasha Abdul Majeed & Arslan Aslam"<<endl<<endl<<endl;
	
	cout<<"What is your name: ";
	string name;
	cin>>name;			
	 cout << "\nHow much money do you have: ";
     int balance;
     cin >> balance;
     
	 while(true){
	 	if(balance <= 0){
	 		cout << "You ran out of money.";
	 		break;
		}
		cout << "YOUR BALANCE: " << balance << endl;
	 	cout << "Do you want to play the game(Yes or No): ";
	 	string choice;
	 	cin>>choice;
	 	
	 	if(choice=="yes" || choice=="YES" || choice=="Y" || choice=="y"){
	 		cout << "How much amount do you want to bid?";
	 		double bidAmount;
	 		cin >> bidAmount;
	 		
	 		if(balance<bidAmount){
	 			cout<<"Please enter amount in balance range!!!!"<<endl;
	 			continue;
			 }
			 
	 		cout << "On which number do you want to bid on? (input range: 1 to 5): ";
	 		int number;
	 		cin >> number;
	 		srand(time(0));
	 		int random = rand()%5+1;
	 		cout<<"The winning number is: "<<random<<endl;
	 		
			if(random == number){
				balance += bidAmount*5;
	 			cout << "Congrats!"<<name<<" You won "<<bidAmount*4<<"Rs.\n";
	 			continue;
			}
			else{
				balance -= bidAmount;
				cout <<name<<" You lost!!!! Better Luck next time!!!!\n";
			}
		}
		else{
			cout << "GAME FINISHED..."<<endl;
			if(balance>0){
			cout<<balance<<" Rupees Refunded......";
		}
			break;
		}
	 }
	
	
	return 0;
}
