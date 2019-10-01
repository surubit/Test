#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> c;
    vector<int> v(n,0);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    sort(v.begin,v.end);
    int s=0;
    for(int i = 0 ; i < n ; i++){
        cout <<v[i] <<" "; 
        s+=v[i];
    }
    cout << "\nSUM=" << s << "\n";
    return 0;
}
