#include <bits/stdc++.h>

#define int long long
#define vi vector<int>
#define loop(x, i, f) for (int x = i; x < f; x++)
#define fir first
#define sec second
#define pb push_back
#define pi pair<int,int>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    int cont=0;
    loop(i,a,b+1){
        if(i== 0){
            cout<< "Y"<< endl;
            break;
        }
        if(i<0) cont++;
    }
    if(cont %2 ==1 ) cout<< "N"<< endl;
    else cout<< "Y"<< endl;
    return 0;
}