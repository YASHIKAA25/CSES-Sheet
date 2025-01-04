// #include<iostream>
// using namespace std;

// int WeirdAlgo(int n){
//     while(n != 1){
//         cout<<n <<" ";
//         if(n& 1) n = 3 * n + 1;
//     else n /= 2; 
//     }
//     cout << n<<" ";
// }

// int main(){ 
//     int n;
//     cin>>n;
//     WeirdAlgo(n);
//     return 0;
// }/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    while(n != 1){
        cout<<n<<" ";
        if(n&1)
            n = 3ll*n + 1;
        else
            n /= 2ll;
    }
    cout<<n<<"\n";
    return 0;
}