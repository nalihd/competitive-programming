#include <iostream>
#include <cmath>
#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;

int main(){
    int n,answer=0;
    int bills[] = {100,20,10,5,1};
    cin >> n;
    for(int i = 0; i < 5; i++){
        answer += n/bills[i];
        n=n%bills[i];
    }
    cout << answer;
}