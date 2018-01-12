#include <iostream>
#include <string>
using namespace std;
int main()
{
  s = "Snart helg";
  char b = s.at(3);
  int hittat = s.find('h',0);
  
  string dels = s.substr(0,5);
  
  
  
  /*
  string in;
  cin >> in;
  cin.ignore(1000,'\n');
  // Klipper av utmatningen
  // vid mellanslag
  cout << in << endl;
  // klipper av vid nyradstecken
  getline(cin, in);
  cout << in << endl;
  */
  
  //cin.ignore(1000,'\n');
  /*
  string s = "Observera";
  int hitta = s.find("seg",0);
  cout << hitta << endl;
  string delstring = s.substr(2,7);
  cout << delstring << endl;
  */
  
  /*
  string strang = "Lektonssal";
  cout << strang << endl;
  strang = "kul";
  cout << strang << endl;
  int langd = strang.size();
  cout << langd << endl;
  int hitta = strang.find('u',1);
  cout << hitta << endl;
  */
  return 0;
}
