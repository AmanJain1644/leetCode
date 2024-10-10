func rearrangeArray(nums []int) []int {
    i:=0
    j:=1
    ans:= make([]int,len(nums))
    for _,n:= range nums{
        if n>0{
            ans[i]=n;
            i+=2;
        }else{
            ans[j]=n;
            j+=2;
        }
    }    
    return ans;
}