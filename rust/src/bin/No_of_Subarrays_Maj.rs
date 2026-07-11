fn main() {}
pub fn count_majority_subarrays(nums: Vec<i32>, target: i32) -> i32 {
    let mut ans = 0;
    for i in 0..nums.len() {
        let mut cnt = 0;
        for j in i..nums.len() {
            if nums[j] == target {
                cnt += 1;
            }
            if j - i + 1 < cnt * 2 {
                ans += 1;
            }
        }
    }
    return ans;
}
