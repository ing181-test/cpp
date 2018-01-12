 // kap. 3 fält
#include <iostream>
// Vi inför string-klassen
// boken sid 44ff
#include <string>
using namespace std;
int main()
{
  // teckenfält, C-strängar
  // Du bestämmer storleken när
  // strängen skapas
  // Du måste deklarera den innan den kan användas
  /*
  char namn[100]; // 0-99
  namn[66] = 'A'; // heltalet 65
  cout << namn[66] << endl;
  // Funkar bar med charfält
  char fnamn[] = "Bengt";
  cout << fnamn << endl;
  
  int hel[100]; // 0-99
  hel[66] = 65; // heltalet 65
  cout << hel[66] << endl;
  //cout << hel << endl; 
  string s;
  s = "Marks ";
  string s1 = "Gymnasieskola";
  s = s+s1;
  cout << s << endl;
  s.at(0) = 'P';
  cout << s << endl;
  int antal = s.size();
  cout << antal << endl;
  
  // Vi söker efter positionen
  // där "Gym" börjar
  int hitta = s.find("Gym",0);
  cout << hitta << endl;
  // Vi plockar ut 8 tecken ur s
  // med start där "Gym" börjar
  // och placerar detta i stringen
  // delstring
  string delstring = s.substr(hitta,8);
  cout << delstring << endl;
  */
  // Inmatning
   string namn, nyttnamn;
   int alder;
   //cin >> namn;
   getline(cin,namn);
   cout << "Du matade in 1 " << namn << endl;
   cin >> alder;
   // Nyradstecknet '\n' ligger kvar
   // först och förhindrar ny inmatning
   cin.ignore(1000,'\n');
   getline(cin,nyttnamn);
   cout << "Du matade in 2 " << nyttnamn << endl;
  return 0;
}












