/* Wopen.cpp ; windows open program library */

#include "Wopen.h"
#include <Keyboard.h>

/* Exec 'command', print 'command' using Keyboard.h and press KEY_RETURN */
void Wopen_exec(char command) {
	
	Keyboard.print(command);
	
	delay(10);
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
}

/* Open 'command' with Win+R */
void Wopen_win_r(char command) {

	Keyboard.press(KEY_LEFT_GUI);
	Keyboard.press('r');
	Keyboard.releaseAll();

	delay(200);
	Keyboard.print(command);

	delay(200);
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();

}

/* Open 'command' with Windows start menu */
void Wopen_start_menu(char command) {
	
	Keyboard.press(KEY_LEFT_GUI);
	Keyboard.releaseAll();
	
	delay(1000);
	Keyboard.print(command);
	
	delay(10);
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
}

/* Open 'command' as administrator with start menu */
void Wopen_administrator(char command) {

	Keyboard.press(KEY_LEFT_GUI);
	Keyboard.releaseAll();

	delay(1000);
	Keyboard.print(command);

	delay(500);
	Keyboard.press(KEY_LEFT_CTRL);
	Keyboard.press(KEY_LEFT_SHIFT);
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
	
	delay(500);
	Keyboard.press(KEY_LEFT_ARROW);
	delay(10);
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
}
