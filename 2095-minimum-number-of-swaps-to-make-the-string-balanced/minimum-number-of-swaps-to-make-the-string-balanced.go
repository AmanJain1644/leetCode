func minSwaps(s string) int {
    arr:= []byte{}
    n:= len(s)
    Imbalance:=0
    for i:=0;i<n;i++{
        c:=s[i]
        if c=='['{
            arr=append(arr,c)
        }else if len(arr)>0{
            arr = arr[:len(arr)-1]
        }else{
            Imbalance++;
        }
    }
    return (Imbalance+1)/2;
}