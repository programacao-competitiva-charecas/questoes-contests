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
    int a;
    cin>>a;
    if((a-5)>=0 && (a-5) % 2 == 0)cout<<"Y"<<endl;

    else if(a%5==0||a%2==0||(a-2) % 5 == 0){
        cout<<"Y"<<endl;
    }
    else cout<<"N"<<endl;
    return 0;
}