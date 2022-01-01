package main

//import "fmt"
import (
	"fmt"
)

func main() {
	//var score int=4
	var batman string = "I am batman"

	fmt.Println(batman)
	var superman string
	superman = "I am superman"
	// If you are allocating then use else memoery reliable:)
	fmt.Println(superman)
	var a, b string = "A", "B"
	// Default Value of int =0 , string =""

	var (
		spiderman = "Iam spiderman"
		age       = 18
		powers    = "web slings"
		antman    = "Im antman"
	)

	fmt.Println(a, b)
	fmt.Println(antman, spiderman, age, powers)

	// Taking Input
	var s string
	fmt.Scanln(&s)
	fmt.Println(s)

}
