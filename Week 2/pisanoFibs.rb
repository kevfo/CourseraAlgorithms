n, m = gets.chomp.split(/ /).map(&:to_i)

def pisanoPeriod(m)
  p, c = 0, 1
  (0...m**2).each do |i|
    p, c = c, (p + c) % m
    if p == 0 && c == 0 then return i + 1 end
  end
end

def fibboMod(n, m)
  period = pisanoPeriod(m)
  n %= period

  if n == 0
    return 0
  elsif n == 1
    return 1
  end

  (0...n - 1).each do |i|
    p, c = c, (p + c)
  end

  c % m
end

puts fibboMod(n, m)
