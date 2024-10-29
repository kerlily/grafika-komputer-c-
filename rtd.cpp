#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

float coba1; \\variabel coba1 bertipe float, manampung bilangan desimal
char coba2[50]; \\ variabel coba2 bertipe char, manampung karakter maksimal 50
cout << "Perkenalan Perintah cin dalam c++" << endl << endl << endl;
cout << "Masukan sebuah angka : “ ; cin>>coba1;
cout << "Masukan sebuah string : “ ; cin>>coba2;
cout << endl; \\untuk ganti baris
cout << "Angka yang anda masukkan adalah : " << coba1 << endl;
cout << "String yang anda masukkan adalah : " << coba2 << endl;
getch();

}