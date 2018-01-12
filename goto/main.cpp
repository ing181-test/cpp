 
#include<iostream>
using namespace std;
int main()
{
  cout << "Nr 1" << endl;
  goto label1;
  
  label2:
  cout << "Hoppar vi över!" << endl;
  
  label1:
  cout << "Användning av \"goto\" medför livslång sinnesförvirring!" << endl;
  //goto label2;
  
  
  return 0;
}