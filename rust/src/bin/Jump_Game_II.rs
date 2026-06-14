fn main() {}
pub fn jump(nums: Vec<i32>) -> i32 {
    let mut jumps = 0;
    let mut farthest = 0;
    let mut current_end = 0;
    for i in 0..nums.len() - 1 {
        farthest = farthest.max(i + nums[i] as usize);
        if farthest >= nums.len() - 1 {
            jumps += 1;
            break;
        }
        if current_end == i {
            jumps += 1;
            current_end = farthest;
        }
    }
    return jumps;
}
