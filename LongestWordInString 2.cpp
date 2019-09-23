#include <iostream>
using namespace std;

string LongestWord(string sen) { 
  string longestWord;
  string currentWord;
  int asciiValue;
  int lastPosition = -1;
  for(int i = 0; i < sen.size(); i++){
      //cout << sen[i] << " - " << (int) sen[i] << "\n";
      asciiValue = (int) sen[i];
      if(!((asciiValue >= 97 && asciiValue <= 122) || (asciiValue >= 65 && asciiValue <= 90) || (asciiValue >= 48 && asciiValue <= 57)) || i+1 == sen.size()){
          if(i+1 == sen.size()){
              i += 1;
          }
          currentWord = "";
          for(int j = lastPosition+1; j < i; j++){
              currentWord.push_back(sen[j]);
          }
          cout << "Current Word: " << currentWord << "\n";
          if(currentWord.size() > longestWord.size()){
              longestWord = currentWord;
          }
          cout << "Longest Word: " << longestWord << "\n";
          lastPosition = i;
      }
  }
  sen = longestWord;  
  return sen;        
}

int main() { 
  
  // keep this function call here
  cout << LongestWord("123456789 98765432") << "\n";
  cout << LongestWord("a b c dee") << "\n";
  //cout << LongestWord(gets(stdin));
  return 0;
    
} 