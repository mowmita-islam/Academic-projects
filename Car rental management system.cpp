#include <iostream>

using namespace std;

int day;//intiger variable
string car,name,mobile,email,address;//string variable

void menu1()
{
cout<<"chose which type of car u want to rent:"<<endl;
cout<<"1.private"<<endl;
cout<<"2.jeep"<<endl;
cout<<"3.noah"<<endl;
cout<<"4.hilex"<<endl;
cout<<"0.back to main menu"<<endl;

}
void inputDetails()
{
cout<<"Enter the details:"<<endl;
cout<<"Enter the day duration for your rent: "<<endl;
cin>>day;
cout<<"Tap your name:"<<endl;
cin>>name;
cout<<"Your mobile number:"<<endl;
cin>>mobile;
cout<<"Your address:"<<endl;
cin>>address;
cout<<"Your email:"<<endl;
cin>>email;
cout<<"\nThank you for being with us:"<<endl;
}
void printDetails()
{
cout<<"Car type:"<<car<<endl;
cout<<"Rent duration:"<<day<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Mobile:"<<mobile<<endl;
cout<<"Address:"<<address<<endl;
cout<<"Email:"<<email<<endl;

}

int main()
{
int option;
cout<<"welcome to car rental system"<<endl;

menu1();
cout<<"option:"<<endl;
cin>>option;

switch(option)//if(option)
{


case 1://else

car="private";
cout<<"For private car cost:=5000/- per day including vat"<<endl;
inputDetails();
break;
case 2://if else

car="jeep";
cout<<"For jeep car cost:=4000/- per day including vat"<<endl;
inputDetails();
break;
case 3://if else

car="noah";
cout<<"For noah car cost:=6000/- per day including vat"<<endl;
inputDetails();
break;
case 4://else

car="hilex";
cout<<"For hilex car cost:=8000/- per day including vat"<<endl;
inputDetails();
break;
case 0:
cout<<"Thank you for your time || Drive safe"<<endl;
inputDetails();
break;
default:
cout<<"Invalid option"<<endl;

}


printDetails();


return 0;
}
