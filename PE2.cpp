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

ll solution(long n)
{
    ll first = 0;
    ll second = 1;
    ll sum=0;
    ll fib=0;

   while(1)
    {
        fib=first+second;
        if(fib>n)
        break;
        first = second;
        second=fib;
        if(fib%2==0)
        sum=sum+fib;
    }
    return sum;
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