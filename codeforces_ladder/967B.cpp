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
    vector<int> sh; // sizes hole

    // input
    int i = 0; int a;
    long long ss = 0; // sum size
    // using long long since the this is the sum of the all vector elements which can be big

    while( i < n){
        cin >> a;
        ss += a;
        sh.push_back(a);
        i++;
        
    }
    a = 0; // reuse a as counting variable

    int fh = sh[0];
    
    sort(sh.begin()+1, sh.end());

    for(int i = n-1; i > 0; i--){
       long long cmp = (fh * A) - (ss*B) ;
       if ( cmp >= 0){
          break; // the condition is satisfied
       }
       ss -= sh[i];
       a++;
    }

    cout << a << endl;

}
