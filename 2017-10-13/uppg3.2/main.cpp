#include <iostream>
using namespace std;
int main()
{
  
  int intfalt[4];
  cout << "Mata in fyra heltal: ";
  cin >> intfalt[0] >> intfalt[1] >> intfalt[2] >> intfalt[3];
  cout << "Du matade in " << intfalt[0] << ", " << intfalt[1] << ", " << intfalt[2] << " och " << intfalt[3] << endl;
  
  int tmp;
  
  tmp = intfalt[0];
  intfalt[0] = intfalt[3];
  intfalt[3] = tmp;
  
   cout << "Du matade in " << intfalt[0] << ", " << intfalt[1] << ", " << intfalt[2] << " och " << intfalt[3] << endl;
  
  tmp = intfalt[1];
  intfalt[1] = intfalt[2];
  intfalt[2] = tmp;
  
  
    cout << "Du matade in " << intfalt[0] << ", " << intfalt[1] << ", " << intfalt[2] << " och " << intfalt[3] << endl;
  
  return 0;
}
