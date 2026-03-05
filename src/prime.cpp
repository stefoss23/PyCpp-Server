#include <cmath>
#include <vector>

#include <cserv_core/prime.hpp>

using namespace std;

namespace cserv_core {
   
   vector<int> CreatePrimes(int max) {
   
      vector<int> list;
   
      for (int i = 2; i <= max; i++) {
      
         int limit = sqrt(i);
   
         bool is_prime = true;
   
         for (int j: list) {
      
            if (j > limit)
               break;
            
            if (i % j == 0) {
               is_prime = false;
               break;
            }
         }
      
      if (is_prime)
         list.push_back(i);
      }    

      return list;
   }
   
}
