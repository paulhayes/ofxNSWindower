//
//  KeyboardMapping.cpp
//  PixelPyrosNew
//
//  Created by Paul Hayes on 11/09/2013.
//
//

#include "KeyboardMapping.h"

static const unsigned int MAC_TO_GLFW_KEYCODE_MAPPING[128] =
{
    /* 00 */ 'A',
    /* 01 */ 'S',
    /* 02 */ 'D',
    /* 03 */ 'F',
    /* 04 */ 'H',
    /* 05 */ 'G',
    /* 06 */ 'Z',
    /* 07 */ 'X',
    /* 08 */ 'C',
    /* 09 */ 'V',
    /* 0a */ -1,
    /* 0b */ 'B',
    /* 0c */ 'Q',
    /* 0d */ 'W',
    /* 0e */ 'E',
    /* 0f */ 'R',
    /* 10 */ 'Y',
    /* 11 */ 'T',
    /* 12 */ '1',
    /* 13 */ '2',
    /* 14 */ '3',
    /* 15 */ '4',
    /* 16 */ '6',
    /* 17 */ '5',
    /* 18 */ GLFW_KEY_KP_EQUAL,
    /* 19 */ '9',
    /* 1a */ '7',
    /* 1b */ '-',
    /* 1c */ '8',
    /* 1d */ '0',
    /* 1e */ ']',
    /* 1f */ 'O',
    /* 20 */ 'U',
    /* 21 */ '[',
    /* 22 */ 'I',
    /* 23 */ 'P',
    /* 24 */ GLFW_KEY_ENTER,
    /* 25 */ 'L',
    /* 26 */ 'J',
    /* 27 */ '\'',
    /* 28 */ 'K',
    /* 29 */ ';',
    /* 2a */ '\\',
    /* 2b */ ',',
    /* 2c */ '/',
    /* 2d */ 'N',
    /* 2e */ 'M',
    /* 2f */ '.',
    /* 30 */ GLFW_KEY_TAB,
    /* 31 */ GLFW_KEY_SPACE,
    /* 32 */ '`',
    /* 33 */ GLFW_KEY_BACKSPACE,
    /* 34 */ -1,
    /* 35 */ GLFW_KEY_ESCAPE,
    /* 36 */ GLFW_KEY_RIGHT_SUPER,
    /* 37 */ GLFW_KEY_LEFT_SUPER,
    /* 38 */ GLFW_KEY_LEFT_SHIFT,
    /* 39 */ GLFW_KEY_CAPS_LOCK,
    /* 3a */ GLFW_KEY_LEFT_ALT,
    /* 3b */ GLFW_KEY_LEFT_CONTROL,
    /* 3c */ GLFW_KEY_RIGHT_SHIFT,
    /* 3d */ GLFW_KEY_RIGHT_ALT,
    /* 3e */ GLFW_KEY_RIGHT_CONTROL,
    /* 3f */ -1,
    /* 40 */ -1,
    /* 41 */ GLFW_KEY_KP_DECIMAL,
    /* 42 */ -1,
    /* 43 */ GLFW_KEY_KP_MULTIPLY,
    /* 44 */ -1,
    /* 45 */ GLFW_KEY_KP_ADD,
    /* 46 */ -1,
    /* 47 */ -1,
    /* 48 */ -1,
    /* 49 */ -1,
    /* 4a */ -1,
    /* 4b */ GLFW_KEY_KP_DIVIDE,
    /* 4c */ GLFW_KEY_KP_ENTER,
    /* 4d */ -1,
    /* 4e */ GLFW_KEY_KP_SUBTRACT,
    /* 4f */ -1,
    /* 50 */ -1,
    /* 51 */ -1,
    /* 52 */ GLFW_KEY_KP_0,
    /* 53 */ GLFW_KEY_KP_1,
    /* 54 */ GLFW_KEY_KP_2,
    /* 55 */ GLFW_KEY_KP_3,
    /* 56 */ GLFW_KEY_KP_4,
    /* 57 */ GLFW_KEY_KP_5,
    /* 58 */ GLFW_KEY_KP_6,
    /* 59 */ GLFW_KEY_KP_7,
    /* 5a */ -1,
    /* 5b */ GLFW_KEY_KP_8,
    /* 5c */ GLFW_KEY_KP_9,
    /* 5d */ -1,
    /* 5e */ -1,
    /* 5f */ -1,
    /* 60 */ GLFW_KEY_F5,
    /* 61 */ GLFW_KEY_F6,
    /* 62 */ GLFW_KEY_F7,
    /* 63 */ GLFW_KEY_F3,
    /* 64 */ GLFW_KEY_F8,
    /* 65 */ -1,
    /* 66 */ -1,
    /* 67 */ -1,
    /* 68 */ -1,
    /* 69 */ GLFW_KEY_F13,
    /* 6a */ GLFW_KEY_F16,
    /* 6b */ -1,
    /* 6c */ -1,
    /* 6d */ -1,
    /* 6e */ -1,
    /* 6f */ -1,
    /* 70 */ -1,
    /* 71 */ -1,
    /* 72 */ GLFW_KEY_INSERT,
    /* 73 */ GLFW_KEY_HOME,
    /* 74 */ GLFW_KEY_PAGE_UP,
    /* 75 */ GLFW_KEY_DELETE,
    /* 76 */ GLFW_KEY_F4,
    /* 77 */ GLFW_KEY_END,
    /* 78 */ GLFW_KEY_F2,
    /* 79 */ GLFW_KEY_PAGE_DOWN,
    /* 7a */ GLFW_KEY_F1,
    /* 7b */ GLFW_KEY_LEFT,
    /* 7c */ GLFW_KEY_RIGHT,
    /* 7d */ GLFW_KEY_DOWN,
    /* 7e */ GLFW_KEY_UP,
    /* 7f */ -1,
};

int convertMacKeyCode( unsigned int macKeyCode ){
    if( macKeyCode >= 128 )
    {
        return -1;
    }
    
    // This treats keycodes as *positional*; that is, we'll return 'a'
    // for the key left of 's', even on an AZERTY keyboard.  The charInput
    // function should still get 'q' though.
    return MAC_TO_GLFW_KEYCODE_MAPPING[macKeyCode];
}

int convertGlfwKeycodeToOfKeycode(int key){
    
    
	switch (key) {
		case GLFW_KEY_ESCAPE:
			key = OF_KEY_ESC;
			break;
		case GLFW_KEY_F1:
			key = OF_KEY_F1;
			break;
		case GLFW_KEY_F2:
			key = OF_KEY_F2;
			break;
		case GLFW_KEY_F3:
			key = OF_KEY_F3;
			break;
		case GLFW_KEY_F4:
			key = OF_KEY_F4;
			break;
		case GLFW_KEY_F5:
			key = OF_KEY_F5;
			break;
		case GLFW_KEY_F6:
			key = OF_KEY_F6;
			break;
		case GLFW_KEY_F7:
			key = OF_KEY_F7;
			break;
		case GLFW_KEY_F8:
			key = OF_KEY_F8;
			break;
		case GLFW_KEY_F9:
			key = OF_KEY_F9;
			break;
		case GLFW_KEY_F10:
			key = OF_KEY_F10;
			break;
		case GLFW_KEY_F11:
			key = OF_KEY_F11;
			break;
		case GLFW_KEY_F12:
			key = OF_KEY_F12;
			break;
		case GLFW_KEY_LEFT:
			key = OF_KEY_LEFT;
			break;
		case GLFW_KEY_RIGHT:
			key = OF_KEY_RIGHT;
			break;
		case GLFW_KEY_UP:
			key = OF_KEY_UP;
			break;
		case GLFW_KEY_DOWN:
			key = OF_KEY_DOWN;
			break;
		case GLFW_KEY_PAGE_UP:
			key = OF_KEY_PAGE_UP;
			break;
		case GLFW_KEY_PAGE_DOWN:
			key = OF_KEY_PAGE_DOWN;
			break;
		case GLFW_KEY_HOME:
			key = OF_KEY_HOME;
			break;
		case GLFW_KEY_END:
			key = OF_KEY_END;
			break;
		case GLFW_KEY_INSERT:
			key = OF_KEY_INSERT;
			break;
		case GLFW_KEY_LEFT_SHIFT:
			key = OF_KEY_LEFT_SHIFT;
			break;
		case GLFW_KEY_LEFT_CONTROL:
			key = OF_KEY_LEFT_CONTROL;
			break;
		case GLFW_KEY_LEFT_ALT:
			key = OF_KEY_LEFT_ALT;
			break;
		case GLFW_KEY_LEFT_SUPER:
			key = OF_KEY_LEFT_SUPER;
			break;
		case GLFW_KEY_RIGHT_SHIFT:
			key = OF_KEY_RIGHT_SHIFT;
			break;
		case GLFW_KEY_RIGHT_CONTROL:
			key = OF_KEY_RIGHT_CONTROL;
			break;
		case GLFW_KEY_RIGHT_ALT:
			key = OF_KEY_RIGHT_ALT;
			break;
		case GLFW_KEY_RIGHT_SUPER:
			key = OF_KEY_RIGHT_SUPER;
            break;
		case GLFW_KEY_BACKSPACE:
			key = OF_KEY_BACKSPACE;
			break;
		case GLFW_KEY_DELETE:
			key = OF_KEY_DEL;
			break;
		case GLFW_KEY_ENTER:
			key = OF_KEY_RETURN;
			break;
		case GLFW_KEY_KP_ENTER:
			key = OF_KEY_RETURN;
			break;
		case GLFW_KEY_TAB:
			key = OF_KEY_TAB;
			break;
		default:
			break;
	}
    
	//GLFW defaults to uppercase - OF users are used to lowercase
    //we look and see if shift is being held to toggle upper/lowecase
	if( key >= 65 && key <= 90 && !ofGetKeyPressed(OF_KEY_SHIFT) ){
		key += 32;
	}
    
	return key;
}
