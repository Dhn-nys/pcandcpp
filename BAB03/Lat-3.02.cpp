/*

Source : Buku Pemrograman C dan C++
Page   : 37 - 38
Title  : Convert Character 'A' to ASCII (CPP)
NOTE   : Please, choose your use windows(Dev-C++) or linux(GCC), and uncomment 
         the code the selected, comment code which is not selected.

*/ 

// Code with Dev-C++ on Windows
#include <cstdlib>
#include <iostream>

using namespace std;
int main (int argc, char *argv[])
{
 char A1;
 int A2;
 A1='A';
 A2=int(A1);
 cout<<"Nilai variabel A1 adalah"<<A1;
 cout<<endl;
 cout<<"Nilai variabel A2 dalam bentuk angka (ASCII) = "<<A2;
 cout<<"\n\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}
