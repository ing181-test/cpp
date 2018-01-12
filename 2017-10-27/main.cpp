#include <iostream>
using namespace std;
int main()
{
  
  // övning 4.5 (Prioritetsordning) sidan 60
  int tal = 5 + (6 % 4); // 7, osynliga parenteser 
  tal = 5 + 6 % 4; // 7
  tal = (5 + 6) % 4; // 3, nödvändigt med parenteser
  cout << tal << endl;
  
  
  
  // Exempel 4.2, sidan 55
  int tid = 800; // 800 sek
  int min = tid / 60; // Antalet hela min som rymms i 800 sek
  int sek = tid % 60; // sek som blir över
  cout << tid << " s = " << min << " min och " << sek << " s\n";
  
  tal=2;
  // tal tilldelas sitt eget värde (2) + 1
  // tal kommer att ha värdet 3
     tal = tal + 1; // 3
     tal += 1; // 4
     cout << tal << endl; // 4

    int tal2 = --tal; // Minskning innan tilldelning
    tal2 = tal--; // Minskning efter tilldelning
    cout << tal2 << endl; 
  
  float ft = 9;
  float fn = 10;
  int t = 9;
  int n = 10;
  
  
  cout << (ft / fn) << endl; // 0.9
  cout << (t / n) << endl; // 0
  cout << (t % n) << endl; // 9
 
  
  return 0;
}
