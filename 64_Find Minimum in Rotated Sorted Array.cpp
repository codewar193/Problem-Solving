int findMin(vector<int>& arr)
{
	// Write your code here.
    int low = 0;
	int high = arr.size()-1;
	//if array is not rotated 
   if(arr[low]<=arr[high])return arr[low];
   int mid;
   while(low<=high){
	mid = (high+low)-low/2;

	if(mid-1>=0 && arr[mid]<arr[mid-1])return arr[mid];

	if(arr[mid]>arr[high]){
		low= mid+1;
	}else{
		high= mid-1;
	}
   }
}
