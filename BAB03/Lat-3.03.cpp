/*

Source : Buku Pemrograman C dan C++
Page   : 41 - 42
Title  : 
NOTE   : Please, choose your use windows(Dev-C++) or linux(GCC), and uncomment 
         the code the selected, comment code which is not selected.

*/ 

// Code with Dev-C++ on Windows
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  cout<<"Memori dari tipe data int  :"<<sizeof(int);
  cout<<endl;
  cout<<"Memori dari tipe data unsigned int :"<<sizeof(unsigned int);
  cout<<endl; 
  cout<<"Memori dari tipe data signed int  :"<<sizeof(signed int);
  cout<<endl;
  cout<<"Memori dari tipe data short int  :"<<sizeof(short int);
  cout<<endl;
  cout<<"Memori dari tipe data unsigned short int  :"<<sizeof(unsigned short int);
  cout<<endl;
  cout<<"Memori dari tipe data signed short int :"<<sizeof(signed short int);
  cout<<endl;
  cout<<"Memori dari tipe data long int  :"<<sizeof(long int);
  cout<<endl;
  cout<<"Memori dari tipe data signed long int :"<<sizeof(signed long int);
  cout<<endl;
  cout<<"Memori dari tipe data unsigned long int :"<<sizeof(unsigned long int);
  cout<<"\n\n";
  system("PAUSE");
  return EXIT_SUCCESS;
}
