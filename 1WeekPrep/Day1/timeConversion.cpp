#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string time;
    if (s.find("AM")!=string::npos)
    {
        time = s.substr(0, s.length()-2);
        if(time.substr(0,2).compare("12") == 0)
            {
                time[0]='0';
                time[1]='0';
            }
    }
    else
    {
        int first = stoi(s.substr(0,2));
        if (s.substr(0,2).compare("12") != 0)
        {
            first += 12;
        }
        cout << first << endl;
        time = to_string(first);
        time += s.substr(2, s.size()-4);
    }
    return time;
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
