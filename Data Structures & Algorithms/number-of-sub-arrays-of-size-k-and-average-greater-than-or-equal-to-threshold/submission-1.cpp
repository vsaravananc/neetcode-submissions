class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int total;
        int count = 0;
        for(int i = 0 ; i < k ; i ++){
            total += arr[i];
        }
        if((total/k) >= threshold) count++;
        int l , r;
        l = 0 , r = k;
        while (r < arr.size()){
            total -= arr[l];
            total += arr[r];
            if((total / k) >= threshold) count++;
            l++,r++;
        }
        return count;
    }
};