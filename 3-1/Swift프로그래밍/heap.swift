func myMaxHeapSort(_ list: [Int], reversed: Bool = false) -> [Int]{
    var tempList = list
    var result: [Int] = []
    
    for i in stride(from: list.count-1, to:-1, by: -1){
        if i == 0 {
            guard let last = tempList.popLast() else { fatalError() }
            result.append(last)
        } else {
            tempList = makeMaxHeap(tempList)
            let temp = tempList[0]
            tempList[0] = tempList[i]
            tempList[i] = temp
            guard let last = tempList.popLast() else { fatalError() }
            result.append(last)
        }
    }
    if reversed == false {
        result.reverse()
        return result
    } else {
        return result
    }
}

func makeMaxHeap(_ list: [Int]) -> [Int]{
    var result = list
    
    for i in 1..<list.count{
        var childNode = i
        repeat{
            let root: Int = (childNode - 1) / 2
            if result[root] < result[childNode]{
                let temp = result[childNode]
                result[childNode] = result[root]
                result[root] = temp
            }
            childNode = root
        } while (childNode != 0)
    }
    
    return result
}

print(myMaxHeapSort(makeMaxHeap([3,5,4,2,7,9,6]),reversed: true))
출처: https://icksw.tistory.com/91 [PinguiOS:티스토리]
