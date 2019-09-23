#include <iostream>
using namespace std;
#include <vector>

// char alphabet [26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z'};

// char alphabet2 [26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

// int getPosition(char c){
//     int newPosition;
//     for(int i = 0; i < 26; i++){
//         if(alphabet[i] == c){
//             newPosition = (i+1) % 26;
//             c = alphabet[newPosition];
//         }
//     }
//     return 27;
// }

string LetterChanges(string str) { 
  int asciiValue;
  for(int i = 0; i < str.size(); i++){
      asciiValue = (int) str[i];
      if(asciiValue > 96 && asciiValue < 123){
          if(asciiValue == 100 || asciiValue == 104 || asciiValue == 110 || asciiValue == 116 || asciiValue == 122){
            str[i] = (char) (((((int) str[i])-32)+14)%26)+65;
          }
          else{
              str[i] = (char) ((((int) str[i])+9)%26)+96;
          }
      }
      else if(asciiValue > 64 && asciiValue < 89){
          str[i] = (char) ((((int) str[i])+14)%26)+65;
      }
  }

  return str; 
            
}

int main() { 
  cout << LetterChanges("Testingz out xnt rdd") << "\n";
  char test = 'A';
  cout << "Test ascii value " << (int) test << " actual value: " << test << "\n";
  test = (char) ((((int) test)+14)%26)+65;
  cout << "Test ascii value " << (int) test << " actual value: " << test << "\n";
  // keep this function call here
//   cout << LetterChanges(gets(stdin));
  return 0;
    
} 