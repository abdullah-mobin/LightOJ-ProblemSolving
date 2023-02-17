package main

import "fmt"

func main() {

	var t int
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		var num, rem, tem, sum int64
		fmt.Scan(&num)
		tem = num
		sum = 0
		for tem != 0 {
			rem = tem % 10
			sum = (sum * 10) + rem
			tem /= 10
		}
		fmt.Println(sum)

	}
	return
}
