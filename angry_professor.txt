#include <bits/stdc++.h>
#include <ostream>

using namespace std;
int main(){
    int t,n,k,a[100000],count;
    cin>>t;
    for(int i=0;i<t;i++){
        count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=0){
            count++;
        }
    }
            if(k>count){
                cout<<"YES"<<endl;
            }
        else{
            cout<<"NO"<<endl;
        }
        }
    return 0;
}
