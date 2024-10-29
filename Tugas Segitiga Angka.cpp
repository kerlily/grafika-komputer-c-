#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "Membuat Segita Angka" << endl;
 
  int i,j;
  cout << endl;
 
  for(i=1;i<=5;i++) 
  {
    for(j=1;j<=i;j++)
	 {
      cout << j <<" ";
     }
    cout << endl;
  }
 
  return 0;
}
