int rockAnimate() {
	if (rAnimDone[rockArray] == 0) {
		rockTimer ++;
		if ((rockTimer > 1) && (rockCounter >= 0) && (rockCounter < 7))
			rockCounter ++, rockTimer = 0;
		if (rockCounter > 0) {
			oslSetImageTileSize(rockAnim,((rockCounter - 1) * 45),0,45,45);
			oslDrawImageXY(rockAnim, rockx[rockArray], rocky[rockArray]);
		}
		if (rockCounter >= 7) rAnimDone[rockArray] = 1;
	} else { rockTimer = 0; }
	return 0;
}