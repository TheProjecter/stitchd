/*struct createEnviro Platform;
Platform.makeObject(platform, 120 - mapone->scrollX, 
	130 - mapone->scrollY, 0, platx, platy);
Platform.makeObject(platform, platx[0] + 100, 
	platy[0], 1, platx, platy);
Platform.makeObject(platform, platx[0] + 200, 
	platy[0] + 50, 2, platx, platy);
Platform.makeObject(platform, platx[0] + 300,
	platy[0] + 100, 3, platx, platy);
Platform.makeObject(platform, platx[0] + 400,
	platy[0] + 100, 4, platx, platy);
Platform.makeObject(platform, platx[0] + 500,
	platy[0] + 100, 5, platx, platy);
Platform.makeObject(platform, platx[0] + 600,
	platy[0] + 160, 6, platx, platy);
Platform.makeObject(platform, platx[6] - 120,
	platy[6] + 100, 7, platx, platy);
Platform.makeObject(platform, platx[7] - 150,
	platy[7] + 100, 8, platx, platy); */

void platSet() {
	if (level == 1) {
		platx[0] = 120 - mapone->scrollX;
		platy[0] = 130 - mapone->scrollY;
		platx[1] = platx[0] + 100;
		platy[1] = platy[0];
		platx[2] = platx[0] + 200;
		platy[2] = platy[0] + 50;
		platx[3] = platx[0] + 300;
		platy[3] = platy[0] + 100;
		platx[4] = platx[0] + 400;
		platy[4] = platy[0] + 100;
		platx[5] = platx[0] + 500;
		platy[5] = platy[0] + 100;
		platx[6] = platx[0] + 600;
		platy[6] = platy[0] + 160;
		platx[7] = platx[6] - 120;
		platy[7] = platy[6] + 100;
		platx[8] = platx[7] - 150;
		platy[8] = platy[7] + 100;
		platx[9] = platx[8] - 100;
		platy[9] = platy[8];
		platx[10] = platx[9] - 50;
		platy[10] = platy[9] + 150;
		platx[11] = platx[10] + 30;
		platy[11] = platy[10] + platform->stretchY;
		platx[12] = platx[11] + 30;
		platy[12] = platy[11] + platform->stretchY;
		platx[13] = platx[12] + 30;
		platy[13] = platy[12] + platform->stretchY;
		platx[14] = platx[13] + 30;
		platy[14] = platy[13] + platform->stretchY;
		platx[15] = platx[14] + 30;
		platy[15] = platy[14] + platform->stretchY;
		platx[16] = platx[15] + 100;
		platy[16] = platy[15];
		platx[17] = platx[15] + 200;
		platy[17] = platy[15];
		platx[18] = platx[17] + 300;
		platy[18] = platy[17];
		platx[19] = platx[18] + platform->stretchX;
		platy[19] = platy[18];
		platx[20] = platx[19];
		platy[20] = platy[19] - 75;
		platx[21] = platx[19];
		platy[21] = platy[20] - 75;
	} else if (level == 2) {
		platx[0] = 220 - mapone->scrollX;
		platy[0] = 120 - mapone->scrollY;
		platx[1] = platx[0] + platform->stretchX + 60;
		platy[1] = platy[0];
		platx[2] = platx[1] + platform->stretchX + 60;
		platy[2] = platy[1];
		platx[3] = platx[2] + platform->stretchX - 45;
		platy[3] = platy[2] + 150;
		platx[4] = platx[3] + platform->stretchX + 60;
		platy[4] = platy[3];
		platx[5] = platx[3] + (platform->stretchX / 2);
		platy[5] = platy[3] + wall->stretchY + platform->stretchY + 65;
		platx[6] = platx[5] + platform->stretchX;
		platy[6] = platy[5];
		platx[7] = platx[6] + 30;
		platy[7] = platy[6] - platform->stretchY;
		platx[8] = platx[7] + 30;
		platy[8] = platy[7] - platform->stretchY;
		platx[9] = platx[8] + 30;
		platy[9] = platy[8] - platform->stretchY;
		platx[10] = platx[9] + 30;
		platy[10] = platy[9] - platform->stretchY;
		platx[11] = platx[10] + 30;
		platy[11] = platy[10] - platform->stretchY;
		platx[12] = platx[11] + 30;
		platy[12] = platy[11] - platform->stretchY;
		platx[13] = platx[12] + 30;
		platy[13] = platy[12] - platform->stretchY;
		platx[14] = platx[13] + 30;
		platy[14] = platy[13] - platform->stretchY;
		platx[15] = platx[14] + 30;
		platy[15] = platy[14] - platform->stretchY;
		platx[16] = platx[15] + 30;
		platy[16] = platy[15] - platform->stretchY;
		platx[17] = platx[16] + platform->stretchX;
		platy[17] = platy[16];
		platx[18] = platx[17] + platform->stretchX + 70;
		platy[18] = platy[17];
		platx[19] = platx[18] + platform->stretchX + 80;
		platy[19] = platy[18];
		platx[20] = platx[19] + platform->stretchX + 90;
		platy[20] = platy[19];
		platx[21] = platx[20] + platform->stretchX + 100;
		platy[21] = platy[20];
	} else if (level == 3) {
		platx[0] = 190 - mapone->scrollX;
		platy[0] = 150 - mapone->scrollY;
		platx[1] = platx[0] + platform->stretchX;
		platy[1] = platy[0];
		platx[2] = platx[1] + platform->stretchX;
		platy[2] = platy[1] - 30;
		platx[3] = platx[2] + platform->stretchX;
		platy[3] = platy[2] - 30; //Wall ending this. Place skull on it.
		platx[4] = platx[1] + platform->stretchX;
		platy[4] = platy[1] + 60;
		platx[5] = platx[4] + platform->stretchX;
		platy[5] = platy[4];
		platx[6] = platx[5] + platform->stretchX + 75;
		platy[6] = platy[5]; //Elevator after this. (Going up + down) 
		platx[7] = platx[6] + (platform->stretchX * 2);
		platy[7] = platy[6] + 300;
		platx[8] = platx[7];
		platy[8] = platy[7] - 60; //Skull on this.
		platx[9] = platx[8] + platform->stretchX;
		platy[9] = platy[8];
		platx[10] = platx[9];
		platy[10] = platy[9] - 60;
		platx[11] = platx[10] + platform->stretchX;
		platy[11] = platy[10];
		platx[12] = platx[11];
		platy[12] = platy[10] - 60;
		platx[13] = platx[12] + platform->stretchX;
		platy[13] = platy[12]; //Skull on this.
		//Elevator going down 400.
		//Down 400 px: Elevator going right 200.
		platx[14] = platx[13] + (platform->stretchX * 4);
		platy[14] = platy[13] + 400; //Skull here.
		platx[15] = platx[14] + platform->stretchX;
		platy[15] = platy[14];//Spikes
		platx[16] = platx[15] + platform->stretchX;
		platy[16] = platy[15];//along
		platx[17] = platx[16] + platform->stretchX;
		platy[17] = platy[16];//this
		platx[18] = platx[17] + platform->stretchX;
		platy[18] = platy[17];//stretch.
		platx[19] = platx[18] + platform->stretchX;
		platy[19] = platy[18];
		platx[20] = platx[19] + platform->stretchX + 60;
		platy[20] = platy[19];
		platx[21] = platx[20] + platform->stretchX;
		platy[21] = platy[20] - 60;
	}
}

void platDraw() {
	oslDrawImageXY(platform, platx[0], platy[0]);
	oslDrawImageXY(platform, platx[1], platy[1]);
	oslDrawImageXY(platform, platx[2], platy[2]);
	oslDrawImageXY(platform, platx[3], platy[3]);
	oslDrawImageXY(platform, platx[4], platy[4]);
	oslDrawImageXY(platform, platx[5], platy[5]);
	oslDrawImageXY(platform, platx[6], platy[6]);
	oslDrawImageXY(platform, platx[7], platy[7]);
	oslDrawImageXY(platform, platx[8], platy[8]);
	oslDrawImageXY(platform, platx[9], platy[9]);
	oslDrawImageXY(platform, platx[10], platy[10]);
	oslDrawImageXY(platform, platx[11], platy[11]);
	oslDrawImageXY(platform, platx[12], platy[12]);
	oslDrawImageXY(platform, platx[13], platy[13]);
	oslDrawImageXY(platform, platx[14], platy[14]);
	oslDrawImageXY(platform, platx[15], platy[15]);
	oslDrawImageXY(platform, platx[16], platy[16]);
	oslDrawImageXY(platform, platx[17], platy[17]);
	oslDrawImageXY(platform, platx[18], platy[18]);
	oslDrawImageXY(platform, platx[19], platy[19]);
	oslDrawImageXY(platform, platx[20], platy[20]);
	oslDrawImageXY(platform, platx[21], platy[21]);
}

void collisionCall() {
	if (platformCheck(0) == 1) {
			collision = 1;
			sprite->y = platy[0] - sprite->stretchY;
	} else if (platformCheck(1) == 1) {
			collision = 1;
			sprite->y = platy[1] - sprite->stretchY;
	} else if (platformCheck(2) == 1) {
			collision = 1;
			sprite->y = platy[2] - sprite->stretchY;
	} else if (platformCheck(3) == 1) {
			collision = 1;
			sprite->y = platy[3] - sprite->stretchY;
	} else if (platformCheck(4) == 1) {
			collision = 1;
			sprite->y = platy[4] - sprite->stretchY;
	} else if (platformCheck(5) == 1) {
			collision = 1;
			sprite->y = platy[5] - sprite->stretchY;
	} else if (platformCheck(6) == 1) {
			collision = 1;
			sprite->y = platy[6] - sprite->stretchY;
	} else if (platformCheck(7) == 1) {
			collision = 1;
			sprite->y = platy[7] - sprite->stretchY;
	} else if (platformCheck(8) == 1) {
			collision = 1;
			sprite->y = platy[8] - sprite->stretchY;
	} else if (platformCheck(9) == 1) {
			collision = 1;
			sprite->y = platy[9] - sprite->stretchY;
	} else if (platformCheck(10) == 1) {
			collision = 1;
			sprite->y = platy[10] - sprite->stretchY;
	} else if (platformCheck(11) == 1) {
			collision = 1;
			sprite->y = platy[11] - sprite->stretchY;
	} else if (platformCheck(12) == 1) {
			collision = 1;
			sprite->y = platy[12] - sprite->stretchY;
	} else if (platformCheck(13) == 1) {
			collision = 1;
			sprite->y = platy[13] - sprite->stretchY;
	} else if (platformCheck(14) == 1) {
			collision = 1;
			sprite->y = platy[14] - sprite->stretchY;
	} else if (platformCheck(15) == 1) {
			collision = 1;
			sprite->y = platy[15] - sprite->stretchY;
	} else if (platformCheck(16) == 1) {
			collision = 1;
			sprite->y = platy[16] - sprite->stretchY;
	} else if (platformCheck(17) == 1) {
			collision = 1;
			sprite->y = platy[17] - sprite->stretchY;
	} else if (platformCheck(18) == 1) {
			collision = 1;
			sprite->y = platy[18] - sprite->stretchY;
	} else if (platformCheck(19) == 1) {
			collision = 1;
			sprite->y = platy[19] - sprite->stretchY;
	} else if (platformCheck(20) == 1) {
			collision = 1;
			sprite->y = platy[20] - sprite->stretchY;
	} else if (platformCheck(21) == 1) {
			collision = 1;
			sprite->y = platy[21] - sprite->stretchY;
	} else if (rockColTop == 1) {
		collision = 1;
		sprite->y = rocky[rockNo] - sprite->stretchY;
	} else if (eleCol == 1) {
		collision = 1;
	} else { 
		collision = 0;
	}
}