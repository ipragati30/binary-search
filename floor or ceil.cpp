pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
		int low =0;
		int high = a.size()-1;
		int floor=-1;
		int ceil=-1;
		while(low<=high){
			int mid = low + (high-low)/2;
			if (a[mid]<=x){
				floor=a[mid];
				low=mid+1;
				
				
			}
			else{
				high=mid-1;
			}
		}
		low=0;
		high=a.size()-1;
		while(low<=high){
			int mid = low + (high-low)/2;
			if (a[mid]>=x){
				ceil=a[mid];
				high=mid-1;
				
				
			}
			
			else{
				low=mid+1;
			}
		}
		return {floor,ceil};
	
}
