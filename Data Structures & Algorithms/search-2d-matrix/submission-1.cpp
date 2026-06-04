class Solution {
public:

int row(vector<vector<int>>& matrix, int target){
        int r=matrix.size()-1;
        int l=0;
        while(l<r){
            int mid=(r+l+1)/2;
            if(matrix[mid][0]<=target){
                l=mid;
            }
            else{
                r=mid-1;
            }
        }  
        return l;
}


    int column(vector<vector<int>>& matrix, int target){
         int ro = row(matrix, target);
         int c=matrix[0].size()-1;
         int l=0;
        while(l<c){
            int mid=(c+l+1)/2;
            if(matrix[ro][mid]<=target){
                l=mid;
            }
            else{
                c=mid-1;
            }
        }
        return c;
    }
    // int row(vector<vector<int>>& matrix, int target){
    //     int r=matrix.size()-1;
    //     int l=0;
    //     while(l<=r){
    //         int mid=(r+l+1)/2;
    //         if(matrix[mid][0]<target){
    //             l=mid+1;
    //         }
    //         else if(matrix[mid][0]==target){
    //             return matrix[mid][0];
    //         }
    //         else{
    //             r=mid-1;
    //         }
    //         if(l==r){
    //             return l;
    //         }
    //     }

        
    

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int rows=matrix.size();
        // int cols=matrix[0].size();
        int x = row(matrix, target);
        int y = column(matrix, target);
        if(matrix[x][y]==target){
            return true;
        }
        else{
            return false;
        }
        
        // int r=row();
        // int c=column();
        // cout<<c<<endl;
        // return 0;
        // int x = column(matrix, target);
        // return 0;
        }
       
};
