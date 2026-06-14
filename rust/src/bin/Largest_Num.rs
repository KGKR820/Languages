pub fn largest_number(nums: Vec<i32>) -> String {
    let mut as_str: Vec<String> = nums.into_iter().map(|n| n.to_string()).collect();
    as_str.sort_by(|a, b| {
        let order1 = format!("{}{}", a, b);
        let order2 = format!("{}{}", b, a);
        order2.cmp(&order1)
    });
    if as_str[0] == "0" {
        return "0".to_string();
    }
    as_str.concat()
}
fn main() {}
