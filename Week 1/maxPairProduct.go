package main

import (
  "fmt"
  "sort"
)

func main() {
  var (
    l     int
    num   int
    store []int
  )

  fmt.Scanln(&l)
  for i := 0; i < l; i++ {
    fmt.Scan(&num)
    store = append(store, num)
  }

  sort.Ints(store)
  fmt.Println(store[len(store) - 1] * store[len(store) - 2])
}
