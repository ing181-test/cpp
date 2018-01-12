 
#include <iostream>
#include <limits.h>
#include <locale>
using namespace std;
// switch-case, sidan 90
int main()
{
  	for (int i=0;i<127;i++)
{
    std::cout << (char)i << " ";
}
cout << endl;
  
  
  /*
  int tal = 2;
  switch (tal) // heltal, (char, int)
  {
    case 1:
    cout << "tal är 1" << endl;
    break;
    case 2:
    cout << "tal är 2" << endl;
    break;
    case 3:
    cout << "tal är 3" << endl;
    break;
    default:
    cout << "tal är något annat" << endl;
  }
  */
  // Hit
  /*
  if (tal==1) // Något som går att utvärdera sant/falskt
  {
    cout << "tal är 1" << endl;
  }
  else if (tal==2)
  {
    cout << "tal är 2" << endl;
  }
  else if (tal==3)
  {
    cout << "tal är 3" << endl;
  }
  else
  {
    cout << "tal är något annat" << endl;
  }
  */
  //Hit
  
  
  return 0;
}