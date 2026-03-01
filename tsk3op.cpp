#include <iostream>
using namespace std;

int main()
{
 int acceleration,time,velocity;
 cout<<"Enter initial velocity:";
 cin>> velocity;
 cout<<"Enter acceleration:";
 cin>> acceleration;
 cout<<"Enter time:";
 cin>> time;
 int finalvelocity=velocity+(acceleration*time);
 cout<<"final velocity:"<<finalvelocity<<endl;
}