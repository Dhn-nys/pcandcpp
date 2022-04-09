/*

Source : Buku Pemrograman C dan C++
Page   : 37
Title  : Convert Character 'A' to ASCII (C)
NOTE   : Please, choose your use windows(Dev-C++) or linux(GCC), and uncomment 
         the code the selected, comment code which is not selected.

*/ 

// Code with Dev-C++ on Windows
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
 char A1,A2;
 A1='A';
 A2=A1;
 printf("Nilai variabel A1 adalah %c\n" ,A1);
 printf("Nilai variabel A2 dalam bentuk angka (ASCII) = %i\n\n" ,A2);
 system("PAUSE");
 return 0;
}
