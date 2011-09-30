int setSelection(OSL_IMAGE *imagename, int newx, int newy) {
	if (imagename->x != newx)
		imagename->x = newx;
	if (imagename->y != newy)
		imagename->y = newy;
	if ((imagename->x != newx) || (imagename->y != newy))
		return 0;
	return 1;
}

/* Usage:
	setSelection(mainmenuselection, 131, 225);
	imagename -> Name of the image to move.
	newx      -> New X-Location of image.
	newy      -> New Y-Location of image
   Fin  */

int elevator(int dist, int eleNum, int spriteVar) {
	if (distTravelled[eleNum] <= dist) {
		eleVar[eleNum] += eleSpeed[eleNum];
		if (eleSpeed[eleNum] > 0)
			distTravelled[eleNum] += eleSpeed[eleNum];
		else if (eleSpeed[eleNum] < 0)
			distTravelled[eleNum] -= eleSpeed[eleNum];
		else return 0;
	} else if (distTravelled[eleNum] >= dist) {
		eleSpeed[eleNum] *= -1;
		distTravelled[eleNum] = 0;
	} else return 0;
	return 1;
}

/* Usage:
	dist = Distance to travel (Total).
	eleNum = Number of elevator.
	spriteVar = Image and x or y of sprite.
   Fin.. */
   
int platformCheck(int i) {
	if (collisionCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		platx[i], platy[i],
		platx[i] + platform->stretchX,
		platy[i] + platform->stretchY) == 1) {
			return 1;
	} else return 0;
}

/* Usage:
	i = Number of the platform to test for collision.
   Fin.. */

void drawImages(int minNo, int maxNo, 
	OSL_IMAGE *imgName, int xVar[], int yVar[]) {
	oslDrawImageXY(imgName, xVar[px], yVar[px]);
	if (px > maxNo) px = minNo;
	else px ++;
}

/* Usage:
	minNo = Lowest item in the array (Usually zero).
	maxNo = Highest item in the array.
	imgName = Name of the image to be drawn.
	xVar = Name of the image's x variable.
	yVar = Name of the image's y variable.
   Fin.. */
   
void scrubLocation(int minNo, int maxNo, 
	int xVar[], int yVar[]) {
	xVar[px] = 0 - mapone->scrollX;
	yVar[px] = 0 - mapone->scrollY;
	if (px > maxNo) px = minNo;
	else if (px < minNo) px = minNo;
	else px ++;
}

/* Usage:
	minNo = See above.
	maxNo = See above.
	xVar = Name of image's x variable.
	yVar = Name of image's y variable.
   Fin.. */
	
void eleReset(int eleNum, int speed) {
	eleSpeed[eleNum] = speed;
	eleVar[eleNum] = 0;
	distTravelled[eleNum] = 0;
}
	
	
	
	
	
	
	
   