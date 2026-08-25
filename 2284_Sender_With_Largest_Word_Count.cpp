#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        int len = messages.size();
        unordered_map<string,int>mp;
        for(int i=0;i<len;i++)
        {
            int count=1;
            for(int j=0;j<messages[i].length();j++)
            {
                if(messages[i][j]==' ')
                count++;
            }
            mp[senders[i]] += count;
        }
        int maxi = INT_MIN;
        string ans = "";
        for(auto word:mp)
        {
            if(word.second>maxi || (word.second == maxi && word.first > ans))
            {
                maxi = word.second;
                ans = word.first;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string>message={"nT","y Mx p iD Lo","xVg Ak IyQ u MG lmS Hq q e mb","N Qf i y","Zrs sbc tKE GGx xM D","wo UEZ uPf Xi XjE","tL y n","ac Up cy znC uw I","Dx vVW qa vxm","spz D MEB pq","ktu buy","Mau Y ob J gqD jVZ B pXS","q dB bdC Zd p dpr Np N","Qqx O umB j iO hM eMW Nt","T Vo C pnD r Dso PP qA q","u s vPx c LeH ju z","W Dee VQG a e"};
    vector<string>senders={"dhOKiI","OfOpYKCNku","zyh","hr","o","jDklz","lre","Zpi","doorY","OfOpYKCNku","doorY","b","wjAC","fBsUhoLpG","Zpi","wjAC","Owwx"};
    cout<<s.largestWordCount(message,senders);
    return 0;
}
