func countMaxOrSubsets(nums []int) int {
    maxi:=0
    for _,num:= range nums{
        maxi|=num
    }

    count:=0
    n:=len(nums)
    n=1<<n
    for i:=0;i<n;i++{
        curr:=0
        for j:=0;j<len(nums);j++{
            if (i&(1<<j))!=0{
                curr|=nums[j]
            }
        }
         
        if curr==maxi{
            count++
        }
    }
    return count
}
