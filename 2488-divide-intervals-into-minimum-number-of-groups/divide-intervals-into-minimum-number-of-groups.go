func minGroups(intervals [][]int) int {

    events:=[]struct{
        time int
        value int
    }{}

    for _,interval:=range intervals{

        events=append(events,struct{
            time int
            value int
        }{time:interval[0],value:1})

        events=append(events,struct{
            time int
            value int
        }{time:interval[1]+1,value:-1})

    }

    sort.Slice(events,func (i,j int)bool{
        if events[i].time == events[j].time{
            return events[i].value<events[j].value            
        }
        return events[i].time<events[j].time
    })

    maxi,curr:=0,0

    for _, event:= range events{
        curr+=event.value
        if curr>maxi {
            maxi=curr
        }
    }
    return maxi
}