/*
I don't think anyone needs it's solution. The idea is to traverse the array using loop and when the element
is equal to k return the same
*/

int linearSearch(int arr[], int n, int k){
   int ans = -1;
    for(int i=0;i<n;i++){
         if(arr[i] == k){
              ans = i;
              break;
         }
    }
    return ans;

}