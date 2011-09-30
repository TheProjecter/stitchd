void eleSpeedSet() {
	if (level == 1) {
		eleReset(0, 1);
	} else if (level == 2) {
	} else if (level == 3) {
		eleReset(1, 2);
		eleReset(2, 3);
		eleReset(3, 1);
	}
}

void eleSet() {
	if (level == 1) {
		elex[0] = platx[17] + platform->stretchX + eleVar[0];
		eley[0] = platy[17];
		scrubLocation(1, 3, elex, eley);
	} else if (level == 2) {
		scrubLocation(0, 3, elex, eley);
	} else if (level == 3) {
		scrubLocation(0, 0, elex, eley);
		elex[1] = platx[6] + platform->stretchX;
		eley[1] = platy[6] + eleVar[1];
		elex[2] = platx[13] + platform->stretchX;
		eley[2] = platy[13] + eleVar[2];
		elex[3] = platx[13] + (platform->stretchX * 2) + eleVar[3];
		eley[3] = platy[14];
	}
}

void eleDraw() {
	if (level == 1) oslDrawImageXY(platform, elex[0], eley[0]);
	if ((level != 1) && (level != 2)) {
		oslDrawImageXY(platform, elex[1], eley[1]);
		oslDrawImageXY(platform, elex[2], eley[2]);
		oslDrawImageXY(platform, elex[3], eley[3]);
	}
}

void eleStart() {
	elevator(100, 0, sprite->x);
	elevator(300, 1, sprite->y);
	elevator(400, 2, sprite->y);
	elevator(100, 3, sprite->x);
}

void eleCall() {
	if (elevatorCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX,
		sprite->y + sprite->stretchY,
		elex[0], eley[0],
		elex[0] + platform->stretchX,
		eley[0] + platform->stretchY) == 1) {
			eleCol = 1;
			//sprite->x += eleSpeed[0];
			mapone->scrollX += eleSpeed[0];
			sprite->y = eley[0] - sprite->stretchY;
	} else if (elevatorCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX,
		sprite->y + sprite->stretchY,
		elex[1], eley[1],
		elex[1] + platform->stretchX,
		eley[1] + platform->stretchY) == 1) {
			eleCol = 1;
			//sprite->y += eleSpeed[1];
			mapone->scrollY += eleSpeed[1];
			sprite->y = eley[1] - sprite->stretchY;
	} else if (elevatorCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX,
		sprite->y + sprite->stretchY,
		elex[2], eley[2],
		elex[2] + platform->stretchX,
		eley[2] + platform->stretchY) == 1) {
			eleCol = 1;
			//sprite->y += eleSpeed[2];
			mapone->scrollY += eleSpeed[2];
			sprite->y = eley[2] - sprite->stretchY;
	} else if (elevatorCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX,
		sprite->y + sprite->stretchY,
		elex[3], eley[3],
		elex[3] + platform->stretchX,
		eley[3] + platform->stretchY) == 1) {
			eleCol = 1;
			//sprite->x += eleSpeed[3];
			mapone->scrollX += eleSpeed[3];
			sprite->y = eley[3] - sprite->stretchY;
	} else {
		eleCol = 0;
	}
}