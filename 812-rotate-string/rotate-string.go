func rotateString(s string, goal string) bool {
    if s == goal {
        return true
    }

    n := len(s)
    if n != len(goal) {
        return false
    }

    runes := []rune(s)

    for i := 0; i < n; i++ {
        first := runes[0]
        copy(runes, runes[1:])
        runes[n-1] = first

        if string(runes) == goal {
            return true
        }
    }
    return false
}
