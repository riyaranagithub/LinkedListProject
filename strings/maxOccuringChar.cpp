#include <iostream>
#include <vector>
#include <string>

using namespace std;

char maxChar(string s) {
    vector<int> count(26, 0);

    for (char c : s) {
        count[c - 'a']++;
    }

    int maxIndex = 0;
    for (int i = 1; i < 26; i++) {
        if (count[i] > count[maxIndex]) {
            maxIndex = i;
        }
    }

    return 'a' + maxIndex;
}

int main() {
    string s = "output";
    cout << "Most frequent character: " << maxChar(s) << endl;

    return 0;
}
