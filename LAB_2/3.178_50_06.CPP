//CODEFORCES PROBLEM NO - 231/A
//CODEFORCES PROBLEM NAME - A. Team
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;
        if (p + v + t >= 2) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

/*
Solution Approach:
In the above code, I first read the value of n, the number of problems, into a variable called n. Next, I have a variable called count which I use to keep track of the number of problems the friends will implement. Then I use a for loop to iterate through the n problems. For each problem, I read the values of Petya, Vasya and Tonya into variables p, v and t respectively. Then I check if the sum of the values is greater than or equal to 2. If it is, I increment the count variable. Finally, I print the count variable which will give the number of problems the friends will implement.

*/
