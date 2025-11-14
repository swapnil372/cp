#include<bits/stdc++.h>
using namespace std;

vector<int>prime;
int f[100009] = {false};

void sieve(int n)
{
    f[1] = true;
    for (int i = 2; i <= n; i++) {
        if (f[i] == false) {
            prime.push_back(i);
            for (int j = i + i; j <= n; j+= i) {
                f[j] = true;
            }
        }
    }
}