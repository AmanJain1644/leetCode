func rearrangeArray(nums []int) []int {
    n := len(nums)
    ans := make([]int, n)
    posIndex := 0
    negIndex := 1
    
    for _, num := range nums {
        if num > 0 {
            ans[posIndex] = num
            posIndex += 2
        }
    }
    
    for _, num := range nums {
        if num < 0 {
            ans[negIndex] = num
            negIndex += 2
        }
    }

    return ans
}
