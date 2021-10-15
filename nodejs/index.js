#!/usr/bin/env node
const fs = require('fs')
function Cat(){
    const arg = process.argv[2]
if(arg){
  try{
    const content = fs.readFileSync(arg).toString()
    console.log(content)
  }catch(err){
    console.log("\x1b[2m",err.path, "\x1b[31m","does not exist!")
  }
}
else{
    console.log("ERROR: no filename entered! Please enter a filename to read!")
}
}
Cat()