#include <bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int> > q1;
    priority_queue<int, vector<int>, greater<int> > q2;

    ifstream f("input.txt");
    if (!f.is_open()) {
        cerr << "Error opening the file!";
        return 1;
    }

    string s;

    while (getline(f, s)) {
        istringstream iss(s);
        int num1, num2;
        if (iss >> num1 >> num2) {
            q1.push(num1);
            q2.push(num2);
        }
    }

    long long int sum = 0;

    while (!q1.empty()) {
        sum += abs(q1.top() - q2.top());
        q2.pop();
        q1.pop();
    }

    cout << sum;
}