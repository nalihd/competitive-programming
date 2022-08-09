#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5;

int height[MAX_N + 1];

int dp[MAX_N + 1];

int main (){
    int N;
    cin >> N;

    dp[1] = 0;
    
    for(int i = 1; i < N+1; i++){
        int stone;
        cin >> stone;
        height[i] = stone;
    }
    for(int i = 2; i <= N; i++){
        dp[i] = INT32_MAX;
    }

    for(int i = 1; i <= N; i++){
        if(i+1 <= N){
            dp[i+1] = min(dp[i+1], dp[i] + abs(height[i] - height[i+1]));
        }
        if(i+2 <= N){
            dp[i+2] = min(dp[i+2], dp[i] + abs(height[i] - height[i+2]));
        }
    }

    cout << dp[N] << endl;


}
