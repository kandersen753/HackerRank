#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);

    try
    {
        int num = stoi(S);
        cout << num;
    }
    catch (const std::invalid_argument& e)
    {
        cout << "Bad String" << endl;
    }
    catch (const std::out_of_range& e)
    {
        cout << "Bad String2" << endl;
    }

    return 0;
}
