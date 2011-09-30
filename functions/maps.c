OSL_MAP *mapone;
OSL_IMAGE *mapone_tileset;

void mapDefs() {
	mapone_tileset = oslLoadImageFile(const_cast<char *>("image/maps/mapone.png"), OSL_IN_RAM, OSL_PF_8888);
}

void mapCreate() {
	mapone = oslCreateMap(
	mapone_tileset,
	const_cast<short unsigned int (*)[64]>(mapone_map),
	16,16,
	64,129,
	OSL_MF_U16);
}