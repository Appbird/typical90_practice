use std::io;


fn cin() -> i32{
    let mut loaded:String = String::new();
    io::stdin()
        .read_line(&mut loaded)
        .expect("Failed to readline");
    return loaded.trim().parse().expect("Failed to convert to i32");
    
}
fn main() {
    let mut h:i32;
    let mut w:i32;
}
