#include<iostream>
using namespace std;

bool testPIN(const int set1[], const int set2[], int size);

int main()
{
  const int NUM_DIGITS=4;
  int pin1[NUM_DIGITS]={1,0,1,0};
  int pin2[NUM_DIGITS];

  cout<<"Enter enter four digits with a space:"<<endl;
for(int i=0; i<NUM_DIGITS; i++){
cin>>pin2[i];
}
if(testPIN(pin1,pin2, NUM_DIGITS)){
cout<<"SUCCESS: pin1 and pin2 are reported to be the same.\n";
}else{
cout<<"ERROR: pin1 and pin2 are reported to be the different.\n";
}

return 0;
}

bool testPIN(const int custPIN[], const int databasePIN[],int size)
{
  for(int index=0; index<size; index++)
  {
    if(custPIN[index] !=databasePIN[index])
    return false;
  }
  return true;
}
