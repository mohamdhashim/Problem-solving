### to find all primes from [1:n] in O(nlog log(n)) ###

//make all multiple of numbers as 2 mark(4 6 8 10 12) so on ("look at pic")
https://raw.githubusercontent.com/e-maxx-eng/e-maxx-eng/master/img/sieve_eratosthenes.png


//Code;

int n;
vector<char> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false; // 0 1;

for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}

//read: https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html
//above link still in progress.....
