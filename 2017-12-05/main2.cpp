 // Uppgift 7.2, sidan 102
 // Tre sätt att lösa uppgiften
 
 // Villkor 1:
 // Avståndet hemmet - arbetsplatsen minst 50 km
 
 // Vilkor 2 för sambo:
 // Varaktighet högst 3 år
 
 // Vilkor 2 för ensamstående
 // Varaktighet högst 1 år
 
#include <iostream>
using namespace std;
int main()
{
  
  // Metod 1
  // Ett villkor i if-satserna
  
   int avstand;
 cout << "Ditt avstånd till arbetet (km)? ";
 cin >> avstand;
 
 if (avstand <= 50)
 {
   cout << "Du får inget skatteavdrag" << endl;
 }
 else
 {
	char civilstand;
	cout << "Sambo eller ensamstående (s/e)? ";
	cin >> civilstand;
	int ar;
	cout << "Hur länge kommer din dubbla bosättning att vara (år)? ";
	cin >> ar;
	
	
	if (civilstand == 'e')
	{
	    if (ar<=1)
	    {
	      cout << "Du får skatteavdrag" << endl;
	    }
	    else
	    {
	      cout << "Du får EJ skatteavdrag" << endl;
	      
	    }
	  
	}
	
         if (civilstand == 's')
	{
	    if (ar<=3)
	    {
	      cout << "Du får skatteavdrag" << endl;
	    }
	    else
	    {
	      cout << "Du får EJ skatteavdrag" << endl;
	      
	    }
	  
	}
   
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

  // Metod 2
  // Sammansatta vilkor i if-satserna

 int avstand;
 cout << "Ditt avstånd till arbetet (km)? ";
 cin >> avstand;
 
 if (avstand <= 50)
 {
   cout << "Du får EJ skatteavdrag" << endl;
 }
 else
 {
	char civilstand;
	cout << "Sambo eller ensamstående (s/e)? ";
	cin >> civilstand;
	int ar;
	cout << "Hur länge kommer din dubbla bosättning att vara (år)? ";
	cin >> ar;
	
	if ( ( (civilstand=='s') && (ar<=3) )  || ( (civilstand='e') && (ar<=1) ) ) 
	{
	  cout << "Du får skatteavdrag" << endl;
	}
	else
	  cout << "Du får EJ skatteavdrag" << endl;
   
 }

  // Metod 3
  // Ännu mer sammansatta vilkor i if-satserna
 
int avstand;
cout << "Ditt avstånd till arbetet (km)? ";
cin >> avstand;
 
 
cin >> civilstand;
int ar;
cout << "Hur länge kommer din dubbla bosättning att vara (år)? ";
cin >> ar;
  
int ar;
cout << "Hur länge kommer din dubbla bosättning att vara (år)? ";
cin >> ar; 
 
 
 if ( (avstand>=50) &&  (  ( (civilstand=='s') && (ar<=3) )  || ( (civilstand='e') && (ar<=1) )  )  )
   cout << "Du får skatteavdrag" << endl;
 else
   cout << "Du får EJ skatteavdrag" << endl;

 

 return 0;
}
 
 
 
 
 
 
 
 
 