//   || हर हर महादेव जय अम्बे गौरी ।।   //
#include <bits/stdc++.h>  // This will work only for g++ compiler.
 
#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i < (int)(n); ++i) // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interval from l to r, r inclusive
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based
 
// short hand for usual tokens
#define pb push_back
#define fi first
#define se second
#define int long long
// to be used with algorithms that process a container, e.g., find(all(c),42)
#define all(x) (x).begin(), (x).end() // Forward traversal
#define rall(x) (x).rbegin(), (x).rend() // Reverse traversal
 
// traversal function to avoid long template definition. Now with C++11 auto alleviates the pain.
#define tr(c, i) for(auto i = (c).begin(); i != (c).end(); ++i)
 
// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c, x) ((c).find(x) != (c).end())
 
// find version works for all containers. This is present in std namespace.
#define cpresent(c, x) (find(all(c), x) != (c).end())
 
// Avoiding wrap around of size()-1 where size is an unsigned int.
#define sz(a) int((a).size())
 
using namespace std;
 
// Shorthand for commonly used types
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
 
void solve() {
    // Insert solution code here
   long long n,k;
   cin>>n>>k;
   vi mul;
   long long value,prod = 1,odd,even , minl,ming;
   for0(i,n)
   {
    cin>>value;
    mul.emplace_back(value);
    prod = (prod * value) % k;
   }
   if(prod % k == 0)
   cout<<"0\n";
   else
   {
    odd = 0 ; even = 0;
    ming = INT_MAX;
    switch(k)
    {
        case 2: cout<<"1\n";
        break;
        case 3: value = 0;
        for0(i,n)
        {
            if((mul[i]== 2) || (mul[i]== 5) ||(mul[i]== 8))
            {
            value = 1;
            break;
            }
        }
        if(value==1)
        cout<<"1\n";
        else
        cout<<"2\n";
        break;
        case 4: for0(i,n)
        {
            if(mul[i]%2 == 0)
            even++;
            else
            odd++;
        }
       
      if ((even == 1) && (odd >= 1))
        cout<<"1\n";
          else
          {
            int diff = 0;
            for0(i,n)
            {
              if(( 4 -mul[i] == 1) || (8 - mul[i] ==1 ))
              {
                diff = 1;
                break;
              }
            }
            if(diff == 1)
            cout<<"1\n";
            else
            cout<<"2\n";
          }
        break;
        case 5 :
        for0(i,n)
        {
            if(mul[i] < 5)
            minl = 5 - mul[i];
            else
            minl = 10 - mul[i];
 
            if(ming > minl)
            ming = minl;
        }
        cout<<ming<<endl;
    }
   }
 
}
   
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
 
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
