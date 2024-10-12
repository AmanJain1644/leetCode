func minGroups(intervals [][]int) int {

   type event struct{
        time int
        value int
    }

    events:= make([]event,0,2*len(intervals))

    for _,interval:=range intervals{

        events=append(events,event{time:interval[0],value:1})

        events=append(events,event{time:interval[1]+1,value:-1})

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