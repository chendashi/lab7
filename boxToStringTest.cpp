#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b2;

  initBox(&b2,3.14159,6.2831853071,1,1);
  assertEquals("ul=(3,6),w=1,h=1", boxToString(b2,1), "boxToString(b1,1)");

		   
  return 0;
}
