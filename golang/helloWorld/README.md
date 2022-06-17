# Hello World in Go

## Enabling dependency tracking 
```bash
$ $ go mod init example/hello
go: creating new go.mod: module example/hello
```

## hello.go
```golang
package main

import "fmt"

func main() {
	fmt.Println("Hello, World!")
}
```

## running script
```bash
go run .
```
