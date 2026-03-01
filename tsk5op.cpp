#include <iostream>
using namespace std;

int main()
{
 string name;
 int weightTolose,daysRequired;
 cout<<" Enter your name:";
 cin>> name;
 cout<<"Enter weight to lose(kg):";
 cin>> weightTolose;
 daysRequired=weightTolose*15;
 cout<<name<<" will lose"<<weightTolose<<" kg of weigth following the doctor suggestion in"<<daysRequired<<" days."<<endl;
}