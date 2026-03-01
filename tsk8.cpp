#include<iostream>
using namespace std;
main()
{
cout<<"Enter vegetable price per kilogram(in coins):";
float vegprice;
cin>>vegprice;
cout<<"Enter fruit price per kilogram(in coins):";
float fruitprice;
cin>> fruitprice;
cout<<"Enter total kilograms of vegetables:";
int vegKg;
cin>> vegKg;
cout<<"Enter total kilograms of fruits:";
int fruitKg;
cin>> fruitKg;
int totalcoins=(vegprice*vegKg)+(fruitprice*fruitKg);
int totalRps=totalcoins/1.94;
cout<<"Total earning in rps:"<<totalRps<<endl;
}