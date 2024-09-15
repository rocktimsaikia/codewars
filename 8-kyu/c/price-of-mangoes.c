// https://www.codewars.com/kata/57a77726bb9944d000000b06/train/c
#include <math.h>

unsigned mango(unsigned quantity, unsigned price) {
  return ceil(quantity / 3.0) * 2 * price;
}
