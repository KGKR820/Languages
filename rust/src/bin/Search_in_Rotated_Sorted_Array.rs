fn main() {
    let arr: Vec<i32> = vec![2, 5, 6, 0, 1, 1, 1, 2, 2];
    println!("{}", search(arr, 6));
}
pub fn search(nums: Vec<i32>, target: i32) -> bool {
    let mut l: i32 = 0;
    let mut r: i32 = (nums.len() - 1) as i32;

    while l <= r {
        let mid: i32 = (l + r) / 2;
        let lu: usize = l as usize;
        let ru: usize = r as usize;
        let mu: usize = mid as usize;
        if nums[mu] == target {
            return true;
        }
        if nums[lu] == nums[mu] && nums[mu] == nums[ru] {
            l += 1;
            r -= 1;
        } else if nums[lu] <= nums[mu] {
            if nums[lu] <= target && nums[mu] > target {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        } else {
            if nums[ru] >= target && nums[mu] < target {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    return false;
}
