#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "Membuat Segitiga Angka Terbalik" << endl;

  int tinggi_segitiga,i,j;
  cout << "" << endl;
 
  for(i = 1; i <= 5; i++)
   {
    for(j = 0; j <= 5-i; j++) 
	{
      cout << j + 1 << " ";
    }
    cout << endl;
  }
 
  return 0;
}
