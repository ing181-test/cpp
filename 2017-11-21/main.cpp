#include<iostream>
using namespace std;
int main()
{
  // Ett val mellan två
  // alternativ, selektion
  // i ett aktivitetsdiagram
  // Något som entydigt
  // är sant eller falskt
  cout << "Mata in ett heltal ";
  int i;
  cin >> i;
  if (i >= 10) // ...om inte sant
  {
    cout << "Du matade in ett tal, större eller lika med 10" << endl;
  }
  else  // ...utförs detta i stället
  {
    cout << "Du matade in ett tal, mindre än 10" << endl;
  }
  
  
  return 0;
}

