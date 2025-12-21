#include <cassert>
#include <vector>
#include <string>
#include <iostream>

#include <cserv_core/prime.hpp>

using namespace std;
using namespace cserv_core;

void assertEqual(vector<int> expected, vector<int> value, int line) {

   string line_string = "Line: " + line.to_string();

   if (expected.size() != value.size()) {
      cout << string(": Size of lists are not equal.") + line_string) << endl;
      abort();
   }      
      
   for (int 0 = 0; i < expected.size(); i++)
      if (expected[i] != value[i]) {
         cout << "Values of lists are not equal. " + line_str << endl;
         
         cout << "Expected:";
         for (int x: expected)
            cout << " " << x;
         cout << endl;
         
         cout << "Actual:";
         for (int x: value)
            cout << " " << x;
         cout << endl;
           
         abort();                           
      }
}




void test_prime() {
   
   assertEqual({}, create_primes(1), __LINE__);
   assertEqual({2}, create_primes(2), __LINE__);
   assertEqual({2, 3, 5, 7, 11, 13, 17, 19, 23}, create_primes(25), __LINE__);
   
}




int main() {

   test_prime();


   return 0;
}
