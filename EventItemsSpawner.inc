#if defined _EventItemsSpawner_included
#endinput
#endif
#define _EventItemsSpawner_included

/*
	Param 1 : int client
	Param 2 : float x
	Param 3 : float y
	Param 4 : float z
*/
forward void itemspawner_OnItemPickupBasic(int client, float x, float y, float z);

/*
	Param 1 : int client
	Param 2 : float x
	Param 3 : float y
	Param 4 : float z
	Param 5 : int received credits
	Param 6 : char[255] Item Path
	Param 7 : char[255] Aura Path
	Param 8 : char[255] Effect Path
	Param 9 : char[255] Sound Path
	Param 10 : char[64] Item Name
*/
forward void itemspawner_OnItemPickupAdvanced(int client, float x, float y, float z, int creditsReceived, char itemPath[255], char auraPath[255], char effectPath[255], char soundPath[255], char itemName[64]); 