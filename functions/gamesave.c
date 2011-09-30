FILE *gameStats;
gameStats = fopen("files/stats/gamestats.txt" , "wb");
/*
typedef struct _GameSave {
	int xLocation;
	int yLocation;
	int level;
	int playerRank;
} GameSave;

GameSave Save;
Save.xLocation = 5;
Save.yLocation = 5;
Save.level = 5;
Save.playerRank = 5;
if (fwrite(&Save, 1, sizeof(GameSave), gameStats) < 1) {
	fclose(gameStats);
	return 0;
}*/