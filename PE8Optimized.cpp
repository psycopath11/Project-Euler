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
#define ll  long long  





ll solution(ll n, ll k,string num)
{   
  ll max=0;
  ll prod=1;
  for(int i=0; i<n; i++)
  {
    prod=1;
    if(i+k>n)
    break;
    for(int j=i; j<k+i; j++)
    prod*=num[j]-'0';

    if(prod>max)
    max=prod;
  }
   
return max;
}

int main(){
  cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n,k; // n is no of digits // k is no of consecutive digits to choose
        cin >> n >> k;
        string num;
        cin>>num;
        ll result = solution(n,k,num);
        cout<<result<<"\n";
        
    }
    return 0;
}