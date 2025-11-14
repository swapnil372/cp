#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.first == b.first) 
        return a.second < b.second;
    return a.first < b.first;
}

int main() {
    vector<pair<int,int>> v = {{2,1}, {3,2}, {1,1}, {3,1}};

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}
