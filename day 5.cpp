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
 
// vector<int> extractIntegerWords(string str)
// {
//     stringstream ss;
//     vector<int>pri;
//     /* Storing the whole string into string stream */
//     ss << str;
 
//     /* Running loop till the end of the stream */
//     string temp;
//     int found;
//     while (!ss.eof()) {
 
//         /* extracting word by word from stream */
//         ss >> temp;
 
//         /* Checking the given word is integer or not */
//         if (stringstream(temp) >> found)
//             pri.push_back(found);
 
//         /* To save from space at the end of string */
//         temp = "";
//     }
//     return pri;
// }

int sol()
{
  // cout<<"1"<<endl;
  int n;
  cin>>n;
  // cout<<n<<endl;
  vector<stack<char>>s;
  // cout<<s.size()<<endl;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    // cout<<x<<endl;
    stack<char>pri;
    while(x--)
    {
      char ps;
      cin>>ps;
      pri.push(ps);
    }
    // cout<<"hii"<<endl;
    s.push_back(pri);
  }
  // cout<<s.size();
  // for(int i=0;i<n;i++)
    // cout<<s[i].size()<<endl;
  int m;
  cin>>m;
  m*=6;
  vector<int>temp;
  bool flag=false;
  while(m--)
  {
    string x;
    cin>>x;
    // cout<<x<<endl;
    // vector<int>temp=extractIntegerWords(x);
    // int a,b,c;
    if(flag)
      temp.push_back(stoi(x));
    flag=!flag;
    // a=temp[0];
    // b=temp[1];
    // c=temp[2];
    // cout<<a<<b<<c<<endl;
    // while(a--)
    // {
    //   s[c-1].push(s[b-1].top());
    //   s[b-1].pop();
    // }
  }
  for(int i=0;i<temp.size();i+=3)
  {
    int a,b,c;
    a=temp[i];
    b=temp[i+1];
    c=temp[i+2];
    vector<char>in;
    while(a--)
    {
      in.push_back(s[b-1].top());
      s[b-1].pop();
    }
    for(int j=in.size()-1;j>=0;j--)
      s[c-1].push(in[j]);
  }
  for(int i=0;i<n;i++)
  {
    cout<<s[i].top();
  }
  cout<<endl;
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


//INPUT
// 2
// 3
// 2
// Z
// N
// 3
// M
// C
// D
// 1
// P
// 4
// move 1 from 2 to 1
// move 3 from 1 to 3
// move 2 from 2 to 1
// move 1 from 1 to 2
// 9
// 8
// F
// T
// C
// L
// R
// P
// G
// Q
// 8
// N
// Q
// H
// W
// R
// S
// F
// J
// 7
// F
// B
// H
// W
// P
// M
// Q
// 5
// V
// S
// T
// D
// F
// 7
// Q
// L
// D
// W
// V
// F
// Z
// 4
// Z
// C
// L
// S
// 6
// Z
// B
// M
// V
// D
// F
// 3
// T
// J
// B
// 8
// Q
// N
// B
// G
// L
// S
// P
// H
// 501
// move 1 from 8 to 1
// move 1 from 6 to 1
// move 3 from 7 to 4
// move 3 from 2 to 9
// move 11 from 9 to 3
// move 1 from 6 to 9
// move 15 from 3 to 9
// move 5 from 2 to 3
// move 3 from 7 to 5
// move 6 from 9 to 3
// move 6 from 1 to 6
// move 2 from 3 to 7
// move 5 from 4 to 5
// move 7 from 9 to 4
// move 2 from 9 to 5
// move 10 from 4 to 2
// move 6 from 5 to 4
// move 2 from 7 to 6
// move 10 from 2 to 3
// move 21 from 3 to 5
// move 1 from 3 to 6
// move 3 from 6 to 9
// move 1 from 8 to 9
// move 5 from 4 to 5
// move 4 from 9 to 3
// move 17 from 5 to 1
// move 1 from 6 to 2
// move 16 from 5 to 1
// move 3 from 3 to 6
// move 6 from 6 to 4
// move 1 from 2 to 4
// move 4 from 1 to 2
// move 2 from 6 to 2
// move 28 from 1 to 3
// move 1 from 9 to 7
// move 1 from 8 to 7
// move 1 from 5 to 4
// move 1 from 2 to 6
// move 1 from 3 to 1
// move 3 from 2 to 5
// move 1 from 6 to 3
// move 4 from 4 to 7
// move 5 from 5 to 2
// move 1 from 5 to 6
// move 6 from 1 to 3
// move 1 from 6 to 2
// move 26 from 3 to 6
// move 2 from 7 to 9
// move 4 from 7 to 3
// move 19 from 6 to 3
// move 6 from 2 to 4
// move 5 from 3 to 2
// move 1 from 9 to 7
// move 26 from 3 to 8
// move 6 from 4 to 3
// move 1 from 3 to 8
// move 1 from 6 to 7
// move 6 from 3 to 6
// move 6 from 6 to 4
// move 1 from 9 to 2
// move 2 from 4 to 9
// move 22 from 8 to 2
// move 2 from 6 to 5
// move 1 from 9 to 1
// move 1 from 6 to 5
// move 1 from 7 to 5
// move 3 from 6 to 7
// move 2 from 6 to 1
// move 1 from 1 to 5
// move 3 from 5 to 9
// move 4 from 8 to 4
// move 2 from 1 to 4
// move 18 from 2 to 1
// move 2 from 7 to 8
// move 3 from 9 to 5
// move 8 from 1 to 9
// move 5 from 9 to 3
// move 1 from 9 to 8
// move 2 from 9 to 4
// move 2 from 7 to 8
// move 5 from 5 to 7
// move 1 from 9 to 3
// move 4 from 8 to 4
// move 1 from 7 to 8
// move 4 from 4 to 3
// move 2 from 8 to 3
// move 1 from 8 to 9
// move 2 from 1 to 8
// move 3 from 4 to 5
// move 1 from 8 to 4
// move 1 from 9 to 3
// move 1 from 8 to 5
// move 8 from 1 to 8
// move 11 from 2 to 9
// move 12 from 3 to 5
// move 1 from 3 to 9
// move 1 from 8 to 5
// move 11 from 9 to 3
// move 4 from 5 to 9
// move 3 from 8 to 7
// move 3 from 7 to 8
// move 1 from 5 to 8
// move 7 from 4 to 3
// move 1 from 4 to 5
// move 1 from 2 to 8
// move 3 from 7 to 6
// move 3 from 4 to 8
// move 1 from 7 to 9
// move 2 from 4 to 7
// move 5 from 8 to 1
// move 3 from 6 to 5
// move 2 from 4 to 2
// move 1 from 9 to 4
// move 1 from 8 to 6
// move 1 from 2 to 9
// move 1 from 8 to 5
// move 3 from 8 to 4
// move 3 from 4 to 2
// move 4 from 3 to 9
// move 17 from 5 to 9
// move 9 from 9 to 6
// move 1 from 9 to 3
// move 5 from 6 to 3
// move 3 from 6 to 3
// move 8 from 9 to 5
// move 2 from 8 to 5
// move 1 from 4 to 8
// move 1 from 5 to 3
// move 1 from 8 to 5
// move 3 from 2 to 6
// move 3 from 1 to 4
// move 7 from 5 to 1
// move 1 from 2 to 6
// move 13 from 3 to 6
// move 2 from 7 to 8
// move 13 from 6 to 5
// move 3 from 5 to 7
// move 6 from 5 to 6
// move 1 from 7 to 6
// move 2 from 7 to 3
// move 1 from 6 to 8
// move 13 from 3 to 5
// move 9 from 5 to 9
// move 7 from 5 to 7
// move 17 from 9 to 2
// move 3 from 4 to 7
// move 9 from 2 to 9
// move 10 from 9 to 3
// move 8 from 7 to 8
// move 2 from 5 to 3
// move 4 from 2 to 6
// move 11 from 3 to 9
// move 9 from 6 to 5
// move 5 from 9 to 8
// move 1 from 3 to 1
// move 3 from 9 to 1
// move 2 from 5 to 2
// move 1 from 7 to 9
// move 2 from 9 to 4
// move 2 from 9 to 8
// move 13 from 1 to 8
// move 3 from 8 to 5
// move 27 from 8 to 1
// move 10 from 5 to 9
// move 1 from 7 to 2
// move 2 from 4 to 3
// move 10 from 9 to 6
// move 1 from 8 to 7
// move 15 from 1 to 9
// move 13 from 9 to 5
// move 15 from 5 to 7
// move 5 from 1 to 3
// move 8 from 7 to 1
// move 7 from 7 to 1
// move 16 from 1 to 8
// move 4 from 3 to 9
// move 4 from 1 to 7
// move 4 from 9 to 6
// move 5 from 2 to 7
// move 15 from 8 to 6
// move 1 from 9 to 1
// move 3 from 3 to 4
// move 1 from 9 to 7
// move 1 from 2 to 7
// move 1 from 2 to 7
// move 1 from 8 to 1
// move 3 from 4 to 8
// move 3 from 8 to 1
// move 8 from 6 to 8
// move 7 from 1 to 4
// move 11 from 6 to 8
// move 14 from 6 to 5
// move 13 from 8 to 7
// move 4 from 7 to 5
// move 15 from 7 to 4
// move 6 from 5 to 4
// move 2 from 5 to 9
// move 1 from 5 to 2
// move 3 from 8 to 5
// move 19 from 4 to 7
// move 10 from 5 to 8
// move 2 from 6 to 8
// move 1 from 4 to 8
// move 2 from 7 to 9
// move 9 from 7 to 4
// move 6 from 4 to 6
// move 11 from 4 to 8
// move 2 from 5 to 4
// move 5 from 6 to 4
// move 1 from 6 to 7
// move 3 from 9 to 5
// move 3 from 8 to 5
// move 3 from 7 to 6
// move 11 from 8 to 7
// move 1 from 9 to 5
// move 1 from 6 to 8
// move 1 from 2 to 1
// move 5 from 4 to 9
// move 2 from 4 to 1
// move 2 from 1 to 4
// move 1 from 1 to 9
// move 4 from 5 to 1
// move 1 from 4 to 6
// move 17 from 7 to 5
// move 9 from 8 to 7
// move 6 from 9 to 7
// move 3 from 1 to 9
// move 12 from 7 to 9
// move 12 from 9 to 5
// move 5 from 7 to 9
// move 17 from 5 to 3
// move 7 from 3 to 1
// move 5 from 1 to 5
// move 5 from 9 to 2
// move 4 from 3 to 5
// move 1 from 4 to 8
// move 5 from 2 to 1
// move 22 from 5 to 9
// move 3 from 7 to 6
// move 6 from 6 to 9
// move 2 from 5 to 4
// move 1 from 6 to 3
// move 2 from 4 to 1
// move 3 from 8 to 2
// move 1 from 3 to 4
// move 24 from 9 to 1
// move 4 from 3 to 9
// move 2 from 2 to 9
// move 2 from 3 to 1
// move 1 from 8 to 6
// move 1 from 6 to 9
// move 1 from 8 to 9
// move 2 from 7 to 4
// move 1 from 8 to 3
// move 1 from 4 to 7
// move 3 from 9 to 8
// move 1 from 2 to 1
// move 9 from 9 to 3
// move 1 from 8 to 7
// move 1 from 4 to 3
// move 2 from 9 to 7
// move 1 from 9 to 3
// move 2 from 8 to 4
// move 12 from 3 to 8
// move 2 from 1 to 7
// move 1 from 4 to 3
// move 30 from 1 to 5
// move 6 from 5 to 7
// move 12 from 7 to 2
// move 1 from 3 to 4
// move 2 from 1 to 3
// move 1 from 4 to 9
// move 10 from 5 to 7
// move 10 from 2 to 6
// move 8 from 8 to 3
// move 3 from 1 to 3
// move 5 from 6 to 3
// move 2 from 8 to 5
// move 1 from 9 to 2
// move 2 from 8 to 6
// move 4 from 7 to 2
// move 3 from 2 to 7
// move 2 from 7 to 5
// move 1 from 4 to 9
// move 11 from 3 to 1
// move 7 from 6 to 9
// move 3 from 2 to 3
// move 10 from 1 to 7
// move 14 from 7 to 5
// move 3 from 7 to 6
// move 5 from 9 to 7
// move 29 from 5 to 7
// move 6 from 3 to 9
// move 2 from 9 to 7
// move 15 from 7 to 5
// move 11 from 5 to 6
// move 5 from 9 to 5
// move 10 from 5 to 8
// move 1 from 2 to 4
// move 1 from 8 to 2
// move 2 from 4 to 3
// move 2 from 5 to 9
// move 8 from 8 to 9
// move 11 from 9 to 3
// move 1 from 1 to 8
// move 18 from 7 to 3
// move 1 from 9 to 3
// move 28 from 3 to 5
// move 12 from 6 to 7
// move 1 from 2 to 9
// move 15 from 7 to 2
// move 1 from 8 to 1
// move 10 from 2 to 9
// move 10 from 5 to 3
// move 2 from 2 to 3
// move 18 from 3 to 4
// move 6 from 9 to 4
// move 1 from 1 to 7
// move 1 from 6 to 4
// move 1 from 8 to 2
// move 1 from 9 to 4
// move 2 from 9 to 4
// move 19 from 4 to 3
// move 1 from 7 to 9
// move 1 from 9 to 7
// move 1 from 6 to 8
// move 3 from 2 to 8
// move 2 from 9 to 5
// move 15 from 3 to 1
// move 7 from 5 to 1
// move 3 from 4 to 9
// move 1 from 7 to 2
// move 3 from 3 to 1
// move 6 from 5 to 2
// move 3 from 3 to 9
// move 4 from 9 to 2
// move 5 from 5 to 3
// move 1 from 3 to 5
// move 3 from 5 to 7
// move 3 from 8 to 5
// move 1 from 7 to 5
// move 4 from 5 to 1
// move 4 from 4 to 2
// move 2 from 7 to 8
// move 12 from 1 to 6
// move 1 from 8 to 6
// move 6 from 2 to 3
// move 9 from 3 to 8
// move 1 from 3 to 4
// move 3 from 6 to 1
// move 2 from 9 to 2
// move 1 from 4 to 5
// move 2 from 8 to 3
// move 10 from 2 to 1
// move 2 from 4 to 7
// move 12 from 1 to 4
// move 1 from 5 to 1
// move 7 from 4 to 9
// move 2 from 3 to 2
// move 6 from 9 to 2
// move 1 from 9 to 1
// move 1 from 7 to 8
// move 5 from 6 to 7
// move 3 from 6 to 1
// move 6 from 2 to 3
// move 2 from 4 to 3
// move 1 from 6 to 8
// move 1 from 6 to 7
// move 8 from 3 to 9
// move 2 from 4 to 5
// move 3 from 2 to 4
// move 10 from 8 to 2
// move 22 from 1 to 9
// move 9 from 2 to 4
// move 1 from 1 to 3
// move 1 from 3 to 2
// move 3 from 2 to 4
// move 2 from 7 to 1
// move 14 from 4 to 2
// move 2 from 1 to 8
// move 2 from 4 to 5
// move 4 from 7 to 8
// move 24 from 9 to 6
// move 3 from 5 to 9
// move 1 from 9 to 8
// move 1 from 5 to 2
// move 1 from 6 to 7
// move 6 from 9 to 1
// move 1 from 7 to 3
// move 5 from 8 to 6
// move 9 from 6 to 3
// move 4 from 1 to 4
// move 2 from 1 to 2
// move 11 from 6 to 3
// move 13 from 3 to 2
// move 2 from 9 to 8
// move 8 from 3 to 8
// move 2 from 8 to 5
// move 1 from 7 to 5
// move 3 from 6 to 3
// move 11 from 8 to 5
// move 13 from 2 to 4
// move 10 from 5 to 2
// move 2 from 3 to 4
// move 2 from 5 to 7
// move 15 from 4 to 9
// move 2 from 7 to 4
// move 2 from 4 to 2
// move 2 from 4 to 9
// move 2 from 4 to 2
// move 1 from 3 to 8
// move 1 from 8 to 1
// move 1 from 1 to 2
// move 1 from 6 to 3
// move 7 from 2 to 4
// move 1 from 5 to 3
// move 7 from 9 to 1
// move 7 from 1 to 2
// move 4 from 6 to 9
// move 12 from 9 to 7
// move 6 from 7 to 5
// move 1 from 3 to 5
// move 7 from 4 to 7
// move 3 from 7 to 8
// move 3 from 8 to 6
// move 18 from 2 to 9
// move 7 from 2 to 3
// move 15 from 9 to 4
// move 3 from 3 to 9
// move 1 from 3 to 1
// move 3 from 5 to 4
// move 1 from 1 to 2
// move 1 from 9 to 2
// move 2 from 6 to 2
// move 5 from 7 to 6
// move 5 from 2 to 7
// move 3 from 3 to 4
// move 5 from 5 to 3
// move 6 from 7 to 4
// move 9 from 4 to 2
// move 18 from 4 to 9
// move 6 from 2 to 1
// move 1 from 1 to 9
// move 4 from 7 to 4
// move 7 from 2 to 4
// move 1 from 2 to 8
// move 1 from 4 to 2
// move 4 from 3 to 4
// move 16 from 9 to 5
// move 9 from 9 to 8
// move 1 from 9 to 7
// move 4 from 1 to 2
// move 2 from 5 to 4
// move 10 from 5 to 4
// move 4 from 2 to 1
// move 5 from 1 to 2
// move 1 from 8 to 5
// move 1 from 6 to 5
// move 4 from 8 to 5
// move 2 from 6 to 9
// move 3 from 6 to 2
// move 2 from 9 to 1
// move 1 from 7 to 6
// move 1 from 3 to 8
// move 9 from 5 to 9
// move 4 from 8 to 1
// move 2 from 8 to 2
// move 1 from 5 to 7
// move 9 from 9 to 8
// move 1 from 7 to 5
// move 9 from 8 to 2
// move 6 from 1 to 6
// move 6 from 2 to 6
// move 10 from 2 to 5
// move 5 from 2 to 1
// move 1 from 3 to 5
// move 8 from 5 to 4
// move 5 from 1 to 3
// move 10 from 6 to 8
// move 3 from 6 to 9
// move 4 from 3 to 1
// move 5 from 8 to 2
// move 4 from 5 to 9
// move 1 from 3 to 7
// move 1 from 7 to 3
// move 1 from 8 to 6
// move 1 from 6 to 1
// move 15 from 4 to 8
// move 5 from 9 to 2
// move 1 from 9 to 1
// move 1 from 1 to 3
// move 6 from 4 to 8
// move 12 from 8 to 7
// move 1 from 3 to 5
// move 3 from 1 to 9
// move 13 from 4 to 9
// move 5 from 7 to 2
// move 1 from 5 to 4
// move 8 from 9 to 5
// move 6 from 2 to 5
// move 2 from 5 to 6


//OUTPUT
// MCD
// LBBVJBRMH
