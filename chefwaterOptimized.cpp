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

// pair<ll,ll> solution_slow(ll n, ll v)
// {
//     ll dis=0;
//     ll min=0,max=0;
//     ll i=0;
//     ll fuel=0;
    

    
//     for(i=1; i<=n; i++)
//     {
//         if(i==1)
//         {
//                 if(n>v)
//                 min = v;
//                 else
//                 { min = n-1; break;}

//          fuel = min;       
//         }
//         else
//         {
//             if(fuel == n-i)
//             break;
//             else
//             {
//                 min = min+i;
//                 fuel++;
//             }
//         }
//         fuel--;
        
//     }

//     //max
//     max = (n*(n-1))/2;
//     return make_pair(max,min);
// }


pair<ll,ll> solution(ll n, ll v)
{
    ll min=0,max=0;
    ll fuel=0;
    max = (n*(n-1))/2;

    if(v==1)
    return make_pair(max,max);

    if(n>v)
    {   
        //first pos
        min = v;
        //further
        ll i= n-v; 
        min = min + (i*(i+1))/2 - 1;
    }
   else
    {   
        min = n-1;
    }
    // for(i=2; i<=n; i++)
    // {
       
    //     if(fuel == n-i)
    //         break;
    //         else
    //         {
    //             min = min+i;
    //         }
      
        
    // }

    //max
   
    return make_pair(max,min);
}
    


int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int a0 = 1; a0 <= t; a0++){
        ll n,v;
        cin>> n >> v;
        // n=1+rand()%1000000;
        // v=1+rand()%1000000;
        auto res1 = solution(n,v);
        //auto res2 = solution_slow(n,v);

        // if(res1 != res2)
        // {   cout<<"testCase No."<<a0<<"\n";
        //     cout<<n<<" "<<v;

        //   cout<<"\nslow: "<<res2.first<<" "<<res2.second<<"\n";
        //   cout<<"fast: "<<res1.first<<" "<<res1.second<<"\n";
        //     break;
        //  }
        // cout<<"\n";
        cout<<res1.first<<" "<<res1.second<<"\n"; 
    }
    
    
    return 0;
}