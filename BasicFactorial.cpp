#include <iostream>
using namespace std;

int FirstFactorial(int num) {
  int result = num; 
  if(num > 1){
    for(int i = 1; i < num; i++){
      result = i * result; 
    }
  }
  num = result;    
  return num;             
}

int main() { 
  
  // keep this function call here
  cout << FirstFactorial(1) << "\n";
  //cout << FirstFactorial(gets(stdin));
  return 0;
    
} 















  