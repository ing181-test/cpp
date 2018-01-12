#include <iostream>
using namespace std;
// if-else 
// eller
// nestlad if-sats

int main()
{
  int alder, hojd;
  
  // Om du fyllt 10 år eller är minst 130 cm lång
  // får du åka karusellen. 
  
  // if-else
  cout << "Hur gammal är du? (år) ";
  cin >> alder;
  cout << "Hur lång är du? (cm) ";
  cin >> hojd;
  
  if (alder >= 10)
  {
    cout << "Välkommen att åka karusellen!" << endl;
  } 
  else if ( hojd>=130)
  {
    cout << "Välkommen att åka karusellen!" << endl;
  }
  else
  {
    cout << "Du får tyvärr inte åka med på karusellen!" << endl;
  }
  
  
  
  // nestlad if-sats
  
  if (alder >= 10)
  {
    cout << "Välkommen att åka karusellen!" << endl;
  } 
  else 
  {
      if ( hojd>=130)
      {
	cout << "Välkommen att åka karusellen!" << endl;
      }
      else
      {
	cout << "Du får tyvärr inte åka med på karusellen!" << endl;
      }
  }

  
  
  return 0;
}
