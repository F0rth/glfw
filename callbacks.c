#include "GLFW/glfw3.h"
#include "callbacks.h"

void glfwSetKeyCallbackVoid(GLFWwindow* window, GLFWkeyfun cbfun) {
	glfwSetKeyCallback(window, cbfun);
}
void glfwSetCharCallbackVoid(GLFWwindow* window, GLFWcharfun cbfun) {
	glfwSetCharCallback(window, cbfun);
}
void glfwSetCharModsCallbackVoid(GLFWwindow* window, GLFWcharmodsfun cbfun) {
	glfwSetCharModsCallback(window, cbfun);
}
void glfwSetMouseButtonCallbackVoid(GLFWwindow* window, GLFWmousebuttonfun cbfun) {
	glfwSetMouseButtonCallback(window, cbfun);
}
void glfwSetCursorPosCallbackVoid(GLFWwindow* window, GLFWcursorposfun cbfun) {
	glfwSetCursorPosCallback(window, cbfun);
}
void glfwSetCursorEnterCallbackVoid(GLFWwindow* window, GLFWcursorenterfun cbfun) {
	glfwSetCursorEnterCallback(window, cbfun);
}
void glfwSetScrollCallbackVoid(GLFWwindow* window, GLFWscrollfun cbfun) {
	glfwSetScrollCallback(window, cbfun);
}
void glfwSetDropCallbackVoid(GLFWwindow* window, GLFWdropfun cbfun) {
	glfwSetDropCallback(window, cbfun);
}
void glfwSetJoystickCallbackVoid(GLFWjoystickfun cbfun) {
	glfwSetJoystickCallback(cbfun);
}
void glfwSetErrorCallbackVoid(GLFWerrorfun cbfun) {
	glfwSetErrorCallback(cbfun);
}
void glfwSetMonitorCallbackVoid(GLFWmonitorfun cbfun) {
	glfwSetMonitorCallback(cbfun);
}
void glfwSetWindowPosCallbackVoid(GLFWwindow* window, GLFWwindowposfun cbfun) {
	glfwSetWindowPosCallback(window, cbfun);
}
void glfwSetWindowSizeCallbackVoid(GLFWwindow* window, GLFWwindowsizefun cbfun) {
	glfwSetWindowSizeCallback(window, cbfun);
}
void glfwSetWindowCloseCallbackVoid(GLFWwindow* window, GLFWwindowclosefun cbfun) {
	glfwSetWindowCloseCallback(window, cbfun);
}
void glfwSetWindowRefreshCallbackVoid(GLFWwindow* window, GLFWwindowrefreshfun cbfun) {
	glfwSetWindowRefreshCallback(window, cbfun);
}
void glfwSetWindowFocusCallbackVoid(GLFWwindow* window, GLFWwindowfocusfun cbfun) {
	glfwSetWindowFocusCallback(window, cbfun);
}
void glfwSetWindowIconifyCallbackVoid(GLFWwindow* window, GLFWwindowiconifyfun cbfun) {
	glfwSetWindowIconifyCallback(window, cbfun);
}
void glfwSetFramebufferSizeCallbackVoid(GLFWwindow* window, GLFWframebuffersizefun cbfun) {
	glfwSetFramebufferSizeCallback(window, cbfun);
}
