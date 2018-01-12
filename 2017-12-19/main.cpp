/*Antalet råttor i Kattbo kommun är för närvarande 100 st.
 *Antalet fördubblas varje månad. Hur många månader tar det innan
 *antalet råttor uppnått 1 miljon
 */ 

#include <iostream>
using namespace std;
int main()
{
  const int MAX_ANTAL = 1000000;
  int antal = 100;
  int antal_manader = 0;
  
  while (antal < MAX_ANTAL)
  {
    antal_manader++;
    antal = antal * 2;
    
    
  }
  
  cout << "Efter " << antal_manader << " hela månader är antalet råttor " << antal << endl;
  
  return 0;
}
