
if ARGV.length < 1 
    puts "Error: No file entered! Please input a filename to read"
    exit
end
content = File.read(ARGV[1])
p content
puts content