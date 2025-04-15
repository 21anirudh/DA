#include <bits/stdc++.h>
using namespace std;

// Sieve of Eratosthenes
int n = 1e+6;
bool pr[n+1];
pr[0] = false;
pr[1] = false;

void sieve(){
    for (int i = 2; i < n + 1;i++){
        pr[i] = true;
    }
    for (int i = 1; i * i < n;i++){
        if(pr[i]){
            for (int j = i * i; j < n + 1;j+=i){
                pr[j] = false;
            }
        }
    }
}

int main(){
    sieve();
    cout << pr[37] << endl
          << pr[38] << endl;
    return 0;
}