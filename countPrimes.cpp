#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
  int countprime=0;
  
  for(int j=0, j<size,j++){
    
    if(a[j]>=2){
      for (int i=2; i<=x/2; i++){
        if (a[j]%i==0){
          countprime+=0
          break;
        
      }
        else{countprime+=1;}
    }
     
  }
  if(a[j]<=-2){    
    for (int i=-2; i<=-x/2; i--){
      if (a[j]%i==0){
        countprime+=0;
        break;
      }
      else{countprime+=1;}
    }
  }
    
  if(a[j]==0)
    countprime+=0;
  if(a[j]==1||a[j]==-1)
    countprime+=0;
  
    
}
  return countprime;
}
