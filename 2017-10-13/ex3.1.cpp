// Exempel 3.1, sidan 40
// Exempel 3.2, sidan 41
#include <iostream>
using namespace std;
int main()
{
  char falt[]={'g','r','a','n','\0'};
  cout << falt[0] << falt[1] << falt[2] << falt[3] << endl;
  cout << falt << endl;
  
  // Rad 13: Ett teckenf�lt med 8 platser skapas
  // 'J','u','l','g','r','a','n','\0'
  char nyfalt[] = "Julgran";
  cout << nyfalt << endl; // Stoppar n�r '\0' hittasl
  
  
  /*
  double tid[]={9.98,10.15};
  cout << "F�ltet inneh�ller f�ljande tider: " << endl;
  cout << tid[0] << "\t" << tid[1] << endl;
  
  double tmp;
  
  // Algoritm f�r att byta plats p�
  // tv� v�rden i ett f�lt
  tmp = tid[0];
  tid[0] = tid[1];
  tid[1] = tmp;
  
  cout << "F�ltet inneh�ller f�ljande tider: " << endl;
  cout << tid[0] << "\t" << tid[1] << endl;
  */
  
  return 0;
}

