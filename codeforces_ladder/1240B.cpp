#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <sstream>
#include <cassert>
#define pb push_back
#define mp make_pair

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, l, r;
	cin >> n >> l >> r;
    int s_index_jump = n - l + 1;
    

    int l_index_jump;
    l_index_jump = r-1;

    int ssum = 0;
    int lsum = 0;
    int se = 1;
    int le = 1;

    for(int i = 0; i < n ; i++){
        if (i >= s_index_jump ){
            se *= 2;
        }

        if ( !(i > l_index_jump) && (i != 0) ){
            le *= 2;
        }
        ssum += se;
        lsum += le;

        // cout << "loop order " << i << ":    " << se << " " << le << endl;
    }
    cout << ssum << " " << lsum << endl;
}