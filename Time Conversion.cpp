// // Given a time in -hour AM/PM format, convert it to military (24-hour) time.

// // Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
// // - 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

// // Example


// // Return '12:01:00'.


// // Return '00:01:00'.

// // Function Description

// // Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

// // timeConversion has the following parameter(s):

// // string s: a time in  hour format
// // Returns

// // string: the time in  hour format
// // Input Format

// // A single string  that represents a time in -hour clock format (i.e.:  or ).

// // Constraints

// // All input times are valid
// // Sample Input

// // 07:05:45PM
// // Sample Output

// // 19:05:45

// Solution:


#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int size = s.length();
    if(s[size-2]=='A'){
        string hh = s.substr(0,2);
        int h = stoi(hh);
        if(h==12){
            string newh = "00";
            string newTime = newh.append(s.substr(2,6));
            return newTime;
        }else{
            return s.substr(0,size-2);
        } 
    } 
    else{
        string hh = s.substr(0,2);
        int h = stoi(hh);
        if(h==12){
            return s.substr(0,size-2);
        }
        int inPM = h+12;
        string newh = to_string(inPM);
        string newTime = newh.append(s.substr(2,6));
        return newTime;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
