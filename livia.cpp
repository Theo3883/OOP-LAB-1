#include <iostream>
#include <map>
using namespace std;
#include <vector>
#include <cmath>
int a[100];
map <int,vector<int> > mp;
vector <int> nums;
int k;
bool containsNearbyDuplicate(vector<int>& nums, int k) {
   int l=nums.size();
   for(int i=0;i<l;i++)
    {
        if(mp[nums[i]].empty())
            mp[nums[i]].push_back(i);
        else
            {
                int l2=mp[nums[i]].size();
                for(int j=0;j<l2;j++)
                    if(abs(mp[nums[i]][j]-i)<=k)
                        return true;
                mp[nums[i]].push_back(i);
            }
    }
    return false;
}
int main()
{
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    k=2;
    if(containsNearbyDuplicate(nums,k))
        cout<<"YES";
    else
        cout<<"NO";
}