#ifndef _callbacks_h_
#define _callbacks_h_

#ifdef __cplusplus
extern "C" {
#endif

#include "GLFW/glfw3.h"

GLFWAPI void glfwSetKeyCallbackVoid(GLFWwindow* window, GLFWkeyfun cbfun);
GLFWAPI void glfwSetCharCallbackVoid(GLFWwindow* window, GLFWcharfun cbfun);
GLFWAPI void glfwSetCharModsCallbackVoid(GLFWwindow* window, GLFWcharmodsfun cbfun);
GLFWAPI void glfwSetMouseButtonCallbackVoid(GLFWwindow* window, GLFWmousebuttonfun cbfun);
GLFWAPI void glfwSetCursorPosCallbackVoid(GLFWwindow* window, GLFWcursorposfun cbfun);
GLFWAPI void glfwSetCursorEnterCallbackVoid(GLFWwindow* window, GLFWcursorenterfun cbfun);
GLFWAPI void glfwSetScrollCallbackVoid(GLFWwindow* window, GLFWscrollfun cbfun);
GLFWAPI void glfwSetDropCallbackVoid(GLFWwindow* window, GLFWdropfun cbfun);
GLFWAPI void glfwSetJoystickCallbackVoid(GLFWjoystickfun cbfun);
GLFWAPI void glfwSetErrorCallbackVoid(GLFWerrorfun cbfun);
GLFWAPI void glfwSetMonitorCallbackVoid(GLFWmonitorfun cbfun);
GLFWAPI void glfwSetWindowPosCallbackVoid(GLFWwindow* window, GLFWwindowposfun cbfun);
GLFWAPI void glfwSetWindowSizeCallbackVoid(GLFWwindow* window, GLFWwindowsizefun cbfun);
GLFWAPI void glfwSetWindowCloseCallbackVoid(GLFWwindow* window, GLFWwindowclosefun cbfun);
GLFWAPI void glfwSetWindowRefreshCallbackVoid(GLFWwindow* window, GLFWwindowrefreshfun cbfun);
GLFWAPI void glfwSetWindowFocusCallbackVoid(GLFWwindow* window, GLFWwindowfocusfun cbfun);
GLFWAPI void glfwSetWindowIconifyCallbackVoid(GLFWwindow* window, GLFWwindowiconifyfun cbfun);
GLFWAPI void glfwSetFramebufferSizeCallbackVoid(GLFWwindow* window, GLFWframebuffersizefun cbfun);

#endif // _callbacks_h_
