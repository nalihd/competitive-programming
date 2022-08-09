#include <iostream>
using namespace std;

int steps(int x){
    
    if(x >= 5){
        return 1+steps(x-5);
    }
    if(x==4){
        return 1+steps(x-4);
    }
    if(x==3){
        return 1+steps(x-3);
    }
    if(x==2){
        return 1+steps(x-2);
    }
    if(x==1){
        return 1+steps(x-1);
    }
    else{
        return 0;
    }
}


int main(){
    int x;
    cin >> x;

    int counter = 0;
    int result = steps(x);
    cout << result;

}