#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{

    int n = nums.size();
    int goodPos = n - 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (i + nums[i] >= goodPos)
        {
            goodPos = i;
        }
    }

    if (goodPos == 0)
        return true;
    else
        return false;
}

int main(){

}