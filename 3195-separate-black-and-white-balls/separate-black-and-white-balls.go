func minimumSteps(s string) int64 {
    var count int64 = 0
    left:=0
    n:=len(s) 
    right:=n-1
    for right>left{
        for s[left]=='0' && left<right{
            left++
        }

        for s[right]=='1' && left<right{
            right--
        }

        if s[left]=='1' && right>left{
            count+=int64(right-left)
            right--
            left++
        }

    }
    return count;
}