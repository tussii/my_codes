#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int savings;
    cin>>savings;

    if (savings<5000){
        if (savings>3000 && savings<5000){
            cout<<"Gift\n";
        }else {
            cout<<"Dinner\n";
        }
    }
    else if(savings>10000){
        cout<<"Bike\n";
    }
    else {
        cout<<"Home alone\n";

        return 0;
    }
}