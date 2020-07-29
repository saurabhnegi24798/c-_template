#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(a) a.begin() , a.end()
#define print(x)   cout<<x<<"\n";
#define pb push_back

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "["; for (int i = 0; i < v.size(); ++i) { os << v[i]; if (i != v.size() - 1) os << ", "; } os << "]\n"; return os;
}
template <typename T>
ostream& operator<<(ostream& os, const set<T>& v) {
    os << "["; for (auto it : v) {os << it; if (it != *v.rbegin())os << ", ";} os << "]\n"; return os;
}
template <typename T, typename S>
ostream& operator<<(ostream& os, const map<T, S>& v) {
    for (auto it : v)os << it.first << " : " << it.second << "\n"; return os;
}
template <typename T, typename S>
ostream& operator<<(ostream& os, const pair<T, S>& v) {
    os << "("; os << v.first << ", " << v.second << ")"; return os;
}
void go() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    go();

}