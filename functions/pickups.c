void heartSet() {
	if (level == 1) {
		if (hrtpkp[0] == 0) {
			heartx[0] = platx[6] + heart->stretchX * 2;
			hearty[0] = platy[6] - heart->stretchY - 20;
		} else {
			scrubLocation(0, 0, heartx, hearty);
		}
	} else if (level == 2) {
		if (hrtpkp[0] == 0) {
			heartx[0] = platx[19] + heart->stretchX * 2;
			hearty[0] = platy[19] - heart->stretchY - 20;
		} else {
			scrubLocation(0, 0, heartx, hearty);
		}
	} else if (level == 3) {
		hrtpkp[0] = 1;
		if (hrtpkp[0] == 0) {
			scrubLocation(0, 0, heartx, hearty);
		} else {
			scrubLocation(0, 0, heartx, hearty);
		}
	}
}

void heartDraw() {
	if (hrtpkp[0] == 0) oslDrawImageXY(heart, heartx[0], hearty[0]);
}

void heartCall() {
	if (heartCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		heartx[0], hearty[0],
		heartx[0] + heart->stretchX, 
		hearty[0] + heart->stretchY) == 1) {
			if (playerHealth < 3) playerHealth ++, hrtpkp[0] = 1;
	}
}

void heartReset() {
	hrtpkp[0] = 0;
}

void skullSet() {
	if (level == 1) {
		if (sklpkp[0] == 0) skullx[0] = heartx[0] - 5, 
							skully[0] = hearty[0] - skull->stretchY * 2;
		else skullx[0] = 0, skully[0] = 0;
		if (sklpkp[1] == 0) skullx[1] = platx[2] + 35, 
							skully[1] = platy[2] - skull->stretchY - 20;
		else skullx[1] = 0, skully[1] = 0;
		if (sklpkp[2] == 0) skullx[2] = platx[10] + 5, 
							skully[2] = platy[10] - skull->stretchY * 2;
		else skullx[2] = 0, skully[2] = 0;
		if (sklpkp[3] == 0) skullx[3] = 0 - mapone->scrollX, 
							skully[3] = 0 - mapone->scrollY;
		else skullx[3] = 0, skully[3] = 0;
	} else if (level == 2) {
		if (sklpkp[0] == 0) skullx[0] = platx[3] + skull->stretchX + 10, 
							skully[0] = platy[3] - skull->stretchY * 2;
		else skullx[0] = 0, skully[0] = 0;
		if (sklpkp[1] == 0) skullx[1] = platx[17] + skull->stretchX + 10, 
							skully[1] = platy[17] - skull->stretchY * 2;
		else skullx[1] = 0, skully[1] = 0;
		if (sklpkp[2] == 0) skullx[2] = platx[20] + skull->stretchX + 10, 
							skully[2] = platy[20] - skull->stretchY * 2;
		else skullx[2] = 0, skully[2] = 0;
		if (sklpkp[3] == 0) skullx[3] = 0 - mapone->scrollX, 
							skully[3] = 0 - mapone->scrollY;
		else skullx[3] = 0, skully[3] = 0;
	} else if (level == 3) {
		if (sklpkp[0] == 0) skullx[0] = platx[3] + skull->stretchX + 10, 
							skully[0] = platy[3] - skull->stretchY * 2;
		else skullx[0] = 0, skully[0] = 0;
		if (sklpkp[1] == 0) skullx[1] = platx[8] + skull->stretchX + 10, 
							skully[1] = platy[8] - skull->stretchY * 2;
		else skullx[1] = 0, skully[1] = 0;
		if (sklpkp[2] == 0) skullx[2] = platx[13] + skull->stretchX + 10, 
							skully[2] = platy[13] - skull->stretchY * 2;
		else skullx[2] = 0, skully[2] = 0;
		if (sklpkp[3] == 0) skullx[3] = platx[14] + skull->stretchX + 10,
							skully[3] = platy[14] - skull->stretchY * 2;
		else skullx[3] = 0, skully[3] = 0;
	}
}

void skullDraw() {
	if (sklpkp[0] == 0) oslDrawImageXY(skull, skullx[0], skully[0]);
	if (sklpkp[1] == 0) oslDrawImageXY(skull, skullx[1], skully[1]);
	if (sklpkp[2] == 0) oslDrawImageXY(skull, skullx[2], skully[2]);
	if (sklpkp[3] == 0) oslDrawImageXY(skull, skullx[3], skully[3]);
}

void skullCall() {
	if (skullCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		skullx[0], skully[0],
		skullx[0] + skull->stretchX, 
		skully[0] + skull->stretchY) == 1) {
			skulls ++;
			sklpkp[0] = 1;
	}
	if (skullCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		skullx[1], skully[1],
		skullx[1] + skull->stretchX, 
		skully[1] + skull->stretchY) == 1) {
			skulls ++;
			sklpkp[1] = 1;
	}
	if (skullCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		skullx[2], skully[2],
		skullx[2] + skull->stretchX, 
		skully[2] + skull->stretchY) == 1) {
			skulls ++;
			sklpkp[2] = 1;
	}
	if (skullCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		skullx[3], skully[3],
		skullx[3] + skull->stretchX, 
		skully[3] + skull->stretchY) == 1) {
			skulls ++;
			sklpkp[3] = 1;
	}
}

void skullReset() {
	sklpkp[0] = 0;
	sklpkp[1] = 0;
	sklpkp[2] = 0;
	sklpkp[3] = 0;
	skulls = 0;
}

void skullPrint() {
	oslPrintf_xy(0, 265, "Skulls: %i / %i", skulls, skullmax);
	if (skulls == skullmax) allskulls = 1;
	else allskulls = 0;
	if (allskulls == 1) oslPrintf_xy(340, 265, "[All Skulls Aquired]");
	else oslPrintf_xy(340, 265, "Skulls Needed: %i", skullmax - skulls);
	if (skulls > skullmax) skulls = skullmax;
	if (skulls < 0) skulls = 0;
}

void arrowSet() {
	if (level == 1) {
		//Down Arrow
		arrowx[0] = platx[9] - 40;
		arrowy[0] = platy[9] - 40;
	} else if (level == 2) {
		//Down Arrow
		arrowx[0] = platx[2] + platform->stretchX + 25;
		arrowy[0] = platy[2] - 20;
	} else if (level == 3) {
		//Down Arrow
		arrowx[0] = 0 - mapone->scrollX;
		arrowy[0] = 0 - mapone->scrollY;
	}
}

void arrowDraw() {
	oslDrawImageXY(arrowDown, arrowx[0], arrowy[0]);
}
