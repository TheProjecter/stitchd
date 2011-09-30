void gatewaySet() {
	gateway->centerX = gateway->sizeX / 2;
	gateway->centerY = gateway->sizeY / 2;
	if (level == 1) {
		gatewayx[0] = platx[21] + gateway->stretchX;
		gatewayy[0] = platy[21] - gateway->stretchY - 15;
	} else if ((level == 2) || (level == 3)) {
		gatewayx[0] = platx[21] + gateway->stretchX + 20;
		gatewayy[0] = platy[21] - gateway->stretchY - 25;
	}
}

void gatewayDraw() {
	oslDrawImageXY(gateway, gatewayx[0], gatewayy[0]);
}

void gatewayCall() {
	if ((gatewayAdvance(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		gatewayx[0], gatewayy[0],
		gatewayx[0] + gateway->stretchX, 
		gatewayy[0] + gateway->stretchY) == 1) && 
		(skulls == skullmax)) {
			jumping = 0;
			oslCls();
			leveltimer = 0;
			levelcomplete = 1;
	}
}