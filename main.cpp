#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <map>
#include <sstream>
using namespace std;
map <int,bool> mp;
vector <int> nums;
ifstream fin("test.txt");
int main()
{
    int x;
    while(fin>>x)
        nums.push_back(x);
    int l=nums.size();
    for(int i=0;i<l;i++)
        mp[nums[i]]=true;
    for(int i=0;i<l;i++)
        if(mp.count(nums[i]-1)>0) ///start of a sequence
            mp[nums[i]]=false;
    int lg=0,lgm=0;
    for(int i=0;i<l;i++)
    {
        if(mp[nums[i]]==1)
        {
            int j=0;    
            lg=0;
            while(mp.count(nums[i]+j)>0 && nums[i]!=nums[i-1])
            {
                lg++;
                j++;
            }
            if(lg>lgm)
                lgm=lg;
        }
    }
    cout<<lgm;
    return 0;
}