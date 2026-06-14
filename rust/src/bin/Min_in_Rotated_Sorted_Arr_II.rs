fn main() {
    let arr: Vec<i32> = vec![2, 2, 2, 0, 1];
    println!("{}", find_min(arr));
}
pub fn find_min(nums: Vec<i32>) -> i32 {
    let mut l: usize = 0;
    let mut r: usize = nums.len() - 1;
    while l < r {
        let mid = l + (r - l) / 2;
        if nums[mid] > nums[r] {
            l = mid + 1;
        } else if nums[mid] < nums[r] {
            r = mid;
        } else {
            r -= 1;
        }
    }
    nums[l]
}
