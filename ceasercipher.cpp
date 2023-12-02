string caesarCipher(string s, int k) {
    int len = s.size() ;
    k = k % 26 ;
    for(int i = 0 ; i < len ; i++ ){

    if(s[i] <= 'z' && s[i] >= 'a'){
        if(s[i] + k > 'z'){
            s[i] = 'a' + (k - (int('z') - int(s[i]))-1) ;
        }else{
            s[i] = s[i] + k ;
        }
    }else if(s[i] <= 'Z' && s[i] >= 'A'){
        if(s[i] + k > 'Z'){
            s[i] = 'A' + (k-(int('Z') - int(s[i]))-1) ;
        }else{
            s[i] = s[i] + k ;
        }
    }
}   
return s ;
}