void wallSet() {
	if (level == 1) {
		wallx[0] = platx[6] + platform->stretchX - wall->stretchX;
		wally[0] = platy[6] - wall->stretchY;
		wallx[1] = platx[19];
		wally[1] = platy[21] - 25;
		wallx[2] = platx[19] + platform->stretchX - wall->stretchX;
		wally[2] = wally[1];
	} else if (level == 2) {
		wallx[0] = platx[3] + platform->stretchX - wall->stretchX;
		wally[0] = platy[3] + platform->stretchY;
		wallx[1] = platx[4];
		wally[1] = wally[0];
		wallx[2] = 0 - mapone->scrollX;
		wally[2] = 0 - mapone->scrollY;
	} else if (level == 3) {
		scrubLocation(0, 2, wallx, wally);
	}
}

void wallDraw() {
	if (level != 3) {
		oslDrawImageXY(wall, wallx[0], wally[0]);
		oslDrawImageXY(wall, wallx[1], wally[1]);
		if (level != 2) oslDrawImageXY(wall, wallx[2], wally[2]);
	}
}

void wallCall() {
	if (rightWCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		wallx[0], wally[0],
		wallx[0] + wall->stretchX, 
		wally[0] + wall->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) {
			rightWCol = 1;
			sprite->x = wallx[0] - 40;
	} else if (rightWCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		wallx[1], wally[1],
		wallx[1] + wall->stretchX, 
		wally[1] + wall->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) {
			rightWCol = 1;
			sprite->x = wallx[1] - 40;
	} else if (rightWCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		wallx[2], wally[2],
		wallx[2] + wall->stretchX, 
		wally[2] + wall->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) {
			rightWCol = 1;
			sprite->x = wallx[2] - 40;
	} else { rightWCol = 0; }
	if (leftWCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		wallx[0], wally[0],
		wallx[0] + wall->stretchX, 
		wally[0] + wall->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) {
			leftWCol = 1;
			sprite->x = wallx[0] + wall->stretchX - 20;
	} else if (leftWCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		wallx[1], wally[1],
		wallx[1] + wall->stretchX, 
		wally[1] + wall->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) {
			leftWCol = 1;
			sprite->x = wallx[1] + wall->stretchX - 20;
	} else if (leftWCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		wallx[2], wally[2],
		wallx[2] + wall->stretchX, 
		wally[2] + wall->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) {
			leftWCol = 1;
			sprite->x = wallx[2] + wall->stretchX - 20;
	} else { leftWCol = 0; }
}