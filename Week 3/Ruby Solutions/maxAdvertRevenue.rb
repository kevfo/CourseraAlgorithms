length = gets.chomp.to_i
a1 = gets.chomp.split(/ /).map(&:to_i)
a2 = gets.chomp.split(/ /).map(&:to_i)

a1.sort! ; a2.sort!

answer = 0
0.upto(length - 1).each do |i|
  answer += a1[i] * a2[i]
end

puts answer
