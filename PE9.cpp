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
 vector<ll> arr;
 vector<ll> prod;

void solution()
{
    int p;
    float q;
   
    for(int a=1; a<3000; a++)
    {
        for (int b = 1; b <3000; b++)
        {
            p=sqrt((a*a)+(b*b));
            q=sqrt((a*a)+(b*b));

            if(p==q)
            {arr.push_back(a+b+p);prod.push_back(a*b*p);}
        }
        
    }
}

int main(){
  cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    solution();
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        ll max=-1;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]==n)
            {
                if(prod[i]>max)
                max=prod[i];
            }
        }
        cout<<max<<"\n";
        
}
    return 0;
}