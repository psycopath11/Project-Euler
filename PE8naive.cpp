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

//prod function
ll product_of_digits(ll temp)
{
    ll prod=1,rem;
    //cout<<"Number: "<<temp<<" ";
    while(temp>0)
    {   
        rem = temp%10;
        prod*=rem;
        temp = temp/10;
    }
    //cout<<"product: "<<prod<<"\n";
    return prod;
}

ll solution(ll n, ll k,ll num)
{   ll temp1 = n-k+1;
    ll temp2 = pow(10,k);
    ll max=0;
    ll sub;
    ll prod;
  
   
   sub = num%(temp2);
   prod=product_of_digits(sub);
       
   // evenly divided case
     while(temp1--)
     {
        if(max<prod)
       max= prod;
       
       if(num%10!=0)
       prod=prod/(num%10);
       
       num=num/10;
       prod=prod*(((num*10)/temp2)%10);
       
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
        ll num;
        cin>>num;
        ll result = solution(n,k,num);
        cout<<result<<"\n";
        
    }
    return 0;
}