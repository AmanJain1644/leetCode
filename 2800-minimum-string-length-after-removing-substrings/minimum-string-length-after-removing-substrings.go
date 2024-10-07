func minLength(s string) int {
    arr:= []byte{}
    for i:=0;i<len(s);i++{
        if(len(arr)>0){
            if s[i]=='B' && arr[len(arr)-1]=='A'{
                arr=arr[:len(arr)-1]
                continue;
            }else if s[i]=='D' && arr[len(arr)-1]=='C'{
                arr=arr[:len(arr)-1]
                continue;
            }

        }
        arr = append(arr,s[i]);
    }   
    return len(arr); 
}