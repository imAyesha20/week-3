#include<iostream>
using namespace std;
main()
{
cout<<"Enter name of the movie:";
string moviename;
cin>> moviename;
cout<<"Enter price of an adult ticket:$";
int adultprice;
cin>> adultprice;
cout<<"Enter price of a child ticket:$";
int childprice;
cin>> childprice;
cout<<"Enter number of adult tickets sold:";
int adultsold;
cin>> adultsold;
cout<<"Enter number of child tickets sold:";
int childsold;
cin>> childsold;
cout<<"Enter percentage of the total money to donate to charity:";
float donationpercentage;
cin>> donationpercentage;
int TotalEarned=(adultprice * adultsold)+(childprice*childsold);
int donationAmount=TotalEarned*(donationpercentage/100);
int remainingamount=TotalEarned-donationAmount;
cout<<"Movie Name :"<<moviename<<endl;
cout<<"Total Money Earned: $"<<TotalEarned<<endl;
cout<<"Donation to Charity: $"<<donationpercentage<<endl;
cout<<"Remaining Amount: $"<<remainingamount<<endl;
}


