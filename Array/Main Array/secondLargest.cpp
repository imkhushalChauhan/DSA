class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int secondLargest=INT_MIN;
        int largest=arr[0];
        for(int i=1; i<arr.size(); i++){
            if(arr[i]>largest){
                secondLargest=largest;
                largest=arr[i];
            }
            else if(arr[i]>secondLargest && arr[i]!=largest ){
                secondLargest=arr[i];
            }
        }
        if(secondLargest!=INT_MIN){
            return secondLargest;
        }
        else return -1;
    }
};