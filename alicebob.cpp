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


string solution(ll A,ll B,ll P, ll Q)
{
    if(P%A>0 || Q%B>0)
    return "No";
    
    ll alice = P/A;
    ll bob = Q/B;
    if(alice > bob)
    {
        if(alice - bob == 1)
        return "Yes";
    }
    else
    {
        if(bob - alice ==1 || bob - alice == 0)
        return "Yes";
    }
    
    return "No";
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        ll A,B,P,Q;
        cin >> A >> B >> P >> Q;
        cout<<solution(A,B,P,Q)<<"\n";
    }
    
    
    return 0;
}