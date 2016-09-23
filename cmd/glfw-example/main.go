package main

import (
	"log"
	"runtime"

	"github.com/golang-ui/glfw"
)

func init() {
	runtime.LockOSThread()
}

func main() {
	if ok := Bool(glfw.Init()); !ok {
		log.Fatalln("glfw: init failed")
	}
	defer glfw.Terminate()

	glfw.WindowHint(glfw.ContextVersionMajor, 3)
	glfw.WindowHint(glfw.ContextVersionMinor, 3)
	glfw.WindowHint(glfw.OpenglProfile, glfw.OpenglCoreProfile)
	glfw.WindowHint(glfw.OpenglForwardCompat, glfw.True)

	win := glfw.CreateWindow(640, 480, "Testing\x00", nil, nil)
	if win == nil {
		log.Fatalln("glfw: window init failed")
	}
	glfw.MakeContextCurrent(win)

	for !Bool(glfw.WindowShouldClose(win)) {
		glfw.SwapBuffers(win)
		glfw.PollEvents()
	}
}

func Bool(v int32) bool {
	return v == 1
}
