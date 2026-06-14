fn main() {}
pub fn insert(intervals: Vec<Vec<i32>>, mut new_interval: Vec<i32>) -> Vec<Vec<i32>> {
    let mut output: Vec<Vec<i32>> = vec![];
    for ele in intervals {
        if ele[1] < new_interval[0] {
            output.push(ele);
        } else if ele[0] > new_interval[1] {
            output.push(new_interval);
            new_interval = ele;
        } else {
            new_interval[0] = new_interval[0].min(ele[0]);
            new_interval[1] = new_interval[1].max(ele[1]);
        }
    }
    output.push(new_interval);
    output

    //----------------------------------------------------------------

    // let mut output: Vec<Vec<i32>> = vec![];
    // let mut i = 0;
    // let mut chk: bool = false;
    // while i < intervals.len() {
    //     if intervals[i][0] > new_interval[0] && !chk {
    //         if let Some(temp) = output.last_mut() {
    //             if temp[1] >= new_interval[0] {
    //                 temp[1] = temp[1].max(new_interval[1]);
    //             } else {
    //                 output.push(new_interval.clone());
    //             }
    //         } else {
    //             output.push(new_interval.clone());
    //         }
    //         chk = true;
    //     } else {
    //         if let Some(temp) = output.last_mut() {
    //             if temp[1] >= intervals[i][0] {
    //                 temp[1] = temp[1].max(intervals[i][1]);
    //             } else {
    //                 output.push(intervals[i].clone());
    //             }
    //         } else {
    //             output.push(intervals[i].clone());
    //         }
    //         i += 1;
    //     }
    // }
    // if !chk {
    //     if let Some(temp) = output.last_mut() {
    //         if temp[1] >= new_interval[0] {
    //             temp[1] = temp[1].max(new_interval[1]);
    //         } else {
    //             output.push(new_interval.clone());
    //         }
    //     } else {
    //         output.push(new_interval.clone());
    //     }
    // }
    // output
}
