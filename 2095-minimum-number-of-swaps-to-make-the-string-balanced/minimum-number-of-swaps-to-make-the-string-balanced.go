func minSwaps(s string) int {
    // arr:= []rune{}
    Imbalance:=0
    for _,c:=range s{
        if c=='['{
            // arr=append(arr,c)
            Imbalance++
        }else if Imbalance>0{
            // arr = arr[:len(arr)-1]
            Imbalance--
        }// else{
        //     Imbalance++
        // }
    }
    return (Imbalance+1)/2;
}