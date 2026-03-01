#include<iostream>
using namespace std;
main()
{
cout<<"Enter total paint area:";
int area;
cin>> area;
cout<<"Enter wall width(in meters):";
int width;
cin>>width;
cout<<"Enter wall height(in meters):";
int height;
cin>> height;
int wallArea=width*height;
int completeWalls=area/wallArea;
cout<<"Number ofcomplete walls that can be painted="<<completeWalls<<endl;
}