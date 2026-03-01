#include<iostream>
using namespace std;
main()
{
cout<<"Enter weight of fertilizer bag:";
int weight;
cin>> weight;
cout<<"Enter cost of the bag:";
int cost;
cin>> cost;
cout<<"Enter size of the area the bag can cover:";
int area;
cin>>area;     
int Priceperpound=cost/weight;
int costpersquarefoot=cost/area;
cout<<"Price per pound:$"<<Priceperpound<<endl;
cout<<"cost per square foot:$"<< costpersquarefoot<<endl;
}