#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)
#define rf(i,a,b) for(int i=a;i>=b;i--)
#define rep(i,n) f(i,0,n)
#define rrep(i,n) rf(i,n-1,0)
#define w(t) int t; cin>>t; while(t--)
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define mii map<int,int>
#define omi unordered_map<int,int>
#define mci map<char,int>
#define mmi multimap<int,int>
#define inf (int)(1e18)
#define endl "\n"
using namespace std;

void fast_IO_file()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
// #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
// #endif
}

string ToBinary(int x)
{
	string a = "";
	if (x == 0)
		a += '0';
	while (x > 0)
	{
		a += (48 + (x % 2));
		x /= 2;
	}
	reverse(a.begin(), a.end());

	return a;
}


int32_t main()
{
	fast_IO_file();
	int n, flag = 0;
	cin >> n;

	int a[2 * n];
	mii  m1;

	rep(i, 2 * n)
	{
		cin >> a[i];
		m1[a[i]]++;
	}

	mmi m;
	rep(i, 2 * n)
	{
		m.insert(make_pair(a[i], i + 1));
	}

	for (auto it : m1)
	{
		if (it.ss % 2 != 0)
		{
			flag = 1;
			break;
		}
	}


	if (flag)
		cout << -1;
	else
	{
		vi v;

		for (auto it = m.begin(); it != m.end(); it++)
		{
			v.pb(it->ss);



		}

		for (int i = 0; i < v.size() - 1; i += 2)
		{
			cout << v[i] << " " << v[i + 1] << endl;
		}


	}

	return 0;
}