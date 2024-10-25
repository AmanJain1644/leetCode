func removeSubfolders(folder []string) []string {
    ans:= []string{}
    sort.Strings(folder);
    ans = append(ans,folder[0])
    for _,val:=range folder[1:] {
        checker:=ans[len(ans)-1]
        if strings.HasPrefix(val,checker) && len(val)>len(checker) && val[len(checker)]=='/'{
            continue
        }else{
            ans = append(ans,val);
        }
    }
    return ans;

}