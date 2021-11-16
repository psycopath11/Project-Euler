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
#define max 1000005
vector<bool> is_prime(max, true);
vector<ll> sumofPrime;
vector<ll>prime;
void SieveOfEratosthenes(int n)
{

is_prime[0] = is_prime[1] = false;
for (int i = 2; i * i <= n; i++) {
    if (is_prime[i]) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}

for(ll p=2; p<=n; p++)
{
    if(is_prime[p])
    prime.push_back(p);
}
}

void sum()
{
    ll sum=0;
    for(ll i=0; i<prime.size(); i++)
    {
        sum+=prime[i];
        sumofPrime.push_back(sum);
    }
}

void display(vector<ll> arr)
{
    for(auto i: arr)
    cout<<i<<" ";
    cout<<"\n";
}

int main(){
  cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    SieveOfEratosthenes(max);
    sum();
    for(int a0 = 0; a0 < t; a0++){

        long n;
        cin >> n;

        ll p;

        for(p=0; p<=n; p++)
        {   
            // cout<<prime[p]<<" ";
          
            if(prime[p]>n)
            break;
        }
        // cout<<endl;
        // for(p=0; p<=n; p++)
        // {
        //     cout<<sumofPrime[p]<<" ";
        //     if(prime[p]>n)
        //     break;
        // }
        // cout<<endl;
      
        cout<<sumofPrime[p-1]<<"\n";
        
        
        
    }
    return 0;
}