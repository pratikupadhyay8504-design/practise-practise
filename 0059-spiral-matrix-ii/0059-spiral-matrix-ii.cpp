class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>mat(n,vector<int>(n,0));
        int top=0;
        int down=n-1;
        int left=0;
        int right=n-1;
        int i;
        int dir=0;
        int nums=1;
        while(left<=right && top<=down){
            if(dir==0){
                for(i=left;i<=right;i++){
                    mat[top][i]=nums++;
                }
                top++;
                dir++;
            }
            if(dir==1){
                for(i=top;i<=down;i++){
                    mat[i][right]=nums++;
                }
                right--;
                dir++;
            }
            if(dir==2){
                for(i=right;i>=left;i--){
                    mat[down][i]=nums++;
                }
                down--;
                dir++;
            }
            if(dir==3){
                for(i=down;i>=top;i--){
                    mat[i][left]=nums++;
                }
                left++;
                dir++;
            }
            if(dir==4){
                dir=0;
            }
        }
        return mat;
    }
};