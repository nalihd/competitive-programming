#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int x = 0;
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++){
        string operations;
        cin >> operations;
        int size = operations.size();
        for(int j = 0; j < size; j++){
            if(operations[j] == '+'){
                x++;
                break;
            }
            if(operations[j] == '-'){
                x--;
                break;  
            }
        }
    }
    cout << x;

}