#include <iostream>
using namespace std;
bool Pattern(string sub, string pattern, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (sub[i] != pattern[i])
            return false;
    }
    return true;
}
int main()
{
    string s;
    getline(cin, s);
    int size = s.length();
    for (int i = 1; i <= size / 2; i++)
    {
        if (size % i == 0)
        {
            string patt = s.substr(0, i);
            bool flag = true;
            for (int j = i; j < size; j += i)
            {
                string sub = s.substr(j, i);
                if (!Pattern(sub, patt, i))
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                cout << "YUP";
                return 0;
            }
        }
    }
    cout << "False";
    return 0;
}
