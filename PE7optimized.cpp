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
#define max_size 1000005
vector<bool> is_prime(max_size, true);



// bool isPrime(int n)
// {
  
//     if (n <= 1)
//         return false;
 
    
//     for (int i = 2; i <= sqrt(n); i++)
//         if (n % i == 0)
//             return false;
 
//     return true;
// }


// ll solution_naive(ll n)
// {
//     int count =0;
//     ll i=2;   ll num=0;
//     while(count !=n)
//     {
//          if(isPrime(i))
//          {
//              count++;
//             num=i;
//          }
//          i++;
//     }
//     return num;
// }



void sieve_of_eratosthenes(vector<ll> &prime)
{ ll n=max_size;

is_prime[0] = is_prime[1] = false;
for (ll i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (ll j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}

for(int i=2; i<max_size; i++)
{
    if(is_prime[i])
    prime.push_back(i);
}
}



int main(){
  cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    vector<ll> prime;
    sieve_of_eratosthenes(prime);
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        //n=1+rand()%1000000;
        //if(solution(n)!=solution_naive(n))
        //{cout<<n; break;}
        ll result = prime[n-1];
        cout<<result<<"\n";
        
    }
    return 0;
}