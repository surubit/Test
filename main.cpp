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
    for(int i = 0 ; i < n ; i++){
        cout <<v[i] <<" "; 
    }
    return 0;
}
