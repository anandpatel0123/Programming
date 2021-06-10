
// C++ implementation to find the 
// permutation of the array such that 
// sum of adjacent elements is not 
// divisible by 3 
  
#include <bits/stdc++.h> 
using namespace std; 
#define hell 1000000007 
#define N 100005 
  
// Function to segregate numbers 
// based on their remainder 
// when divided by three 
void count_k( 
    vector<int>& arr, int& c_0, 
    int& c_1, int& c_2, 
    stack<int>& ones, 
    stack<int>& twos, 
    stack<int>& zeros) 
{ 
    // Loop to iterate over the elements 
    // of the given array 
    for (int i = 0; i < arr.size(); i++) { 
  
        // Condition to check the 
        // remainder of the number 
        if (arr[i] % 3 == 0) { 
            c_0++; 
            zeros.push(arr[i]); 
        } 
        else if (arr[i] % 3 == 1) { 
            c_1++; 
            ones.push(arr[i]); 
        } 
        else { 
            c_2++; 
            twos.push(arr[i]); 
        } 
    } 
    return; 
} 
  
// Function to find the permutation 
// of the array such that sum of 
// adjacent elements is not divisible by 3 
void printArrangement( 
    vector<int>& arr, 
    int& c_0, int& c_1, int& c_2, 
    stack<int>& ones, 
    stack<int>& twos, 
    stack<int>& zeros) 
{ 
    // Condition to check when 
    // it's impossible to arrange 
    if ((c_0 == 0 && c_1 != 0 && c_2 != 0) 
        or c_0 > c_1 + c_2 + 1) { 
        cout << "No"; 
        return; 
    } 
  
    // Condition to check when 
    // there are no zeros, and 
    // only ones or only twos 
    if (c_0 == 0) { 
        cout<<"Yes"; 
        return; 
    } 
  
    // Array to store the permutation 
    int i, j, ans[N]; 
    memset(ans, -1, sizeof(ans)); 
  
    // Place the ones on alternate places 
    // in the answer array, 
    // leaving spaces for zeros remainder 
    // elements in the array 
    for (i = 1, j = 0; j < c_1; i += 2, j++) { 
        ans[i] = ones.top(); 
        ones.pop(); 
    } 
  
    // Adding a zero to 
    // connect it with a two 
    ans[i - 1] = zeros.top(); 
    zeros.pop(); 
    c_0--; 
  
    // Place the twos on alternate places 
    // in the answer array, 
    // leaving spaces for zeros 
    for (j = 0; j < c_2; j++, i += 2) { 
        ans[i] = twos.top(); 
        twos.pop(); 
    } 
  
    // Fill the zeros finally, 
    // between the ones and the twos 
    for (int k = 0; c_0 > 0; k += 2) { 
        if (ans[k] == -1) { 
            ans[k] = zeros.top(); 
            c_0--; 
        } 
    } 
  
    // Print the arrangment of the array 
    for (int i = 0; i < N; i++) { 
        if (ans[i] != -1) 
            cout << ans[i] << " "; 
    } 
    return; 
} 
  
// Function to solve the problem 
void solve(int n, 
           vector<int>& arr) 
{ 
  
    // As there can be only 3 remainders 
    stack<int> ones, zeros, twos; 
  
    int c_0 = 0, c_1 = 0, c_2 = 0; 
    count_k(arr, c_0, c_1, c_2, 
            ones, twos, zeros); 
  
    // Function Call 
    printArrangement( 
        arr, c_0, c_1, c_2, 
        ones, twos, zeros); 
} 
  
// Driver Code 
signed main() 
{ 
    int t;
    cin>>t;

    int n ; 
    cin>>n;
    int temp;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }

  
    solve(n, arr); 
    return 0; 
} 
