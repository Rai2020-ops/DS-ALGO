class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        
        unordered_map<int, bool> mpp;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            mpp[a[i]]=false;
        }
        for(int i=0;i<m;i++)
        {    
            mpp[b[i]]=true;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(mpp[a[i]]==true)
            s.insert(a[i]);
        }
        return s.size();
        
        
    }
};