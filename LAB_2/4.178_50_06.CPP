//CODEFORCES PROBLEM NO - 158/A
//CODEFORCES PROBLEM NAME - A. Next Round

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int scores[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int kScore = scores[k-1];

    for (int i = 0; i < n; i++) {
        if (scores[i] >= kScore && scores[i] > 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
/*
Solution Approach:
 we first read the values of n and k from the input. Then we create an array called scores to store the scores of the participants. Next, we initialize a variable called count to 0, which we will use to keep track of the number of participants who will advance to the next round. Then we use a for loop to read the scores of the participants from the input and store them in the array. Next, we find the score of the k-th place finisher by accessing the k-1 index of the array. We then use another for loop to iterate through the array and count the number of participants who have scored greater than or equal to the k-th place finisher's score, and also have scored greater than 0. Finally, we print the count as the output.
*/
