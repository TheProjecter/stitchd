class gameSave {
	public:
		int setLevel(int newLvl);
		int setUnlock(int newUnlk);
		int setRank(int newRnk);
	private:
		int playerLevel;
		int playerUnlocks;
		int playerRank;
};

int gameSave::setLevel(int newLvl) {
	playerLevel = newLvl;
	return playerLevel;
}

int gameSave::setUnlock(int newUnlk) {
	playerUnlocks = newUnlk;
	return newUnlk;
}

int gameSave::setRank(int newRnk) {
	playerRank = newRnk;
	return newRnk;
}

class createEnviro {
	public:
		OSL_IMAGE *target;
		int xVar[];
		int yVar[];
		void makeObject(int xPos, 
			int yPos, int itemNo);
};

void createEnviro::makeObject(int xPos, 
	int yPos, int itemNo) {
		xVar[itemNo] = xPos;
		yVar[itemNo] = yPos;
		oslDrawImageXY(target, 
		xVar[itemNo], yVar[itemNo]);
}
