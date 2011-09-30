void rockSet() {
	if (level == 1) {
		rockx[0] = platx[2] + platform->stretchX - rock->stretchX;
		rocky[0] = platy[2] - rock->stretchY;
		rockx[1] = rockx[0];
		rocky[1] = rocky[0] - rock->stretchY;
		rockx[2] = rockx[0];
		rocky[2] = rocky[1] - rock->stretchY;
		rockx[3] = 0 - mapone->scrollX;
		rocky[3] = 0 - mapone->scrollY;
	} else if (level == 2) {
		rockx[0] = platx[3];
		rocky[0] = platy[3] - rock->stretchY;
		rockx[1] = rockx[0];
		rocky[1] = rocky[0] - rock->stretchY;
		rockx[2] = platx[4] + platform->stretchX - rock->stretchX;
		rocky[2] = rocky[0];
		rockx[3] = rockx[2];
		rocky[3] = rocky[1];
	} else if (level == 3) {
		scrubLocation(0, 3, rockx, rocky);
	}
}

void rockDraw() {
	if (level != 3) {
		if (rockpkp[0] == 0) oslDrawImageXY(rock, rockx[0], rocky[0]);
		if (rockpkp[1] == 0) oslDrawImageXY(rock, rockx[1], rocky[1]);
		if (rockpkp[2] == 0) oslDrawImageXY(rock, rockx[2], rocky[2]);
		if (level != 1) {
			if (rockpkp[3] == 0) oslDrawImageXY(rock, rockx[3], rocky[3]);
		}
	}
}

void rockCall() {
	if ((rightCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		rockx[0], rocky[0],
		rockx[0] + rock->stretchX, 
		rocky[0] + rock->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) && (rockpkp[0] == 0)) {
			if (rockpkp[0] == 0) rightCol = 1;
			sprite->x = rockx[0] - 40;
				if ((attacking == 1) && (sprite_position == RIGHT)) {
					rockpkp[0] = 1;
					rAnimDone[0] = 0;
					rockCounter = 0;
				}
	} else if ((rightCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		rockx[1], rocky[1],
		rockx[1] + rock->stretchX, 
		rocky[1] + rock->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) && (rockpkp[1] == 0)) {
			rightCol = 1;
			sprite->x = rockx[1] - 40;
				if ((attacking == 1) && (sprite_position == RIGHT)) {
					rockpkp[1] = 1;
					rAnimDone[1] = 0;
					rockCounter = 0;
				}
	} else if ((rightCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		rockx[2], rocky[2],
		rockx[2] + rock->stretchX, 
		rocky[2] + rock->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) && (rockpkp[2] == 0)) {
			rightCol = 1;
			sprite->x = rockx[2] - 40;
				if ((attacking == 1) && (sprite_position == RIGHT)) {
					rockpkp[2] = 1;
					rAnimDone[2] = 0;
					rockCounter = 0;
				}
	} else if ((rightCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		rockx[3], rocky[3],
		rockx[3] + rock->stretchX, 
		rocky[3] + rock->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) && (rockpkp[3] == 0)) {
			rightCol = 1;
			sprite->x = rockx[3] - 40;
				if ((attacking == 1) && (sprite_position == RIGHT)) {
					rockpkp[3] = 1;
					rAnimDone[3] = 0;
					rockCounter = 0;
				}
	} else { rightCol = 0; }
	if ((leftCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		rockx[0], rocky[0],
		rockx[0] + rock->stretchX, 
		rocky[0] + rock->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) && (rockpkp[0] == 0)) {
			if (rockpkp[0] == 0) leftCol = 1;
			sprite->x = rockx[0] + rock->stretchX - 20;
				if ((attacking == 1) && (sprite_position == LEFT)) {
					rockpkp[1] = 1;
					rAnimDone[0] = 0;
					rockCounter = 0;
				}
	} else if ((leftCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		rockx[1], rocky[1],
		rockx[1] + rock->stretchX, 
		rocky[1] + rock->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) && (rockpkp[1] == 0)) {
			if (rockpkp[1] == 0) leftCol = 1;
			sprite->x = rockx[1] + rock->stretchX - 20;
				if ((attacking == 1) && (sprite_position == LEFT)) {
					rockpkp[1] = 1;
					rAnimDone[1] = 0;
					rockCounter = 0;
				}
	} else if ((leftCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		rockx[2], rocky[2],
		rockx[2] + rock->stretchX, 
		rocky[2] + rock->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) && (rockpkp[2] == 0)) {
			if (rockpkp[2] == 0) leftCol = 1;
			sprite->x = rockx[2] + rock->stretchX - 20;
				if ((attacking == 1) && (sprite_position == LEFT)) {
					rockpkp[2] = 1;
					rAnimDone[2] = 0;
					rockCounter = 0;
				}
	} else if ((leftCollision(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		rockx[3], rocky[3],
		rockx[3] + rock->stretchX, 
		rocky[3] + rock->stretchY, 
		sprite_position, RIGHT, LEFT) == 1) && (rockpkp[3] == 0)) {
			if (rockpkp[3] == 0) leftCol = 1;
			sprite->x = rockx[3] + rock->stretchX - 20;
				if ((attacking == 1) && (sprite_position == LEFT)) {
					rockpkp[3] = 1;
					rAnimDone[3] = 0;
					rockCounter = 0;
				}
	} else { leftCol = 0; }
}

void rockCallTop() {
	if ((rockTopCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX,
		sprite->y + sprite->stretchY,
		rockx[0], rocky[0],
		rockx[0] + rock->stretchX,
		rocky[0] + rock->stretchY) == 1) && (rockpkp[0] == 0)) {
			rockColTop = 1;
			rockNo = 0;
	} else if ((rockTopCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX,
		sprite->y + sprite->stretchY,
		rockx[1], rocky[1],
		rockx[1] + rock->stretchX,
		rocky[1] + rock->stretchY) == 1) && (rockpkp[1] == 0)) {
			rockColTop = 1;
			rockNo = 1;
	} else if ((rockTopCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX,
		sprite->y + sprite->stretchY,
		rockx[2], rocky[2],
		rockx[2] + rock->stretchX,
		rocky[2] + rock->stretchY) == 1) && (rockpkp[2] == 0)) {
			rockColTop = 1;
			rockNo = 2;
	} else if ((rockTopCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX,
		sprite->y + sprite->stretchY,
		rockx[3], rocky[3],
		rockx[3] + rock->stretchX,
		rocky[3] + rock->stretchY) == 1) && (rockpkp[3] == 0)) {
			rockColTop = 1;
			rockNo = 2;
	} else {
		rockColTop = 0;
		rockNo = 0;
	}
}

void rockCallBottom() {
	if ((rockBottomCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX,
		sprite->y + sprite->stretchY,
		rockx[0], rocky[0],
		rockx[0] + rock->stretchX,
		rocky[0] + rock->stretchY) == 1) && (rockColTop == 0)) {
			rockColBottom = 1;
	} else if ((rockBottomCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX,
		sprite->y + sprite->stretchY,
		rockx[1], rocky[1],
		rockx[1] + rock->stretchX,
		rocky[1] + rock->stretchY) == 1) && (rockColTop == 0)) {
			rockColBottom = 1;
	} else if ((rockBottomCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX,
		sprite->y + sprite->stretchY,
		rockx[2], rocky[2],
		rockx[2] + rock->stretchX,
		rocky[2] + rock->stretchY) == 1) && (rockColTop == 0)) {
			rockColBottom = 1;
	} else if ((rockBottomCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX,
		sprite->y + sprite->stretchY,
		rockx[3], rocky[3],
		rockx[3] + rock->stretchX,
		rocky[3] + rock->stretchY) == 1) && (rockColTop == 0)) {
			rockColBottom = 1;
	} else rockColBottom = 0;
}

void rockReset() {
	rockpkp[0] = 0;
	rockpkp[1] = 0;
	rockpkp[2] = 0;
	rockpkp[3] = 0;
	rAnimDone[0] = 1;
	rAnimDone[1] = 1;
	rAnimDone[2] = 1;
	rAnimDone[3] = 1;
	rockCounter = 0;
	rockTimer = 0;
}

void rockAnimStarter() {
	if (rAnimDone[0] == 0) rockAnimate(), rockArray = 0;
	else if (rAnimDone[1] == 0) rockAnimate(), rockArray = 1;
	else if (rAnimDone[2] == 0) rockAnimate(), rockArray = 2;
	else if (rAnimDone[3] == 0) rockAnimate(), rockArray = 3;
	else rockArray = 0;
}