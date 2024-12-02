#include <bits/stdc++.h>

using namespace std;

int main() {
    
    vector<int> v1;
    unordered_map<int, int> mp2;
    
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
            v1.push_back(num1);
            mp2[num2]++;
        }
    }

    long long int similarity_score = 0;

    for (int i=0; i<v1.size(); i++) {
        similarity_score += v1[i] * mp2[v1[i]];
    }

    cout << similarity_score;
}