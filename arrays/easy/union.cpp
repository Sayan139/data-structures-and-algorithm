#include <iostream>
#include <set>
using namespace std;
// bruite force approach of the code with slight bad time comeplexity with two O(nlogn) and one O(n)
vector<int> unionb(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    set<int> temp;
    for (int i = 0; i < n1; i++)
    {
        temp.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        temp.insert(arr2[i]);
    }
    // to conver the set into vector so i can return
    return vector<int>(temp.begin(), temp.end());
}
// optimal approach
vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    int n1 = a.size();
    int n2 = b.size();
    int l = 0;
    int r = 0;
    vector<int> temp;
    while (l < n1 && r < n2)
    {
        if (a[l] <= b[r])
        {
            if (temp.size() == 0 || temp.back() != a[l])
            {
                temp.push_back(a[l]);
            }
            l++;
        }
        if (b[r] <= a[l])
        {
            if (temp.size() == 0 || temp.back() != b[r])
            {
                temp.push_back(b[r]);
            }
            r++;
        }
    }
    while (l < n1)
    {
        if (temp.size() == 0 || temp.back() != a[l])
        {
            temp.push_back(a[l]);
        }
        l++;
    }
    while (r < n2)
    {
        if (temp.size() == 0 || temp.back() != b[r])
        {
            temp.push_back(b[r]);
        }
        r++;
    }
    return temp;
}