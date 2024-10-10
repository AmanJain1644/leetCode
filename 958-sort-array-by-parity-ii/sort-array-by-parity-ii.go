func sortArrayByParityII(nums []int) []int {
    even:=[]int{}
    odd:=[]int{}
    for _,n:=range nums{
        if (n%2==0){
            even=append(even,n)
        }else{
            odd=append(odd,n)
        }
    }  
    ans:=[]int{}
    i:=0
    j:=0
    for i<len(even) && j<len(odd){
        ans=append(ans,even[i])
        ans=append(ans,odd[j])
        i++
        j++
    }  
    return ans
}