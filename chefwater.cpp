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


pair<int,int> solution(ll n, ll v)
{
    ll dis=0;
    ll min=0,max=0;
    ll i=0;
    ll fuel=0;
    

    
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
                if(n>v)
                min = v;
                else
                { min = n-1; break;}

         fuel = min;       
        }
        else
        {
            if(fuel == n-i)
            break;
            else
            {
                min = min+i;
                fuel++;
            }
        }
        fuel--;
        
    }

    //max
    max = (n*(n-1))/2;
    return make_pair(max,min);
}
    


int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        ll n,v;
        cin>> n >> v;
        auto res1 =  solution(n,v);
        cout<<"\n";
    }
    
    
    return 0;
}