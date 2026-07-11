fn main() {
    let arr: Vec<i32> = vec![1, 2, 2, 3];
    println!("{}", count_majority_subarrays(arr, 2));
}
pub fn count_majority_subarrays(nums: Vec<i32>, target: i32) -> i64 {
    let mut pref: Vec<i32> = vec![0; nums.len()];
    if nums[0] == target {
        pref[0] = 1;
    } else {
        pref[0] = -1;
    }
    for i in 1..pref.len() {
        if nums[i] == target {
            pref[i] = 1 + pref[i - 1];
        } else {
            pref[i] = -1 + pref[i - 1];
        }
    }
    let mut freq: Vec<i32> = vec![0; 2 * nums.len() + 1];
    let mut ans: i64 = 0;
    let mut prevsum = 0;
    let mut valid = 0;
    let n: i32 = nums.len() as i32;
    freq[n as usize] = 1;
    for i in 0..pref.len() {
        if pref[i] > prevsum {
            valid += freq[(n + prevsum) as usize];
        } else {
            valid -= freq[(n + pref[i]) as usize];
        }
        freq[(n + pref[i]) as usize] += 1;
        prevsum = pref[i];
        ans += valid as i64;
    }
    return ans;
}
