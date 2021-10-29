#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
#define ll long long



void solution(ll n)
{
    if(n==1 || n==2)
    {
        if(n==1)
        cout << 1 <<" "<< 1;
        else
        cout << 1 <<" "<< 1 << " "<< 2;
    }
    else
    {
    ll num = pow(2,n);
    num--;
    cout << 1 <<" ";
    ll i=1;
    for(i=1; i<n; i++)
    {
       num = num - i;
       cout << i << " ";
    }
    if(num>i)
    cout<<num <<" ";
    }
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        ll n;
        cin>>n;
        solution(n);
        cout<<"\n";

    }
    
    
    return 0;
}