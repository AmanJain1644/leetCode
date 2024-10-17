func maximumSwap(num int) int {
    ans:=0
    digits:=[]int{}
    for num>0{
        digits = append(digits,num%10)
        num/=10
    }  
    n:=len(digits)
    for i:=0;i<n/2;i++{
        digits[i],digits[n-i-1] = digits[n-1-i],digits[i]
    }  
    greater:=make([]int,n)
    greater[n-1] = n-1
    for i:=n-2;i>=0;i--{ 
        if digits[i]>digits[greater[i+1]]{
            greater[i] = i
        }else{
            greater[i] = greater[i+1]
        }
    }

    for i:=0;i<n;i++{
        if digits[i]<digits[greater[i]]{
            digits[i],digits[greater[i]] = digits[greater[i]],digits[i]
            break
        }
    }

    for i:=0;i<n;i++{
        ans = ans*10 + digits[i]
    }
    return ans
}