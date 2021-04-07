#include<iostream>
using namespace std;


int main()
{
  int numDays,hours,minutes,seconds;
  cout<<"How many days you plan to spend on your vacation: "<<endl;
  cin>>numDays;
  hours=numDays*24;
  minutes=hours*60;
  seconds=minutes*60;
  cout<<"Hours spend in vacation are: "<<hours<<endl;
  cout<<"minutes spend in vacation are: "<<minutes<<endl;
  cout<<"seconds spend in vacation are: "<<seconds<<endl;


  return true;
}
