/* Wopen.cpp ; windows open program library */

#include "Wopen.h"
#include <Keyboard.h>

/* Exec '"cmd"', print '"cmd"' using Keyboard.h and press KEY_RETURN */
void Wopen_exec() {
	
	delay(200);
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
}

/* Open '"cmd"' with Win+R */
void Wopen_win_r() {

	delay(200);
	Keyboard.press(KEY_LEFT_GUI);
	Keyboard.press('r');
	Keyboard.releaseAll();
	
	delay(2000);
	Keyboard.print("cmd");

	delay(200);
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();

}

/* Open '"cmd"' with Windows start menu */
void Wopen_start_menu() {
	
	Keyboard.press(KEY_LEFT_GUI);
	Keyboard.releaseAll();
	
	delay(1000);
	Keyboard.print("cmd");
	
	delay(10);
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
}

/* Open '"cmd"' as administrator with start menu */
void Wopen_administrator() {

	Keyboard.press(KEY_LEFT_GUI);
	Keyboard.releaseAll();

	delay(1000);
	Keyboard.print("cmd");

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

