defmodule FizzBuzz do
  def play(min, max) do
  Enum.each(min..max, fn(num)-> play(num) end )
  end
  def play(num) when rem(num, 15) == 0 do
    IO.puts "FizzBuzz"
  end
  def play(num) when rem(num, 3) == 0 do
    IO.puts "Fizz"
  end
  def play(num) when rem(num, 5) == 0 do
    IO.puts "Buzz"
  end
  def play(num) when rem(num, 15) == 0 do
    IO.puts "FizzBuzz"
  end
  def play(num) do
    IO.puts num
  end
end
FizzBuzz.play 1,100
