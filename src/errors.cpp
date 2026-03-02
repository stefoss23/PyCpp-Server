#include <stdexcept>

#include <cserv_core/errors.hpp>

using namespace std;

namespace cserv_core {
   
   void segfault() {
      int * a;
      *a = 8;
   }
   
   void except() {
      throw logic_error("Exception from cpp");
   }
   
}
