#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class sprgame{
	
	public:
     string playername;
    int totalrounds;
    int playerscore;
    int computerscore;
		
   
    sprgame() {
        //genrate random number
        srand(time(0));
    }
    
	public:
	// player name
    void getplayername(){
    	
        cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*"<<"\n";
        cout<<"                 nane"<<"\n";
        cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*"<<"\n";
        
        cout<<"Enter Your Name: ";
        cin>>playername;
    }
    
	public:
    //total rounds
    void gettotalround(){
    	
        cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*"<<"\n";
        cout<<"                 round"<<"\n";
  	cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*"<<"\n";
        
        cout<<playername<<"total rounds : ";
        cin>>totalrounds;
    }
	public:
    //play rounds
    void playround(){
        for(int round=1;round<=totalrounds;round++){
        	
            cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*"<<"\n";
            cout<<"                 game"<<"\n";
            cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*"<<"\n";
            
            cout<<"\nround No: "<<round<<"/"<<totalrounds<<endl;
            cout<<"* "<<playername<<"score: "<<playerscore<<endl;
            cout<<"computer score: "<<computerscore<<endl;

            int playerchoice = getplayerchoice();
            int computerchoice = getcomputerchoice();

            displaychoice(playerchoice, computerchoice);
            roundwinner(playerchoice, computerchoice);
        }
    }
    
	public:
    //player's choice
    int getplayerchoice(){
    	
        int choice;
        
        cout<<"\n1. Rock"<<"\n";
        cout<<"2. Paper"<<"\n";
        cout<<"3. scissors"<<"\n";
        
        do{	cout<<"\nSelect your choice: ";
            cin>>choice;
        }
		while(choice!=1 && choice!=2 && choice!=3);
    }
    
	public:
    //computer's choice
    int getcomputerchoice(){
        return (rand()%3)+1;
    }
    
	public:
	int playerchoice;
	int computerchoice;
	
    //display choices
    void displaychoice(int playerchoice, int computerchoice){
        cout<<"\n"<<playername<<" chose: ";
        switch(playerchoice){
            case 1:
			cout<<"Rock"<<endl;
			break;
			
            case 2:
			cout<<"Paper"<<endl;
			break;
			
            case 3:
			cout<<"Scissors"<<endl;
			break;
        }
        
        cout<<"computer chose: ";
        switch (computerchoice){
            case 1:
			cout<<"Rock"<<endl;
			break;
			
            case 2:
			cout<<"Paper"<<endl;
			break;
			
            case 3:
			cout<<"Scissors"<<endl;
			break;
        }
    }
	public:
    //winner of a round
    void roundwinner(int playerchoice, int computerchoice){
    	
        if (playerchoice==1 && computerchoice==3 || playerchoice==2 && computerchoice==1 || playerchoice==3 && computerchoice==2){
            cout<<"\n"<<playername<<" wins this round!"<<endl;
            playerscore++;
        }
		else if(playerchoice==computerchoice){
            cout<<"\nIt's a draw!"<<endl;
        }
		else{
            cout<<"\ncomputer wins this round!"<<endl;
            computerscore++;
        }
    }
    
	public:
    //display the final score and result of game
    void displayresult(){
    	
       cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*"<<"\n";
       cout<<"                final score "<<"\n";
       cout<<"*__*__*__*__*__*__*__*__*__*__*__*__*__*"<<"\n";
        
        cout<<playername<<"score: "<<playerscore<<endl;
        cout<<"Computer score: "<<computerscore<<endl;

        if(playerscore==computerscore){
            cout<<"\nThe game is a draw!"<<"\n";
        }
		else if(playerscore>computerscore){
            cout<<"\n "<< playername<<", you won the game!"<<"\n";
        }
		else{
            cout<<"\n computer won the game!"<<"\n";
        }
    }
};

main(){
	
    //start the game
    sprgame game;
    game.getplayername();
    game.gettotalround();
    game.playround();
    game.displayresult();
    
}

