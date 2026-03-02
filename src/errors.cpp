#include <cserv_core/errors.hpp>

namespace cserv_core {
   
   void segfault() {
      int * a;
      *a = 8;
   }
   
}
