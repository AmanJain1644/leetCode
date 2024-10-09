func minAddToMakeValid(s string) int {
    // arr:=[]rune{}
    OpenCount:=0
    Imbalance:=0
    for _,c:= range s{
        if c=='('{
            // arr=append(arr,c)
            OpenCount++
        // }else if len(arr)>0{
        }else if OpenCount>0{
            // arr=arr[:len(arr)-1]
            OpenCount--
        }else{
            Imbalance++
        }
    }
    // return len(arr)+Imbalance
    return OpenCount+Imbalance
}