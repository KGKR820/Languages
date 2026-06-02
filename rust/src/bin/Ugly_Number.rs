fn main() {
    println!("is_ugly : {}", is_ugly(1));
}
pub fn is_ugly(n: i32) -> bool {
    let mut temp = n;
    loop {
        if temp == 0 {
            return false;
        } else if temp == 1 {
            return true;
        } else if temp % 2 == 0 {
            temp /= 2;
        } else if temp % 3 == 0 {
            temp /= 3
        } else if temp % 5 == 0 {
            temp /= 5
        } else {
            return false;
        }
    }
}
