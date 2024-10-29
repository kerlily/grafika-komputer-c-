#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "Membuat Segita Angka while" << endl;
  int i,j;
  cout << endl;
 i =0;
 while(i<=5)
 {
 	j=1;
 	while(j<=i)
 	{
 		cout << j <<" ";
 		j=j+1;
      i=i+1;
       cout << endl;
 }
  return 0;
}
