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
#include <unordered_map>

#define pb push_back
#define mp make_pair

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
    string fl, sl, in; // first layout, second layout, input text
	
    getline(cin, fl);
    getline(cin, sl);
    getline(cin, in);

    // You can read more on map vs unordered_map on the Internet, but for now I only want to do element access and no need for traversal or sorted data
    unordered_map<char, char> dict;

    for(int i = 0; i < 26; i++){
        dict[ fl[i] ] = sl[i];
        
    }
    
    for(int i = 0; i < in.length(); i++ ){
        
        if(isupper(in[i])){
            char u = toupper(dict[ tolower(in[i])]);
            cout << u  ;
        }
        else if(isdigit(in[i])){
            cout << in[i];
        }
        else{
            cout << dict[ in[i]] ;
        }
    }
    cout << "\n";
    
}