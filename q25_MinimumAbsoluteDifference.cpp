q.HackerRank Minimum Absolute Difference in an Array problem solution



int minimumAbsoluteDifference(vector<int> arr) {
int N = arr.size();
sort(arr.begin(),arr.end());
int ans = abs(arr[2]-arr[1]);


 for (int i=2; i <= N; i++) ans = min(ans,abs(arr[i]-arr[i-1]));
return ans;
}
