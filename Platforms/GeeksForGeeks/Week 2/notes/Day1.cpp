#include <bits/stdc++.h>
using namespace std;

//Day1 : Sorting and searching

/*
    Problem: Maximum toys with k amount 
*/

/*
    Method: Using sort() function
    Time: O(nlogn)
    Space: O(1)
*/
int fun(int arr[], int n, int k)
{
    if (n == 0 || k == 0)
    {
        return 0;
    }

    int i = 0;
    int ans = 0;

    sort(arr, arr + n); // O(nlogn)

    while (i < n && k > arr[i]) // O(k)
    {
        ans++;
        k = k - arr[i];
        i++;
    }

    return ans;
}

/*
    Problem: Fractional Knapsack problem

    Items as (value, weight) pairs 
    Input: 
        arr[] = {{60, 10}, {100, 20}, {120, 30}} 
        Knapsack Capacity, W = 50

    Output: 
        Maximum possible value = 240 
        
    Explanation: 
        By taking items of weight 10 and 20 kg and 2/3 fraction 
        of 30 kg. Hence total price will be 60+100+(2/3)(120) = 240

*/

struct Item {
    int value, weight;
 
    Item(int value, int weight)
    {
       this->value=value;
       this->weight=weight;
    }
};

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}
 
// Greedy method
double fractionalKnapsack(int W, struct Item arr[], int n)
{
    // sorting based on ration
    sort(arr, arr + n, cmp);
 
    int curWeight = 0; 
    double finalvalue = 0.0;
 

    for (int i = 0; i < n; i++) {
        // If adding Item won't overflow, add it completely
        if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }
 
        // Add fraction
        else {
            int remain = W - curWeight;
            finalvalue += arr[i].value
                          * ((double)remain
                             / (double)arr[i].weight);
            break;
        }
    }

    return finalvalue;
}
 



