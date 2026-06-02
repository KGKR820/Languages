fn main() {
    // ======= Integers =======
    // i8-i128 and u8-u128
    let x: i16 = -378;
    let y: u8 = 255; // 256 out of range
    println!("Signed Integer 16 bit : {}", x);
    println!("Unsigned Integer 8 bit : {}", y);
    // Range of i16 => -2^15 -> 2^15-1
    // Range of u8 => 0 -> 2^8-1

    // ======= Floats =======
    // f32 and f64
    let pi: f64 = 3.14623;
    let frac: f32 = 2.4;
    println!("Value of 64-bit float value pi : {:.3}", pi);
    println!("Value of 32-bit float value frac : {}", frac);

    // ======= Bool =======
    // bool -> true or false
    let check: bool = true;
    println!("Check Bool value : {}", check);

    // ======= Char =======
    // char
    let ch: char = 'A';
    println!("Char Letter : {}", ch);

    // ======= Compound Data Types =======

    // ===== Arrays =====
    let arr: [i16; 5] = [1, 2, 3, 4, 5];
    let size: usize = arr.len();
    println!("Array arr : {:?}\nsize : {}", arr, size);

    let fruits: [&str; 3] = ["Apple", "Banana", "Custard Apple"];
    println!("Fruit name starting with C : {}", fruits[2]);

    // ===== Tuples =====
    let pkmon = ("squirtle".to_string(), 32, true, ["Watortle", "Blastoise"]);
    // let pkmon : (String,i32,bool,[&str;2]) = ("squirtle".to_string(),32,true,["Watortle", "Blastoise"]);
    println!("Pkmon Squirtle : {:?}", pkmon);
    // &str -> string slice
    // String -> String and to convert a string slice to string we shall use to_string()

    // ===== Slices ======
    let numbers: &[i32] = &[1, 3, 4, 3, 6, 3];
    println!("Number Slices : {:?}", numbers);

    // ===== String vs. String Slices (&str) ======
    // `String`: An owned, growable, and dynamically allocated string type.
    let mut name: String = String::from("AC");
    name.push_str(" Man");
    println!("Name : {}", name);
    // `mut` explicitly allows the variable `name` to be modified.
    // A `String` stores its text data on the heap. It is growable because it
    // keeps track of three things: a pointer to the heap, the length, and the *capacity*.

    let slice: &str = &name[0..2];
    println!("Slice Value : {}", slice);
    // `&str` (String slice): An immutable borrow (a view) into string data.
    // It is a "fat pointer" — it stores a pointer to the start of the slice
    // AND the length of the slice. Because `&str` is an immutable reference,
    // it cannot modify or grow the underlying string.

    hello_world();
    println!("Returned Result : {}", print_details("AC", 16, false));

    // ====== Expressions and Statements ======
    // Expressions : Anything that returns a Value
    // Statements : Anything that doesn't return a Value
    let exp = {
        let sq: u8 = 2 * 2;
        let cub: u8 = 2 * 2 * 2;
        sq / cub
    };
    println!("Expression Output : {}", exp);

    // ====== Ownership ======
    // Every value has a single owner [every variable has one value,and it is it's sole owner]
    /* Ownership Rules:
     * 1. Each value in rust has a variable that's it's owner
     * 2. There can be only one owner at a time
     * 3. When owner goes out of scope , the value will be dropped
     */

    // Rule-1:

    // Rule-2:
    let s1: String = String::from("RUST");
    let s2 = s1;
    // This is an error as String RUST shall have only one owner and ownership moved to s2
    // println!("{s1}");
    println!("{s2}");

    // Rule-3:
    //

    // ====== Refrences and Borrowing ======

    // Refrences : Enable you to borrow values without taking ownership
    // Immutable and mutable References
    let mut x: i32 = 67;
    // let r: &i32 = &x;
    // println!("Referenced x on y value(Immutable) : {x}");
    // Error as refrence is immutable also you cannot reference a variable as both immutable and mutable at the same time
    // Here r and r2 cannot be done at the same time

    // ------ Mutable Reference --------
    // To make a mutable refernce both the variable anf reference should be mutable
    // Any variable can have either many immutable references or only one mutable reference
    let r2 = &mut x;
    *r2 += 1;
    // Error : cannot borrow x as immutable because it is also borrowed as mutable
    // If we try to print both x and r2
    println!("Referenced x on y value(Immutable) : {x} ");
    // println!("Referenced x on y value(Mutable) : {r2} ");

    let mut account = BankAccount {
        owner: "Bob".to_string(),
        balance: 99.69,
    };
    account.fetch_balance();
    account.withdraw(22.69);
    account.fetch_balance();
}

// hello_world() is declared after main even after that main can access it (Hoisting in JS)
// Function and variable names should only be in Lowercase and in Snake_case(Space => _) not in Kebab-case(Space => -)
// Constants should follow screaming Snake_case(Uppercase + Snake_case) Ex: const PI_VALUE:f64 = 3.14...
fn hello_world() {
    println!("Hello World guyss");
}
fn print_details(name: &str, age: u8, is_married: bool) -> u8 {
    println!(
        "Name : {}\nAge : {}\nMarriage Status : {}",
        name, age, is_married
    );
    age
    // or return age;
}

// ======= Structures ========
// Struct names should be in Pascal case or UpperCamelCase(No spaces and start with capital and attach diff words with capitals)
struct BankAccount {
    owner: String,
    balance: f64,
}

// Methods for the struct BankAccount
impl BankAccount {
    fn withdraw(&mut self, amount: f64) {
        println!("Withdrawing {} from account {}", amount, self.owner);
        self.balance -= amount;
    }
    fn fetch_balance(&self) {
        println!("Balance of {} is {}", self.owner, self.balance);
    }
}
