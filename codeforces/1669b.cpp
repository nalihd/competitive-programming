#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;

    for(int i = 0; i < testcases; i++){
        int n;
        bool notimes = true;  
        cin >> n; 
        int entry;
        int array[200001] = {};
        for(int j = 0; j < n; j++) {
            cin >> entry; 
            array[entry] += 1;
        }
        for(int k = 0; k < n+1; k++){
            if(array[k] >= 3){
                notimes = false;
                cout << k << endl;
                break;
            }
        }
        if(notimes == true){
            cout << -1 << endl; 
        }

    }

}