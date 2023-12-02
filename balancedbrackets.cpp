string isBalanced(string s) {
    vector<string> stack;
    stack.push_back("o");
    
    for(int i=0;i<s.length();i++){

        string sym = s.substr(i,1);
        if(sym=="[" || sym=="{" || sym=="("){
            stack.push_back(sym);
        }else{
            if(((sym=="]")&&(stack.back()=="[")) || ((sym=="}")&&(stack.back()=="{")) || ((sym==")")&&(stack.back()=="("))){
                stack.pop_back();
            }else{
                cout<<"no"<<endl;
                return "NO";
            }
        }
    }
    
    if(stack.back()=="o"){
    cout<<"yes"<<endl;
    return "YES";
    }else{
        cout<<"no"<<endl;
        return "NO";
    }
}
