// Implement a simple text editor. The editor initially contains an empty string, . Perform  operations of the following  types:

// append - Append string  to the end of .
// delete - Delete the last  characters of .
// print - Print the  character of .
// undo - Undo the last (not previously undone) operation of type  or , reverting  to the state it was in prior to that operation.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;
stack<string>s;
 void append(){
     string s1;
     cin>>s1;
     string top;
     top = s.top();
     s.push(top+s1);
 }
 void delete_k(){
     int k;
     cin>>k;
     string top;
     top = s.top();
     string req = top.substr(0,top.size() - k);
    s.push(req);   
 }
  
void  print_k(){
    int k;
    cin >> k;
    string top = s.top();
    cout << top[k-1] << endl;
}

void undo(){
    s.pop();
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int Q;
    cin >> Q;
    s.push("");
    for(int i=0; i < Q; i++)
    {
        int ops;
        cin >> ops;
        switch (ops) 
        {
            case 1: 
                append();
                break;
            case 2:
                delete_k();
                break;
            case 3:
                print_k();
                break;
            case 4: 
                undo();
                break; 
        }
    }
    return 0;
}
