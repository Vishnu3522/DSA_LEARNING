class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans = "";
        int n = sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<arr[0].size();i++){
            char ch = arr[0][i];
            
            bool match = true;
            for(int j=1;j<N;j++){
                if(ch!=arr[j][i]){
                    match=false;
                    break;
                }
                
            }
            if(match == false){
                break;
            }
            else{
                ans.push_back(ch);
            }
            
        }
           if(ans.empty()) {
            return "-1";
        }
    return ans;
        
        
        
    }
};