func minAddToMakeValid(s string) int {
    arr:=[]rune{}
    Imbalance:=0
    for _,c:= range s{
        if c=='('{
            arr=append(arr,c)
        }else if len(arr)>0{
            arr=arr[:len(arr)-1]
        }else{
            Imbalance++
        }
    }
    return len(arr)+Imbalance
}