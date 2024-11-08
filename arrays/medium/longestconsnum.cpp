#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
// bruite force apprach with tc:O(n^2) and sc:O(1)
/*To begin, we will utilize a loop to iterate through each element one by one.
Next, for every element x, we will try to find the consecutive elements like x+1, x+2, x+3, and so on using the linear search algorithm in the given array.
Within a loop, our objective is to locate the next consecutive element x+1. 
If this element is found, we increment x by 1 and continue the search for x+2. 
Furthermore, we increment the length of the current sequence (cnt) by 1. 
This process repeats until step 2.2 occurs.

If a specific consecutive element, for example, x+i, is not found, we will halt the search for subsequent consecutive elements such as x+i+1, x+i+2, and so on. Instead, we will take into account the length of the current sequence (cnt).
Among all the lengths we get for all the given array elements, the maximum one will be the answer.*/
bool linearsearch(vector<int> arr, int n)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == n)
            return true;
    }
    return false;
}
int longestconsbruite(vector<int> arr)
{
    int n = arr.size();
    int longest = 0;
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        int count = 1;
        if (linearsearch(arr, x + 1) == true)
        {
            x += 1;
            count++;
        }
        longest = max(longest, count);
    }
    return longest;
}
// now coming to the better approach of the question
/*We will consider 3 variables, 
‘lastSmaller’ →(to store the last included element of the current sequence), 
‘cnt’ → (to store the length of the current sequence), 
‘longest’ → (to store the maximum length).
Initialize ‘lastSmaller’ with ‘INT_MIN’, ‘cnt’ with 0, and ‘longest’ with 1(as the minimum length of the sequence is 1).
The steps are as follows:

First, we will sort the entire array.
To begin, we will utilize a loop(say i) to iterate through each element one by one.
For every element, we will check if this can be a part of the current sequence like the following:
If arr[i]-1 == lastSmaller: The last element in our sequence is labeled as 'lastSmaller' and the current element 'arr[i]' is exactly 'lastSmaller'+1. It indicates that 'arr[i]' is the next consecutive element. To incorporate it into the sequence, we update 'lastSmaller' with the value of 'arr[i]' and increment the length of the current sequence, denoted as 'cnt', by 1.
If arr[i] == lastSmaller: If the current element, arr[i], matches the last element of the sequence (represented by 'lastSmaller'), we can skip it since we have already included it before.
Otherwise, if lastSmaller != arr[i]: On satisfying this condition, we can conclude that the current element, arr[i] > lastSmaller+1. It indicates that arr[i] cannot be a part of the current sequence. So, we will start a new sequence from arr[i] by updating ‘lastSmaller’ with the value of arr[i]. And we will set the length of the current sequence(cnt) to 1.
Every time, inside the loop, we will compare ‘cnt’ and ‘longest’ and update ‘longest’ with the maximum value. longest = max(longest, cnt)
Finally, once the iteration is complete, we will have the answer stored in the variable ‘longest’.*/
int lomgestsuccesiveelebetter(vector<int> arr)
{
    int n = arr.size();
    if (n == 0)
        return 0;
    sort(arr.begin(), arr.end());
    int lastsmaller = INT_MIN;
    int count = 0;
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastsmaller)
        {
            count += 1;
            lastsmaller = arr[i];
        }
        else if (arr[i] - 1 != lastsmaller)
        {
            count = 1;
            lastsmaller = arr[i];
        }
        longest = max(longest, count);
    }
    return longest;
}
// optimal solution of the approach
/*We will adopt a similar approach to the brute-force method but with optimizations in the search process. Instead of searching sequences for every array element as in the brute-force approach, we will focus solely on finding sequences only for those numbers that can be the starting numbers of the sequences. This targeted approach narrows down our search and improves efficiency.

We will do this with the help of the Set data structure.

How to identify if a number can be the starting number for a sequence:

First, we will put all the array elements into the set data structure.
If a number, num, is a starting number, ideally, num-1 should not exist. So, for every element, x, in the set, we will check if x-1 exists inside the set. :
If x-1 exists: This means x cannot be a starting number and we will move on to the next element in the set.
If x-1 does not exist: This means x is a starting number of a sequence. So, for number, x, we will start finding the consecutive elements.
How to search for consecutive elements for a number, x:

Instead of using linear search, we will use the set data structure itself to search for the elements x+1, x+2, x+3, and so on.
Thus, using this method we can narrow down the search and optimize the approach.

Algorithm:

We will declare 2 variables, 

‘cnt’ → (to store the length of the current sequence), 
‘longest’ → (to store the maximum length).
First, we will put all the array elements into the set data structure.
For every element, x, that can be a starting number(i.e. x-1 does not exist in the set) we will do the following:
We will set the length of the current sequence(cnt) to 1.
Then, again using the set, we will search for the consecutive elements such as x+1, x+2, and so on, and find the maximum possible length of the current sequence. This length will be stored in the variable ‘cnt’.
After that, we will compare ‘cnt’ and ‘longest’ and update the variable ‘longest’ with the maximum value (i.e. longest = max(longest, cnt)).
Finally, we will have the answer i.e. ‘longest’.*/
int longestSuccessiveElements(vector<int> arr)
{
    int n = arr.size();
    if (n == 0)
        return 0;
    unordered_set<int> st(arr.begin(), arr.end());
    int longest = 0;
    for (auto x : st)
    {
        if (st.find(x - 1) == st.end())
        {
            int count = 1;
            int num = x;
            while (st.find(num + 1) != st.end())
            {
                x += 1;
                count += 1;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}