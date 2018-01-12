/*Exempel på meny, program för att 
 * räkna ut summan av en kunds varor
 * Menyval
 * Avsluta
 * Ny kund
 * Fortsätta
 */
#include <iostream>
using namespace std;
int main()
{
  char val;
  float summa=0, pris;
  while (val != 'a')
  {
    cout << " *** Meny *** " << endl;
    cout << " *** Ny kund (n) " << endl;
    cout << " *** Avsluta (a) " << endl;
    cout << " *** Fortsätt mata in varor (f) " << endl << endl;
    cin >> val;
    
    if (val == 'n')
      summa=0;
  
    else 
    {
      if (val == 'f')
      {
	cout << "Varans pris (kronor) ";
	cin >> pris;
	summa = summa + pris;
	cout << "Du har handlat för " << summa << " kronor\n\n";
      }
      
    }
  
  }
  
  return 0;
}
