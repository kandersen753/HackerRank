/*
* Complete the 'palindromeIndex' function below.
*
* The function is expected to return an INTEGER.
* The function accepts STRING s as parameter.
*/
bool checkPalindrome (string s)
 {
    for (int i=0; i<(int)s.length()/2; i++)
     {
        if (s[i] != s[s.length()-1-i])
         {
            return false;
         }
     }

    return true;
 }
int palindromeIndex(string s) 
 {
    string tester;

    if (checkPalindrome(s))
     {
        return -1;
     }

    for (int i=0; i<(int)s.length(); i++)
     {
        tester = s;
        if (checkPalindrome(tester.erase(i,1)))
         {
            return i;
         }
     }
    return -1;
}
