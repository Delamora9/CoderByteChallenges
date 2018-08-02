#include <iostream>
using namespace std;

string FirstReverse(string str) { 
  string reversed;  
  for(int i = str.size()-1; i > -1; i--){
      reversed.push_back(str[i]);
  }  
  str = reversed;
  return str; 
            
}

int main() { 
  
  // keep this function call here
  //cout << FirstReverse(gets(stdin));
  cout << FirstReverse("testme123") << "\n";
  return 0;
    
}