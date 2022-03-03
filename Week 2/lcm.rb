n1, n2 = gets.chomp.split(/ /).map(&:to_i)

def gcd(a, b)
  a, b = b, a if a > b
  r = a % b
  while !r.zero?
    a = b
    b = r
    r = a % b
  end
  b
end

# FYI: lcm(a, b) * gcd(a, b) = a * b
puts (n1 * n2) / gcd(n1, n2)
