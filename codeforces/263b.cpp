#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int row, column;
   int arr[5][5];
   for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        int entry;
        cin >> entry;
        if(entry == 1){
            row = j+1;
            column = i+1;
        }
    }
   }
   int operations = abs(row - 3) + abs(column-3);
   cout << operations;
}