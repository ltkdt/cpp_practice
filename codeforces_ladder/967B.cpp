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
	int n, A, B;
	cin >> n >> A >> B;
    vector<int> sh;
    int i = 0; int a;
    long long ss = 0;
    while( i < n){
        cin >> a;
        ss += a;
        sh.push_back(a);
        i++;
        
    }
    a = 0;

    int fh = sh[0];
    
    sort(sh.begin()+1, sh.end());

    for(int i = n-1; i > 0; i--){
       // int cmp = (fh * A) - (ss*B);
       long long cmp = (fh * A) - (ss*B) ;
       if ( cmp >= 0){
          break;
       }
       //cout << cmp << endl;
       ss -= sh[i];
       a++;
    }

    cout << a << endl;

}
