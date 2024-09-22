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

	int len;
    string in;
    string out = ""; // empty string that will be inserted
    stack<int> index_insert;
    
    cin >> len >> in;
    int i = len;

    for(len; len>0; len--){ 
        // index used for encoding
        int position_move = ( len%2 == 0) ? len / 2 : len - ((len-1)/2);
        // example: 2 1 1 0 0 
        index_insert.push(position_move-1);
    }

    for(i; i>0; i--){
        // decoding
        out.insert(index_insert.top(),1, in[i-1]);
        index_insert.pop();
        // `string& insert(size_type pos, size_type n, char c);` 
        // where "n" is the number of times you want to insert
    }
    cout << out << "\n";
}