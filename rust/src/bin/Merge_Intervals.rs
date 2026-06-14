fn main() {}
pub fn merge(intervals: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
    let mut output: Vec<Vec<i32>> = vec![];
    let mut intervals = intervals;
    intervals.sort_by_key(|x| x[0]);
    output.push(intervals[0].clone());
    for ele in intervals {
        let temp = output.last_mut().unwrap();
        if ele[0] <= temp[1] {
            temp[1] = temp[1].max(ele[1]);
        } else {
            output.push(ele);
        }
    }
    output
}
