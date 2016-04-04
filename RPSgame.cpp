// THIS CODE IS NOT COMPLETE YET
//Rock Paper Scissors will be the death of me lol
#include <iostream>
using namespace std;
int main(){
char Rps=0;
char option= 'y';
cout<<" Welcome to the thrilling world of RPS!"<<endl<<"...Also known by its less common name Rock, Paper, Scissors!"<<endl;
cout<< "Would you like to play a game with me?(y/n)"<<endl<<" ...Pretty Please!"<<endl;
cin<<option;
while (option =='y'|| option =='Y'){
    if(option=='y'){
        cout<< "you've made a good choice! Please pick an option..."<<endl<< "1) Rock "<<endl << "2) Paper "<< endl<< "3) Scissors "<<endl;
        cin>> Rps;
        if(Rps==1){
            cout<< " You have chosen Rock!"<<endl;

        }
    }//end of "while" if loop
    else{
        cout<< " Thats too bad! Guess you're just to chicken!"<<endl<< "... Bawk bawk!"<<endl;
    }//end of "while" else loop
}// end of while statement


}//end of int main
