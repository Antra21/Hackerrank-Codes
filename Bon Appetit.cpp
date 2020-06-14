#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,c,bill[100000],bc,ba=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>bill[i];
    }
    cin>>bc;
    for(int i=0;i<n;i++){
    ba=ba+bill[i];
    }
    ba=(ba-bill[k])/2;
    c=bc-ba;
    if(bc==ba){
        cout<<"Bon Appetit";
    }
    else
    {
        cout<<c;
    }
return 0;
}
