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
 I first read the values of n and k from the input. Then I create an array called scores to store the scores of the participants. Next, I initialize a variable called count to 0, which I will use to keep track of the number of participants who will advance to the next round. Then I use a for loop to read the scores of the participants from the input and store them in the array. Next, I find the score of the k-th place finisher by accessing the k-1 index of the array. I then use another for loop to iterate through the array and count the number of participants who have scored greater than or equal to the k-th place finisher's score, and also have scored greater than 0. Finally, I print the count as the output.
*/
