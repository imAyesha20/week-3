#include <iostream>
using namespace std;

int main()
{
 int imposter,player;
 cout<<"Enter imposter count:";
 cin>>imposter;
 cout<<"Enter player count:";
 cin>>player;
 int chance=100.0 * imposter/player;
 cout<<"chance of beimg imp="<<chance<<"%"<<endl;
}