//Tip calculator
#include <iostream>
using namespace std;
int main(){
    char option = 'y';
    float TotalBill;
int Tip= 0;

    cout<< " Would you like to calculate the percentage you need to tip?(y/n) "<<endl;
    cin>> option;
    while(option== 'y'|| option== 'Y'){
            if(option=='y'){

cout<< " Please enter the total amount on your bill. "<<endl;
cin>> TotalBill;
cout<< " How much would you like to give as a tip? "<<endl << " 1) 15%"<<endl<<" 2) 20%" << endl << " 3) 30%" << endl;
cin>> Tip;
if(Tip == 1){
    cout<< " The amount you should tip is "<< TotalBill*0.15<< "."<<endl;
}
else if( Tip ==2){
    cout<< " The amount you should tip is "<< TotalBill*0.20<< "."<<endl;
}
else if( Tip ==3){
    cout<< " The total amount you should tip is "<< TotalBill*0.30<<"."<< endl;
    }
    else{
        cout<< " I'm Sorry that answer is not valid, please try again."<<endl;
    }


            }//end if statement
            else{
            cout<< " Your tip will not be calculated. If this is a mistake please try again. "<<endl;
            }
         cout<< " Would you like to calculate another tip? (y/n) "<<endl;
         cin>>option;   // changes our variable for option ('Y')
    }//end while statement
    cout<< " Thank you for using the tip calculator! We hope it helped!"<<endl;
    return 0;

}// end int main
