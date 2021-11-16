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
ll solution(ll n)
{
    int k=1;
    ll num;
    bool result = true;
    while(true)
    {
        result = true;
        num=n*k;
        k++;
    
    for(int i=2; i<=n; i++ )
    {
        if(num%i==0)
        continue;
        else 
        { result = false; break;}
        
    }
    if(result)
    { return num; break;}

    }
}

int main(){
  cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        ll result = solution(n);
        cout<<result<<"\n";
        
    }
    return 0;
}