#include <iostream>
using namespace std;
// Nästlade for-satser
// flerdimensionella talfält

int main()
{
  int falt[10][10];
  
  
  
  for (int j=0; j<10; j++)
  {
      for (int i=0; i<10; i++)
      {
	
	falt[j][i] = j+i;
	
      } 
      
  }
  cout << "Inmatningen i det tvådimensionella fältet klart" << endl;
  
  for (int j=0; j<10; j++)
  {
      for (int i=0; i<10; i++)
      {
	
	cout << falt[j][i] << ' ';
	
      } 
      
      cout << endl;
  }
  
  
  
  return 0;
}
