#include <bits/stdc++.h>
using namespace std;

string s, result;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);

    getline(cin, s);
    stringstream ss(s);
    string str, lastName;

    while (ss >> str) {
        lastName = str;
        result += tolower(str[0]);
    }

    result.erase(result.end() - 1);

    for (auto &x : lastName) {
        x = tolower(x);
    }

    cout << lastName + result + "@ptit.edu.vn" << endl;

    return 0;
}
