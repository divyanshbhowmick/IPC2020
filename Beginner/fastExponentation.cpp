#include <iostream>

using namespace std;
/*
For even n: half_power * half_power
For odd n: half_power * half_power * a

a⁸ = a⁴ * a⁴ 
a⁴ = a² * a² 
a² = a¹ * a¹ 
a¹ = a⁰ * a⁰ * a
a⁰ = 1
*/

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