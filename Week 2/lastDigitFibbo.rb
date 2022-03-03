num = gets.chomp.to_i

# Function was stolen from the last problem...
# and modified to fit this problem:
def better_fib(num)
  store = Array.new(num, 0)
  store[0], store[1] = 0, 1
  (2..num).each do |i|
    store[i] = (store[i - 1] + store[i - 2]) % 10
  end
  store[num]
end

puts better_fib(num)
