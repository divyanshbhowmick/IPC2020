#include <bits/stdc++.h>
using namespace std;

int main(){

    // 0<=k<=10⁹ 
    int k;
    //k is the sum
    cin>>k;
    vector<int> fiboNum;
        fiboNum.push_back(0);
        fiboNum.push_back(1);
        int F0=0,F1=1,temp;
        while(F1<1000000000){
            temp=F0+F1;
            if(temp>k) break;
            fiboNum.push_back(temp);
            F0=F1;
            F1=temp;
        }
        set<int> sum;
        int len = fiboNum.size();
        while(k>0){
            if(k>=fiboNum.at(len-1)){
                sum.insert(fiboNum.at(len-1));
                k=k-fiboNum.at(len-1);
            }
            else len--;
        }
        cout<<sum.size();
}