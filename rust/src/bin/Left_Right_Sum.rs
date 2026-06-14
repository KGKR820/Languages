fn main() {}
pub fn left_right_difference(nums: Vec<i32>) -> Vec<i32> {
    let n = nums.len();
    let mut left_arr = vec![0; n];
    let mut right_arr = vec![0; n];
    let mut ans = vec![0; n];

    for i in 1..n {
        left_arr[i] = left_arr[i - 1] + nums[i - 1];
    }

    for i in (0..n - 1).rev() {
        right_arr[i] = right_arr[i + 1] + nums[i + 1];
    }

    for i in 0..n {
        ans[i] = (left_arr[i] - right_arr[i]).abs();
    }

    ans
}
