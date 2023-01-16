//CODEFORCES PROBLEM NO - 71/A
//CODEFORCES PROBLEM NAME - A. Way Too Long Words
#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string word;
    cin >> word;

    int len = word.length();
    if (len > 10) {
      cout << word[0] << len - 2 << word[len - 1] << endl;
    } else {
      cout << word << endl;
    }
  }

  return 0;
}
/*
Solution Approach:
In the above code, I first read the value of n, the number of words, into a variable called n. Then I use a for loop to iterate through the n words. For each word, I read the word into a variable called word. Next, I find the length of the word using the length() function. Then I check if the length of the word is greater than 10. If it is, I print the first letter of the word, followed by the length of the word minus 2, followed by the last letter of the word. If the length of the word is not greater than 10, I print the word itself.
*/