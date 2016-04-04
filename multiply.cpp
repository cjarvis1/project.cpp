#include <iostream>
using namespace std;
int main (){

int a,b;
cout<< " Today we are going to multiply two numbers!";
cout<< " Please enter the first number you wish to multiply: ";
cin>>a;
cout<< " Now please enter a second number you wish to multiply by the first number: ";
cin>>b;
int sum = a*b;
cout<< " If we multiply "<< a << " by " << b << " we get a sum of "<<sum <<" !" << endl;
cout<< " Did you think that was pretty cool? "<<endl;
string input;
cin>> input;
string yes = "yes";
string no = "no";
if( input == "yes"){
    cout<< " Math is Fun! "<< endl;
}
else if (input== "no"){
    cout<< " Well hopefully one day you enjoy math! "<<endl;
}

else{
    cout<< "I'm sorry I didn't quite understand that!"<<endl;
}
cout<< " Thank you very much for playing! Hope you enjoyed learning multiplication with me! ";

return 0;


}
