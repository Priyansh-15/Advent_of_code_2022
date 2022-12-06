#include<bits/stdc++.h>
using namespace std;
 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
bool psin(map<char,int>&freq)
{
  for(auto x:freq)
  {
    if(x.second>=2)
      return false;
  }
  return true;
}

int sol()
{
  string s;
  cin>>s;
  int pos=-1;
  // char a,b,c,d;
  // a=s[0];
  // b=s[1];
  // c=s[2];
  // d=s[3];
  map<char,int>freq;
  for(int i=0;i<14;i++)
    freq[s[i]]++;
  if(psin(freq))
    cout<<14<<endl;
  for(int i=14;i<s.length();i++)
  {
      freq[s[i-14]]--;
      freq[s[i]]++;
      if(psin(freq))
      {
        cout<<i+1<<endl;
        return 0;
      }
  }
  cout<<s.length()<<endl;
  return 0;
}
 
int main() 
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ios::sync_with_stdio(0);
  cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
        sol();
    return 0;
}

