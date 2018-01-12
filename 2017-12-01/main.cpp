/* Om slumpen
 * Datorer har svårt att 
 * skapa bra slumptal. 
 * Skapar man ett slumptal
 * eller en sekvens av slumptal
 * blir det alltid samma tal.
 * Slumpen behöver initieras med ett startvärde.
 * Vid samma startvärde blir det alltid samma slump.
 * Trickset är att använda unika startvärden.
 * Använder du antalet sekunder sedan 1 januari 1970
 * får du olika slumptal varje gäng */
#include <iostream>
#include <time.h> // För tiden
#include <cstdlib> // För slumpen
using namespace std;
int main()
{
    
  cout << RAND_MAX << endl; // Största möjliga slumptal
  
  srand(time(NULL)); //initierar ett startvärde för slumpen.
  // Resten vid division med 6 blir alltid
  // ett heltal mellan 0 och 5
  // Adderar du med ett får du ett tal
  // mellan 1 och 6
  
  // Simulering av tärningskast
  cout << (rand() % 6)+1 << endl;
  
  return 0;
}
