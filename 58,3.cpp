#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



using namespace std;

int main(int argc, char** argv)
{
 ifstream f1, f2, f3;
 ofstream fOut;
 char* endptr;
  string h1, h2, h3, num1, num2, num3;
 long n1, n2, n3, max1, max2, max3;
 f1.open("dane_systemy1.txt");
 f2.open("dane_systemy2.txt");
 f3.open("dane_systemy3.txt");
 fOut.open("wyjscie.txt");
 bool pier = true;
 int record = 1;
     while(!f1.eof())
     {
              f1>>h1>>num1;
              f2>>h2>>num2;
              f3>>h3>>num3;
              
              number1=strtol(num1.c_str(), &endptr, 2);
              number2=strtol(num2.c_str(), &endptr, 4);
              number3=strtol(num3.c_str(), &endptr, 8);
              
              if(pier)
               {
                            max1 = number1;
                            max2 = number2;
                            max3 = number3;
                            pier = false;
               }
                  if(number1 > max1)
				  {
                  	max1 = number1;
                  	record++;
				  }
				  if(number2 > max2)
				  {
				  	max2 = number2;
				  	record++;
				  }
				   if(number3 > max3)
				   {
				  	max3 = number3;
				  	record++;
				  }
                       
     }
 fOut<<record;
 f1.close();
 f2.close();
 f3.close();
 fOut.close();

 return 0;
}
