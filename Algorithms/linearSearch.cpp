#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int f,i, loc(-1), n;
    vector<int> a(n,0);
    cin >> n;
	for(i=0;i<n;i++) cin >> a[i];
    cout<<"Enter Element to be searched:"; cin >> f;
    for(i=0;i<n;i++) if(f==a[i]) {
		loc=i;
		break;
	}
	if(loc==-1) cout<<"Element not Found\n";
	else cout<<"Element:" << f << " Found at loc:" << loc << '\n';
	return 0;
}