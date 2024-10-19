func stringMaker(str *string,substr string){
    n:=len(substr)
    subBytes:= []byte(substr)
    for i:=0;i<n/2;i++{
        subBytes[i],subBytes[n-1-i]=subBytes[n-1-i],subBytes[i]
    }

    for i:=0;i<n;i++{
        if subBytes[i]=='1'{
            subBytes[i]='0'
        }else{
            subBytes[i]='1'
        }
    }

    *str+="1"+string(subBytes)
}

func findKthBit(n int, k int) byte {    
    str:="0"
    for i:=0;i<n;i++{
        substr:=str
        stringMaker(&str,substr)
    }
    
    for i:=0;i<len(str);i++{
        if i+1==k{
            return str[i]
        }
    }
    return str[0]
}