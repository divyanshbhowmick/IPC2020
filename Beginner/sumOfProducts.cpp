#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int squareSum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        squareSum+=arr[i]*arr[i];
    }
    cout<<((sum*sum)-(squareSum)/2);
    return 0;
}