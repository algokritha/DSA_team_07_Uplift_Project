/* Problem Link =>  https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1  */

/* Brute Force */
int maxLen(int arr[], int n)
{
    int max_len = 0; 
    for (int i = 0; i < n; i++) { 
        int curr_sum = 0; 
  
        for (int j = i; j < n; j++) { 
            curr_sum += arr[j]; 
  
            if (curr_sum == 0) 
                max_len = max(max_len, j - i + 1); 
        } 
    } 
    return max_len;
}

/* Using map */


int maxLen(int arr[], int n)
{
    unordered_map<int, int> presum; 
  
    int sum = 0;
    int max_len = 0;
  
    for (int i = 0; i < n; i++) { 
        sum += arr[i]; 
  
        if (arr[i] == 0 && max_len == 0) 
            max_len = 1; 
        if (sum == 0) 
            max_len = i + 1; 
  
        if (presum.find(sum) != presum.end()) { 
            max_len = max(max_len, i - presum[sum]); 
        } 
        else { 
            presum[sum] = i; 
        } 
    } 
  
    return max_len; 
}
