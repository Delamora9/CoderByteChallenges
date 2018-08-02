#include <iostream>
using namespace std;

int FirstFactorial(int num) { 

  int result = 1; 
  if(num > 1){
    for(int i = 1; i <= num; i++){
        cout << "i: " << i << " result: " << result << "\n";
      result = i * result; 
      cout << "Result: " << result << "\n";
    }
  }
  num = result;    
  return num;  
            
}

int main() { 
  
  // keep this function call here
  // cout << FirstFactorial(gets(stdin));
  cout << FirstFactorial(13) << "\n";
  return 0;
    
} 















  