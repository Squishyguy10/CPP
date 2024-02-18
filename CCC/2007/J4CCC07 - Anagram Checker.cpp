#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    getline(cin, a);
    getline(cin, b);
    unordered_map<char, int> mapA, mapB;

    for(int i = 0; i < 26; i++) {
        mapA.insert({'A'+i, 0});
        mapB.insert({'A'+i, 0});
    }

    for(int i = 0; i < a.length(); i++) {
        if(a[i] != ' ')
            mapA[a[i]]++;
    }
    for(int i = 0; i < b.length(); i++) {
        if(b[i] != ' ')
            mapB[b[i]]++;
    }

    for(auto i : mapA) {
        if(i.s != mapB[i.f]) {
            cout << "Is not an anagram." << '\n';
            return 0;
        }
    }
    cout << "Is an anagram." << '\n';


    return 0;
}