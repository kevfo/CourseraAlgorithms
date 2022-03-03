change = gets.chomp.to_i

times = 0
while !change.zero?
  if change >= 10
    change -= 10
    times += 1
  elsif change >= 5
    change -= 5
    times += 1
  else
    times += change
    change = 0
  end
end

puts times
