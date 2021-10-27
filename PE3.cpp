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
    ll answer;
    ll max=-1;
    while(n%2==0)
    {
        max =2;
        n=n/2;
    }

    for (int i = 3; i <= sqrt(n); i=i+2)
    {
        while(n%i==0)
        {
            n=n/i;
            max=i;
        }
    }
    if(n>2)
    {max = n;}
    
answer=max;
 return answer;
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