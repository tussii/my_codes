#include<iostream>
using namespace std;

int main(){

     #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int saving;
    cin>>saving;

    if(saving>5000){
        cout<<"Dinner\n";
    }
    else if(saving>10000){
        cout<<"Road Trip\n";
    }
    else if(saving>20000){
        cout<<"Foreign trip\n";
    }
    else {
        cout<<"Home alone\n";
    }

    return 0;
}