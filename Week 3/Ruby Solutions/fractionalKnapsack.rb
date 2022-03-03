numItems, maxCap = gets.chomp.split(/ /).map(&:to_i)

store = Array.new()
numItems.times do |i|
  value, weight = gets.chomp.split(/ /).map(&:to_i)
  store << [value, weight]
end

answer = 0
store.sort_by{|i| i[0].fdiv(i[1])}.reverse.each do |i|
  if maxCap.zero?
    break
  else
    if maxCap >= i[1]
      answer += i[0]
      maxCap -= i[1]
    else
      answer += maxCap.fdiv(i[1]) * i[0]
      maxCap = 0
    end
  end
end

puts answer.round(4)
