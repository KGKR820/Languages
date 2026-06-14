fn main() {}
pub fn spiral_order(matrix: Vec<Vec<i32>>) -> Vec<i32> {
    let mut l: usize = 0;
    let mut r: usize = matrix[0].len() - 1;
    let mut t: usize = 0;
    let mut b: usize = matrix.len() - 1;
    let mut output: Vec<i32> = vec![];
    while l <= r && t <= b {
        for i in l..=r {
            output.push(matrix[t][i]);
        }
        if t == b {
            break;
        }
        t += 1;

        for i in t..=b {
            output.push(matrix[i][r]);
        }
        if l == r {
            break;
        }
        r -= 1;

        for i in (l..=r).rev() {
            output.push(matrix[b][i]);
        }
        b -= 1;

        for i in (t..=b).rev() {
            output.push(matrix[i][l]);
        }
        l += 1;
    }
    return output;
}
