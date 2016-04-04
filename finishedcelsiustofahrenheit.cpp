//converting celsius to fahrenheit
#include <iostream>
using namespace std;
int main(){
float celsius;
float fahrenheit;
char yes= 'y';
 char option = 'y';

cout<< " Would you like to convert celsius to fahrenheit?(y/n) "<<endl;
cin>> yes;
if(yes=='y'){

while (option== 'y'|| option == 'Y'){

if(option== 'y'){
cout<< " Please enter the temperature in Celsius you would like to convert to Fahrenheit: ";
cin>> celsius;
fahrenheit = (celsius*9.0)/5.0 +32.0;
cout<< " The temperature "<< celsius << " degrees Celsius is equal to "<< fahrenheit << " degrees Fehrenheit"<<endl;
}
else{

}
cout<< " Convert termperature again? (y/n) ";
cin>> option;//changes the control variable

}//end while loop
cout<< "  Thank you for using my celsius to fahrenheit converter! I hope it was useful!"<<endl;
}//end if "yes" loop



return 0;
}//end main
