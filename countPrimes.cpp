#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
  int countprime=0;
  
  for(int i=0, i<size,i++){
    
    if(a[i]>=2){
      for (int i=2; i<=x/2; i++){
        if (a[i]%i==0){
          countprime+=0
          break;
        
      }
        else{countprime+=1;}
    }
     
  }
  if(a[i]<=-2){    
    for (int i=-2; i<=-x/2; i--){
      if (a[i]%i==0){
        countprime+=0;
        break;
      }
      else{countprime+=1;}
    }
  }
    
  if(a[i]==0)
    countprime+=0;
  if(a[i]==1||a[i]==-1)
    countprime+=0;
  
    
}
  return countprime;
}
