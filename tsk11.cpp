#include<iostream>
using namespace std;
main()
{
cout<<"Enter age:";
int age;
cin>>age;
cout<<"Enter number of timmes moved:";
int moves;
cin>>moves;
int average=age/(moves+1);
cout<<"Average years lived in one house="<<average<<endl;    
}