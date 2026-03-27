#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    long long sum = 0; 
    for(int i = 0; i < n; i++){
        int mood;
        cin >> mood;
        sum += mood;
    }

    int result = 0;
    if(sum % 2 == 0){
        result = abs(sum) / 2;
    }
    else{
        result = (abs(sum) / 2) + 1;
    }
    cout << result << endl; 
    return 0;
}