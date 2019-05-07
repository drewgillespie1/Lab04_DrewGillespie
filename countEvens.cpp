#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int countEvens(int a[], int size) {
  count=0;
  for(int i=0; i<size;i++){
    if(a[i]%2==0)
      count+=1;
  }
  return count;
}
