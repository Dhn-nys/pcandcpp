/*

Source : Buku Pemrograman C dan C++
Page   : 40 - 41 
Title  : 
NOTE   : Please, choose your use windows(Dev-C++) or linux(GCC), and uncomment 
         the code the selected, comment code which is not selected.

*/ 

// Code with Dev-C++ on Windows
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  printf("Memori dari tipe data int %i\n" ,sizeof(int));
  printf("Memori dari tipe data unsigned int %i\n" ,sizeof(unsigned int));
  printf("Memori dari tipe data signed int %i\n" ,sizeof(signed int));
  printf("Memori dari tipe data short int %i\n" ,sizeof(short int));
  printf("Memori dari tipe data unsigned short int %i\n" ,sizeof(unsigned short int));
  printf("Memori dari tipe data signed short int %i\n" ,sizeof(signed short int));
  printf("Memori dari tipe data long int %i\n" ,sizeof(long int));
  printf("Memori dari tipe data signed long int %i\n" ,sizeof(signed long int));
  printf("Memori dari tipe data unsigned long int %i\n" ,sizeof(unsigned long int));
  
  system("PAUSE");
  return 0;
}
