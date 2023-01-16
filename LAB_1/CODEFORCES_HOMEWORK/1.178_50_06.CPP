//CODEFORCES PROBLEM NO - 4A
//CODEFORCES PROBLEM NAME - A. Watermelon
#include <iostream>

using namespace std;

int main() {
  int w;
  cin >> w;

  if (w % 2 == 0 && w > 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}

/*
Solution Approach:
In the above code, I first read the value of w, the weight of the watermelon, into a variable called w. Then I check if the weight is even and greater than 2. If it is, I print YES, otherwise I print NO.
*/