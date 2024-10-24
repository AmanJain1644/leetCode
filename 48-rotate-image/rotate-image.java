class Solution {
    static void reverse(int a[], int l, int r){
        if(l>r){
            return;
        }

        int temp = a[l];
        a[l] = a[r];
        a[r] = temp;

        reverse(a, l+1, r-1);
    }
    public void rotate(int[][] matrix) {
        for(int i=0; i<matrix.length; i++){
            for(int j=0; j<matrix[0].length; j++){
                if(i<=j){
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i]= temp;
                }
            }
        }

        for(int i=0; i<matrix.length; i++){
            reverse(matrix[i], 0, matrix.length-1);
        }

    }
}