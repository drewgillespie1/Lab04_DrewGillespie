#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
  int countnp=0;
  
  for(int j=0; j<size;j++){
    
    if(a[j]>=2){
      for (int i=2; i<=a[j]/2; i++){
        if (a[j]%i==0){
          countnp+=1;
          break;
        
        }
        
      }
     
    }
    else if(a[j]<=-2){    
      for (int i=-2; i<=-a[j]/2; i--){
        if (a[j]%i==0){
          countnp+=1;
          break;
        }
      
      }
    }
    
    else if(a[j]==0)
      countnp+=1;
    else if(a[j]==1||a[j]==-1)
      countnp+=1;
  
    
  }
  int countprime=size-countnp;
  return countprime;
}
