#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "Membuat Segita Angka while terbalik" << endl;
 
  int i,j;
  cout << endl;
 i =5;
 while(i>=1)
 {
 	j=1;
 	while(j<=i)
 	{
 		cout << j <<" ";
 		j=j+1;
	 }
     
      i=i-1;
       cout << endl;
 }
   
  return 0;
}
