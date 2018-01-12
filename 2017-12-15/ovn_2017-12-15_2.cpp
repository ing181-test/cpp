#include <iostream>
using namespace std;
int main()
{
  int falt[]={9,4,-45,8,0,-4,7,-7,9,-10};
     //startvärde; villkor; ändring
  for (int i=0; i<10; i++)
  {
    cout << falt[i] << " ";
  }
  cout << endl;
  for (int i=0; i<10; i++)//en ny variabel i
  {
    if (falt[i] > 0)
    {
      falt[i] = falt[i] * (-1);
    }
  }
  for (int i=0; i<10; i++)//en till ny variabel i
  {
    cout << falt[i] << " ";
  }
  
  
  return 0;
}
