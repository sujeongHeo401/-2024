//{ Driver Code Starts
/////https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        // * n + original value
        for(int i = 0; i < n; i++){
            long newEle = arr[(int)(arr[i])]%n;
            arr[i] = newEle *n + arr[i];
        }
        
        for(int i = 0 ; i < n; i++){
            if(i == 1){
                cout << "arr[1]" << arr[1]<<endl;    
            }
            if(i == 3){
                cout << "arr[3]" << arr[3]<<endl;    
            }
            
            arr[i] = arr[i] / n;
        }
        
        
        // Your code here
        
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
