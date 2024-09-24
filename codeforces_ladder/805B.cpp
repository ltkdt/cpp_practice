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
	int n, cnt;
    char last;
    cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i+=2){
        if( i == n-1){
            if(last =='a'){
                cout << 'b';
            }
            else{
                cout << 'a';
            }
            break;
        }
        if( cnt % 2 == 0){
            cout << "aa";
            last = 'a';
        }
        else{
            cout << "bb";
            last = 'b';
        }

        cnt++;
    }

    cout << endl;
}