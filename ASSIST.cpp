#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;
 
int main() {
    vector<int> primes;
    primes.push_back(2);
 
    for (int i = 3; i <= 32000; i+=2) {
        bool isprime = true;
        int cap = sqrt(i) + 1;
 
        vector<int>::iterator p;
        for (p = primes.begin(); p != primes.end(); p++) {
            if (*p >= cap) break;
            if (i % *p == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime) primes.push_back(i);
    }
     int test;
     cin>>test;
     while(test)
     {             vector<int>::iterator p;
                   int count =0;
                 for (p = primes.begin(); count!=50; p++,count++) 
                 cout<<*p<<endl;
                 cout<<primes[test-1]<<endl;
                 cin>>test;
                 
     }
     return 0;
    }
     
