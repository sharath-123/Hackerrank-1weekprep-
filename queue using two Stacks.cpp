#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> inbox;
    vector<int> outbox;
    int count = -1;
    for(string line; getline(cin, line);) {        
        auto firstSpace = line.find_first_of(' ');
        auto q = 0;
        int param = 0;
        if (firstSpace == line.npos) {
            q = stoi(line);           
        } else {
            q = stoi(line.substr(0, firstSpace));
            param = stoi(line.substr(firstSpace + 1));
        }
        
        switch(q) {
            default:
                count = q + 1;
                break;
            case 1:
                inbox.push_back(param);
                break;
            case 2:
                if (outbox.empty()) {
                    while (!inbox.empty()) {
                        auto back = inbox.back();
                        inbox.pop_back();
                        outbox.push_back(back);
                    }
                }
                
                outbox.pop_back();
                break;
            case 3:
                if (outbox.empty()) {
                    while (!inbox.empty()) {
                        auto back = inbox.back();
                        inbox.pop_back();
                        outbox.push_back(back);
                    }
                }
                
                printf("%d\n", outbox.back());
                break;       
        }
        
        if (count == 0) {
            break;
        }
        count--;
    }
    
    return 0;
}
