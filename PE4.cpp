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

bool isPalindrome(ll n)
{
    ll original=n;
    ll reverse=0;
    ll rem;
    while(n)
    {
        rem = n%10;
        n=n/10;
        reverse = (reverse*10) + rem;
    }
    if(reverse==original)
    return true;
return false;
}

ll solution(ll n)
{
    ll bestVal=0;
    ll multi;
    for(int i=101; i<999; i++)
    {
        for(int j=101; j<999; j++)
        {
            multi = i*j;
            if(multi<n && isPalindrome(multi)==true)
            {
                if(bestVal<multi)
                bestVal = multi;
            }
        }
    }
return bestVal;

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