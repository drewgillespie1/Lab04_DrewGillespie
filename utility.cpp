// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

bool isOdd(int x) { 
  if(x%2==1||x%2==-1)
    return true;
  else
    return false;
  
}
bool isEven(int x) { 
  if (x%2==0)
    return true;
  else
    return false;
}
bool isPrime(int x) { 
  bool flag=true;
  if(x>=2){
    for (int i=2; i<=x/2; i++){
      if (x%i==0){
        flag=false;
        break;
      }
    }
     
  }
  if(x<=-2){    
    for (int i=-2; i<=-x/2; i--){
      if (x%i==0){
        flag=false;
        break;
      }
    }
  }
    
  if(x==0)
    flag=false;
  if(x==1)
    flag=true;
  return flag;
  
     
  //return false;  // REPLACE THIS STUB WITH REAL CODE
}
