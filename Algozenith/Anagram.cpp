// #include<bits/stdc++.h>
// using namespace std;



// int main(){
//         string s, t;
//         cin>>s;
//         cin>>t;

//     if(s.size()!=t.size()){
//         cout<<"NO!\n";


//     }
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());

//     if(s==t)cout<<"Yes\n";
//     else cout<<"NO!\n";

//     return 0;
// }

//using functions

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length())
//             return false;
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         return s == t;
//     }
// };

// int main() {
//     string s, t;
//     cin >> s >> t;

//     Solution sol;
//     if (sol.isAnagram(s, t))
//         cout << "YES\n";
//     else
//         cout << "NO\n";

//     return 0;
// }

//optimal approach'
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    int freq[26] = {0};

    for (size_t i = 0; i < s.size(); ++i) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; ++i)
        if (freq[i] != 0) return false;

    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    cout << (isAnagram(s, t) ? "YES\n" : "NO\n");
    return 0;
}
