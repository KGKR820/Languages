fn main() {
    let v = vec![2, 1, 1, 2];
    println!("{}", rob(v));
}
pub fn rob(nums: Vec<i32>) -> i32 {
    if nums.len() == 1 {
        return nums[0];
    }
    let mut v: Vec<i32> = vec![0; nums.len()];
    v[0] = nums[0];
    v[1] = nums[1].max(v[0]);
    for i in 2..nums.len() {
        v[i] = (v[i - 2] + nums[i]).max(v[i - 1]);
    }
    return v[nums.len() - 1];
}
