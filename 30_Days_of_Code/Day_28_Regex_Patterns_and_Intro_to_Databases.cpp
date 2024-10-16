#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> name(N);
    vector<string> email(N);
    vector<string> gmailers;    
    
    for (int i=0; i<N; i++)
    {
        cin >> name[i] >> email[i];
        if (regex_match(email[i], regex("(.*)@gmail.com"))) 
        {
            gmailers.push_back(name[i]);
        }   
    }
    
   sort(gmailers.begin(), gmailers.end());
   
   for (int i=0; i<gmailers.size(); i++)
   {
       cout << gmailers[i] << endl;
   }
    
    

    return 0;
}

