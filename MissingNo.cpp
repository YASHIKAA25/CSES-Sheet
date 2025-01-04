#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector <int> vec(n-1);
//     for(int i=0 ; i<n-1; i++){
//         cin>>vec[i];
//     }
//     int ans =0;
//     sort(vec.begin(), vec.end());
//     for(int i=0 ; i < n-1; i++){
//         if(vec[i] != (i+1)){
//             ans = i+1;
//             break;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }

//TC : nlogn SC: 1

int main(){
    int n;
    cin>>n;
    vector<int> vec(n-1);
    vector<bool> have(n+1, false);
    for(int i = 0 ; i<n-1 ; i++){
        cin>>vec[i];
        have[vec[i]] = true;
    }
    int ans = 0;
    for(int i = 1 ; i<= n; i++){
        if(have[i] == false){
            ans = i;
            break;
        }
    }
    cout<<ans << endl;
}

//TC : N ; SC : N