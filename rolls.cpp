#include <iostream>
#include "rolls.h"
int roll(){
	int x, y;
	/* Uncomment the comment
	 * below this to make the dice roll results similar
	 * this will allow you to test  the
	 * scenario where 
	 * dice roll 1 == dice roll 2
	 * and either of the player would win.
	 */
	//srand(time(NULL));
	x = rand();
	y = (x % 7) + 1;
	return y;
}
