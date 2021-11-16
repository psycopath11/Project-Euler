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

bool isPrime(int n)
{
  
    if (n <= 1)
        return false;
 
    
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}


ll solution(ll n)
{
    int count =0;
    ll i=2;   ll num=0;
    while(count !=n)
    {
         if(isPrime(i))
         {
             count++;
            num=i;
         }
         i++;
    }
    return num;
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