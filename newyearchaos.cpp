void minimumBribes(vector<int> q) {
    int size = q.size();
    int output = 0;
    int bribe;
    
    for(int i = size - 1; i >= 2; i--){
        if(q[i - 2] == i + 1){
            bribe = 2;
            q.erase(q.begin() + (i - 2));
        }else if(q[i - 1] == i + 1){
            bribe = 1;
            q.erase(q.begin() + (i - 1));
        }else if(q[i] == i + 1){
            bribe= 0;
            q.erase(q.begin() + i);
        }else{
            cout << "Too chaotic" << endl;
            return;
        }
        output += bribe;
    }
    if(q[0] > q[1]){
        output++;
    }
    
    cout << output << endl;
        
    return;
}