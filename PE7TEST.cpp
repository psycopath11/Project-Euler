// C++ program to the nth prime number

#include <bits/stdc++.h>
using namespace std;

// initializing the max value
#define MAX_SIZE 1000005
#define ll long long
#define max_size 1000005
vector<bool> is_prime(max_size, true);




// Function to generate N prime numbers using
// Sieve of Eratosthenes
void SieveOfEratosthenes(vector<int>& primes)
{
	// Create a boolean array "IsPrime[0..MAX_SIZE]" and
	// initialize all entries it as true. A value in
	// IsPrime[i] will finally be false if i is
	// Not a IsPrime, else true.
	bool IsPrime[MAX_SIZE];
	memset(IsPrime, true, sizeof(IsPrime));

	for (int p = 2; p * p < MAX_SIZE; p++) {
		// If IsPrime[p] is not changed, then it is a prime
		if (IsPrime[p] == true) {
			// Update all multiples of p greater than or
			// equal to the square of it
			// numbers which are multiple of p and are
			// less than p^2 are already been marked.
			for (int i = p * p; i < MAX_SIZE; i += p)
				IsPrime[i] = false;
		}
	}

	// Store all prime numbers
	for (int p = 2; p < MAX_SIZE; p++)
		if (IsPrime[p])
			primes.push_back(p);
}





void sieve_of_eratosthenes(vector<ll> &prime)
{ ll n=max_size;

is_prime[0] = is_prime[1] = false;
for (ll i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (ll j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}

for(int i=2; i<=max_size; i++)
{
    if(is_prime[i])
    prime.push_back(i);
}
}

// ll solution(ll n)
// {
//   sieve_of_eratosthenes();

//   return prime[n-1];
    
// }

// Driver Code
int main()
{
	// To store all prime numbers
	vector<int> primes;
    vector<ll> prime;

	// Function call
	SieveOfEratosthenes(primes);
    sieve_of_eratosthenes(prime);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        //cin >> n;
        n=1+rand()%100000;

        if(prime[n-1]!=primes[n-1])
        {cout<<n<<"\n"; break;}
        //ll result = primes[n-1];
        //cout<<result<<"\n";
        
    }
    return 0;


}
