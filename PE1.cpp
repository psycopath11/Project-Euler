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

ll solution(int n)
{   
    n--;
    ll sum=0;
    ll mul3=0; ll mul5=0; ll mul15=0;
    ll l3,l5,l15;
    l3 = int(n/3);
    l5 = int(n/5); 
    l15 = int(n/15); 

    mul3 = ((3)*l3*(l3+1))/2;
    mul5 = ((5)*(l5)*(l5+1))/2;
    mul15 =((15)*(l15)*(l15+1))/2;


    sum = mul3 + mul5 - mul15;

    return sum;
}
// ll solution(int n)
// {
//     ll sum=0;
//     int i=3;

//     for(int i=; i<n; i++)
//     {
//         if(i%3==0 || i%5==0)
//         sum+=i;
//     }
//     return sum;
// }

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        ll result = solution(n);
        cout<<result<<"\n";
    }
    
    
    return 0;
}