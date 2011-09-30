void spikeSet() {
	if (level == 1) {
		spikx[0] = 125 - mapone->scrollX;
		spiky[0] = 100 - mapone->scrollY;
		spikx[1] = 480 - mapone->scrollX;
		spiky[1] = 200 - mapone->scrollY;
		spikx[2] = 570 - mapone->scrollX;
		spiky[2] = 200 - mapone->scrollY;
		spikx[3] = spikx[2] + spike->stretchX;
		spiky[3] = spiky[2];
		spikx[4] = platx[5] + platform->stretchX - spike->stretchX;
		spiky[4] = platy[5] - spike->stretchY;
		spikx[5] = platx[8];
		spiky[5] = platy[8] - spike->stretchY;
		spikx[6] = platx[8] - spike->stretchX;
		spiky[6] = platy[8] - spike->stretchY;
		spikx[7] = platx[16] + 20;
		spiky[7] = platy[16] - spike->stretchY;
		spikx[8] = platx[16] + 20 - spike->stretchX;
		spiky[8] = platy[16] - spike->stretchY;
		spikx[9] = platx[17] + platform->stretchX - spike->stretchX;
		spiky[9] = platy[16] - spike->stretchY;
	} else if (level == 2) {
		spikx[0] = platx[2] + platform->stretchX - spike->stretchX;
		spiky[0] = platy[2] - spike->stretchY;
		spikx[1] = rockx[1];
		spiky[1] = rocky[1] - spike->stretchY;
		spikx[2] = rockx[3];
		spiky[2] = rocky[3] - spike->stretchY;
		spikx[3] = platx[16];
		spiky[3] = platy[16] - spike->stretchY;
		spikx[4] = 0 - mapone->scrollX;
		spiky[4] = 0 - mapone->scrollY;
		spikx[5] = 0 - mapone->scrollX;
		spiky[5] = 0 - mapone->scrollY;
		spikx[6] = 0 - mapone->scrollX;
		spiky[6] = 0 - mapone->scrollY;
		spikx[7] = 0 - mapone->scrollX;
		spiky[7] = 0 - mapone->scrollY;
		spikx[8] = 0 - mapone->scrollX;
		spiky[8] = 0 - mapone->scrollY;
		spikx[9] = 0 - mapone->scrollX;
		spiky[9] = 0 - mapone->scrollY;
	} else if (level == 3) {
		spikx[0] = 0 - mapone->scrollX;
		spiky[0] = 0 - mapone->scrollY;
		spikx[1] = 0 - mapone->scrollX;
		spiky[1] = 0 - mapone->scrollY;
		spikx[2] = 0 - mapone->scrollX;
		spiky[2] = 0 - mapone->scrollY;
		spikx[3] = 0 - mapone->scrollX;
		spiky[3] = 0 - mapone->scrollY;
		spikx[4] = 0 - mapone->scrollX;
		spiky[4] = 0 - mapone->scrollY;
		spikx[5] = 0 - mapone->scrollX;
		spiky[5] = 0 - mapone->scrollY;
		spikx[6] = 0 - mapone->scrollX;
		spiky[6] = 0 - mapone->scrollY;
		spikx[7] = 0 - mapone->scrollX;
		spiky[7] = 0 - mapone->scrollY;
		spikx[8] = 0 - mapone->scrollX;
		spiky[8] = 0 - mapone->scrollY;
		spikx[9] = 0 - mapone->scrollX;
		spiky[9] = 0 - mapone->scrollY;
	}
}

void spikeDraw() {
	oslDrawImageXY(spike, spikx[0], spiky[0]);
	oslDrawImageXY(spike, spikx[1], spiky[1]);
	oslDrawImageXY(spike, spikx[2], spiky[2]);
	oslDrawImageXY(spike, spikx[3], spiky[3]);
	oslDrawImageXY(spike, spikx[4], spiky[4]);
	oslDrawImageXY(spike, spikx[5], spiky[5]);
	oslDrawImageXY(spike, spikx[6], spiky[6]);
	oslDrawImageXY(spike, spikx[7], spiky[7]);
	oslDrawImageXY(spike, spikx[8], spiky[8]);
	oslDrawImageXY(spike, spikx[9], spiky[9]);
}

void spikeCall() {
	if (spikeCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		spikx[0], spiky[0],
		spikx[0] + spike->stretchX, 
		spiky[0] + spike->stretchY) == 1) {
			spikeCol = 1;
			oslPlaySound(cutone, 1);
			sceKernelDelayThread(1 * 1000000); 
			death = 1;
			playerHealth --;
	} else if (spikeCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		spikx[1], spiky[1],
		spikx[1] + spike->stretchX, 
		spiky[1] + spike->stretchY) == 1) {
			spikeCol = 1;
			oslPlaySound(cutone, 1);
			sceKernelDelayThread(1 * 1000000);
			death = 1;
			playerHealth --;
	} else if (spikeCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		spikx[2], spiky[2],
		spikx[2] + spike->stretchX, 
		spiky[2] + spike->stretchY) == 1) {
			spikeCol = 1;
			oslPlaySound(cutone, 1);
			sceKernelDelayThread(1 * 1000000); 
			death = 1;
			playerHealth --;
	} else if (spikeCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		spikx[3], spiky[3],
		spikx[3] + spike->stretchX, 
		spiky[3] + spike->stretchY) == 1) {
			spikeCol = 1;
			oslPlaySound(cutone, 1);
			sceKernelDelayThread(1 * 1000000); 
			death = 1;
			playerHealth --;
	} else if (spikeCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		spikx[4], spiky[4],
		spikx[4] + spike->stretchX, 
		spiky[4] + spike->stretchY) == 1) {
			spikeCol = 1;
			oslPlaySound(cutone, 1);
			sceKernelDelayThread(1 * 1000000); 
			death = 1;
			playerHealth --;
	} else if (spikeCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		spikx[5], spiky[5],
		spikx[5] + spike->stretchX, 
		spiky[5] + spike->stretchY) == 1) {
			spikeCol = 1;
			oslPlaySound(cutone, 1);
			sceKernelDelayThread(1 * 1000000); 
			death = 1;
			playerHealth --;
	} else if (spikeCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		spikx[6], spiky[6],
		spikx[6] + spike->stretchX, 
		spiky[6] + spike->stretchY) == 1) {
			spikeCol = 1;
			oslPlaySound(cutone, 1);
			sceKernelDelayThread(1 * 1000000); 
			death = 1;
			playerHealth --;
	} else if (spikeCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		spikx[7], spiky[7],
		spikx[7] + spike->stretchX, 
		spiky[7] + spike->stretchY) == 1) {
			spikeCol = 1;
			oslPlaySound(cutone, 1);
			sceKernelDelayThread(1 * 1000000); 
			death = 1;
			playerHealth --;
	} else if (spikeCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		spikx[8], spiky[8],
		spikx[8] + spike->stretchX, 
		spiky[8] + spike->stretchY) == 1) {
			spikeCol = 1;
			oslPlaySound(cutone, 1);
			sceKernelDelayThread(1 * 1000000); 
			death = 1;
			playerHealth --;
	} else if (spikeCheck(sprite->x, sprite->y,
		sprite->x + sprite->stretchX, 
		sprite->y + sprite->stretchY,
		spikx[9], spiky[9],
		spikx[9] + spike->stretchX, 
		spiky[9] + spike->stretchY) == 1) {
			spikeCol = 1;
			oslPlaySound(cutone, 1);
			sceKernelDelayThread(1 * 1000000); 
			death = 1;
			playerHealth --;
	} else {
		spikeCol = 0;
	}
}