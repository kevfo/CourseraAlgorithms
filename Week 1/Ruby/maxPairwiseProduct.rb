l = gets.chomp.to_i
array = gets.chomp.split(/ /).map(&:to_i).sort!

puts array[-1] * array[-2]
