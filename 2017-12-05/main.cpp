#include <iostream>
using namespace std;
int main()
{
  
  // 7.2, sidan 102
  // Version 1
  int avstand;
  cout << "Ditt avstånd till arbetet (km)? ";
  cin >> avstand;
  char civilstand;
  cout << "Sambo eller ensamstående (s/e) ";
  cin >> civilstand;
  cout << "Hur länge kommer din dubbla bosättning att vara? (år)? ";
  int ar;
  cin >> ar;
  
  if ( (avstand >= 50) && ( ((civilstand=='s') && (ar <= 3)) || ((civilstand=='e') && (ar <= 1)) ))
  {
    
    cout << "Du får skatteavdrag" << endl;
    
  }
  else
    cout << "Du får inget skatteavdrag" << endl;
  
  
 // Version 2
 // Med nestlade if-satser, bättre?
  int avstand;
  cout << "Ditt avstånd till arbetet (km)? ";
  cin >> avstand;
  if ( avstand <= 50)
  {
    cout << "Du får inget skatteavdrag" << endl;
  }
  else
  {
	char civilstand;
	cout << "Sambo eller ensamstående (s/e) ";
	cin >> civilstand;
	cout << "Hur länge kommer din dubbla bosättning att vara? (år)? ";
	int ar;
	cin >> ar;
	
	if (  ( (civilstand=='s') && (ar <= 3) ) || ( (civilstand=='e') && (ar <= 1) )  )
	{
	      cout << "Du får skatteavdrag" << endl;
	}
	else
	{
	      cout << "Du får inget skatteavdrag" << endl;
	}
    
  }
  // Alla variabler (plats i minnet) skapas när programmet
  // startas, även om de aldrig kommer att användas.
 
  return 0;
}
