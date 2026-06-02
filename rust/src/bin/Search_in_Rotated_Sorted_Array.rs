fn main() {
    let arr: Vec<i32> = vec![2, 5, 6, 0, 1, 1, 1, 2, 2];
    println!("{}", search(arr, 6));
}
pub fn search(nums: Vec<i32>, target: i32) -> bool {
    let mut l: usize = 0;
    let mut r: usize = nums.len() - 1;

    while l <= r {
        let mid = (l + r) / 2;
        if nums[mid] == target {
            return true;
        }
        if nums[l] == nums[mid] && nums[mid] == nums[r] {
            l += 1;
            r -= 1;
        } else if nums[l] <= nums[mid] {
            if nums[l] <= target && nums[mid] > target {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        } else {
            if nums[r] >= target && nums[mid] < target {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    return false;
}
