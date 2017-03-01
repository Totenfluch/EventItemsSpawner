EventItemSpawner
---------------------------------

This requires https://forums.alliedmods.net/showthread.php?t=276677 (Zephstore)

Installation:
- Download it from here: https://github.com/Totenfluch/EventItemsSpawner
- Extract the .smx into your plugin folder
- Extract the .phrases into your translations folder
- Create a Folder in addons/sourcemod/configs called "event_Item"
- mapconfigs need to be moved into this folder if you want to use mine
- easter/christmas/halloween stuff needs to be installed seperatly
- Download and precache has to be done by you with https://forums.alliedmods.net/showthread.php?p=602270 (sm_downloader) for example
- Edit the config in cfg/sourcemod/eventItems.cfg to your wishes
- Sidenote if you don't know how to use some config options, leave them to default
- Add a database config to the database.cfg that you named in the config. IT WON'T WORK WITHOUT
- Restart the Map/Server


Commands:

Admin Commands
- sm_itemspawns - Opens the Item spawn Menu
- sm_itemspawnsreload - Reloads the Spawn Points
- sm_itemmaps - Prints all maps without spawnpoints

Player Commands
- DEPEND ON THE event_itemName IN THE CONFIG(!)
- sm_{%s}top - Lists the best collectors
- sm_{%s}amount - Prints the amount of active Items to the client
- sm_{%s}s - Prints the amount of items collected by the client to the client 

Example: event_itemName: Coin
- sm_Cointop
- sm_Coinamount
- smCoins


Usage:
  - use sm_itemspawns to create spawnpoints
  - Walk over the Item to pick it up


Video of it:
https://youtu.be/OqLZRtwmiVI
