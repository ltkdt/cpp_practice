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
	int n, k;
    int cnt = 0;
    cin >> n >> k;
    string mynum;
    cin >> mynum;

    // Special cases 

    if( n == 1){
        if (k == 1){
            cout << 0 << endl;
            return 0;
        }
        else{
            cout << mynum << endl;
            return 0;
        }
    }
    if( k == 0){
        cout << mynum << endl;
        return 0;
    }

    // Normal cases

    if(mynum[0] != '1'){
        mynum[0] = '1';
        k--;
    }


    for(int i = 1; i < n; i++){
        if( (mynum[i] != '0') && (k>0)){
            mynum[i] = '0';
            k--;
        }
    }

    cout << mynum << endl;
}