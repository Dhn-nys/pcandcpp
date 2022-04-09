/*

Source : Buku Pemrograman C dan C++
Page   : 35 - 36
Title  : Memory used in data types (CPP)
NOTE   : Please, choose your use windows(Dev-C++) or linux(GCC), and uncomment 
         the code the selected, comment code which is not selected.

*/ 

// Code with Dev-C++ on Windows
#include <cstdlib>
#include <iostream>

using namespace std;
int main (int argc, char *argv[])
{
	cout<<"Memorial dari tipe data char : "<<sizeof(char);
    cout<<"\n\n";
	cout<<"Memorial dari tipe data unsigned char : "<<sizeof(unsigned char);
    cout<<"\n\n";
	cout<<"Memorial dari tipe data signed char : "<<sizeof(signed char);
    cout<<"\n\n";
	system("PAUSE");
	return 0;
}
