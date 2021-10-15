#!/usr/bin/env run-cargo-script

use std::fs::File;
use std::io::{BufReader, Read};

fn main() {
    let args = std::env::args().nth(1).expect("No file name given!");   
    println!("{:?}", args);

    let mut data = String::new();
    let f = File::open(args).expect("Unable to open file");
    let mut br = BufReader::new(f);
    br.read_to_string(&mut data).expect("Unable to read string");
    println!("{}", data);

}