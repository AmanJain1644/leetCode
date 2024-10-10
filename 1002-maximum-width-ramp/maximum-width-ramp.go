func maxWidthRamp(nums []int) int {
    arr:=[]int{}
    ans:= 0
    for i,num:= range nums{
        if len(arr)==0 || nums[arr[len(arr)-1]]>num{
            arr=append(arr,i)
        }
    }   

    for j:=len(nums)-1; j>=0; j--{
        for len(arr)>0 && nums[arr[len(arr)-1]]<=nums[j]{
            if ans<j-arr[len(arr)-1]{
                ans=j-arr[len(arr)-1]
            }
            arr=arr[:len(arr)-1]
        }
    }
    return ans
}