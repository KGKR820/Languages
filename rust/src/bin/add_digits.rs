fn main() {
    println!("Output : {}", add_digits(38));
}
pub fn add_digits(num: i32) -> i32 {
    let mut temp: i32 = num;
    if num <= 9 {
        return num;
    } else {
        return add_digits({
            let mut var: i32 = 0;
            while temp > 0 {
                var += temp % 10;
                temp /= 10;
            }
            var
        });
    }
    // if num == 0 {
    //     return 0;
    // }
    // let digital_root: i32 = num % 9;
    // if digital_root == 0 {
    //     return 9;
    // }
    // return digital_root;
}
