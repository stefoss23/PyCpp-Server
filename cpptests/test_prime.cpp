#include <cassert>
#include <vector>
#include <string>
#include <iostream>

#include <cserv_core/prime.hpp>

using namespace std;
using namespace cserv_core;

void _printErrorData(string function, int line) {
   cout << "--- ASSERT VECTOR ERROR ---" << endl;
   cout << "--- Function: " << function << endl;
   cout << "--- Line: " << line << endl;
}

void _assertVectorEqual(vector<int> expected, vector<int> value, string function, int line) {

   if (expected.size() != value.size()) {
      cout << "--- Size of lists are not equal:" << endl;
      _printErrorData(function, line);
      abort();
   }      
      
   for (int i = 0; i < expected.size(); i++)
      if (expected[i] != value[i]) {
         _printErrorData(function, line);
         cout << "--- Values of lists are not equal:" << endl;
         
         cout << "------ Expected:";
         for (int x: expected)
            cout << " " << x;
         cout << endl;
         
         cout << "------ Actual  :";
         for (int x: value)
            cout << " " << x;
         cout << endl;
           
         abort();                           
      }
}
/*
#ifndef assertVectorEqual
#define assertVectorEqual(expected, value) \
{ \
   _assertVectorEqual(expected, value, __PRETTY_FUNCTION__, __LINE__); \
}
#endif*/


void test_prime() {
   
   _assertVectorEqual({4, 7}, CreatePrimes(1), "ee", 88);
   /*_assertEqual({2}, CreatePrimes(2));
   _assertEqual({2, 3, 5, 7, 11, 13, 17, 19, 23}, CreatePrimes(25));*/
}




int main() {

   test_prime();


   return 0;
}
