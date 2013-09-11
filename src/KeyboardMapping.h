//
//  KeyboardMapping.h
//  PixelPyrosNew
//
//  Created by Paul Hayes on 11/09/2013.
//
//

#pragma once

#include "ofConstants.h"
#include "ofEvents.h"

#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"


int convertMacKeyCode( unsigned int macKeyCode );
int convertGlfwKeycodeToOfKeycode(int key);