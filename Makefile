all:
	cgogen -out .. glfw.yml

clean:
	rm -f cgo_helpers.go cgo_helpers.h cgo_helpers.c
	rm -f doc.go types.go const.go
	rm -f glfw.go

test:
	go build
	