int floorSqrt(int n) {
        // Your code goes here
        int low=1;
        int high =n;
         int mid;           
        while(low<=high){
            int mid =low+(high-low)/2;
            if(mid==sqrt(n)){
                return mid;
            }
            else if (mid>sqrt(n)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return high;
    }
