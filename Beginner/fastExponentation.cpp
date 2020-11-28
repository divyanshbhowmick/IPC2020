#include <iostream>

using namespace std;

int calc_power(int a, int n){
    if(!n) return 1;
    if(!(n%2)){
        int half_power = calc_power(a,n/2);
        return half_power*half_power;
    }
    else{
        int half_power = calc_power(a,n/2);
        return half_power*half_power*a;
    }
}

int main(){
    cout<<calc_power(2,5)<<endl;
    return 0;
}