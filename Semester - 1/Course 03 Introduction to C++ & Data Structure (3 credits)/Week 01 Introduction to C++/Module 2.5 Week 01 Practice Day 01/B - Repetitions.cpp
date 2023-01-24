#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    string s;
    int A = 0, T = 0, C = 0, G = 0, maximum = 0;
    getline(cin, s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == 'A') {
            A++;
            if(A > maximum) {
                maximum = A;
            }
            if(s[i+1] != 'A') {
                A = 0;
            }
        }
        if(s[i] == 'C') {
            C++;
            if(C > maximum) {
                maximum = C;
            }
            if(s[i+1] != 'C') {
                C = 0;
            }
        }
        if(s[i] == 'T') {
            T++;
            if(T > maximum) {
                maximum = T;
            }
            if(s[i+1] != 'T') {
                T = 0;
            }
        }
        if(s[i] == 'G') {
            G++;
            if(G > maximum) {
                maximum = G;
            }
            if(s[i+1] != 'G') {
                G = 0;
            }
        }
    }
    cout << maximum << "\n";
    return 0;
}
