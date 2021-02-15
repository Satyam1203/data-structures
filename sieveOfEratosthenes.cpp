#include <bits/stdc++.h>
using namespace std;

vector<bool> sieveOfEratosthenes(int n) {
    vector<bool> res(n+1, true);
    int i = 2;
    res[0] = res[1] = false;
    while(i < sqrt(n)) {
        if(res[i]) {
            for (int j = 2*i; j <= n; j+=i) {
                res[j] = false;
            }
        }
        i++;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<bool> prime = sieveOfEratosthenes(n);
    for (int i = 0; i <= n; i++) {
        cout<<i<<" "<<prime[i]<<endl;
    }
}
