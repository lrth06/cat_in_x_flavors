package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"
)

func main() {
	arg := os.Args
	colorRed := "\033[31m"

	if len(os.Args) > 1 {
		file := arg[1]
		content, err := ioutil.ReadFile(file)
		if err != nil {
			log.Fatal(string(colorRed), file, " does not exist!")
		}

		text := string(content)
		fmt.Println(text)
	} else {
		log.Fatal(string(colorRed), "ERROR: no filename entered! Please enter a filename to read!")
	}
}
