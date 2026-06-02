fn main() {
    let arr = vec![3, 0, 8, 2, 0, 0, 1];
    println!("{}", can_jump(arr))
}
pub fn can_jump(nums: Vec<i32>) -> bool {
    // let mut dp = vec![0; nums.len()];
    // dp[0] = nums[0];
    // if dp[0] >= (nums.len() - 1) as i32 {
    //     return true;
    // }
    // for i in 1..nums.len() {
    //     if i as i32 <= dp[i - 1] {
    //         dp[i] = (i as i32 + nums[i]).max(dp[i - 1]);
    //     }
    //     if dp[i] >= (nums.len() - 1) as i32 {
    //         return true;
    //     }
    // }
    // return false;
    let mut reach: usize = 0;
    for i in 0..nums.len() {
        if reach >= i {
            reach = reach.max(i + nums[i] as usize);
        }
        if reach >= nums.len() - 1 {
            return true;
        }
    }
    return false;
}
