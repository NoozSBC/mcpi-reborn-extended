#ifndef MINECRAFT_H

#define MINECRAFT_H

#include <stdint.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"

// Globals

static char **default_username = (char **) 0x18fd4;

static unsigned char **item_flintAndSteel = (unsigned char **) 0x17ba70;
static unsigned char **item_snowball = (unsigned char **) 0x17bbb0;
static unsigned char **item_shears = (unsigned char **) 0x17bbf0;
static unsigned char **item_egg = (unsigned char **) 0x17bbd0;
static unsigned char **item_dye_powder = (unsigned char **) 0x17bbe0;

static unsigned char **tile_water = (unsigned char **) 0x181b3c;
static unsigned char **tile_lava = (unsigned char **) 0x181cc8;
static unsigned char **tile_calmWater = (unsigned char **) 0x181b40;
static unsigned char **tile_calmLava = (unsigned char **) 0x181ccc;
static unsigned char **tile_glowingObsidian = (unsigned char **) 0x181dcc;
static unsigned char **tile_topSnow = (unsigned char **) 0x181b30;
static unsigned char **tile_ice = (unsigned char **) 0x181d80;
static unsigned char **tile_invisible_bedrock = (unsigned char **) 0x181d94;

typedef long int (*getRemainingFileSize_t)(FILE *file);
static getRemainingFileSize_t getRemainingFileSize = (getRemainingFileSize_t) 0xba520;

// Structures

struct LevelSettings {
    unsigned long seed;
    int32_t game_type;
};

struct RakNet_RakNetGUID {
    unsigned char data[10];
};

struct RakNet_SystemAddress {
    unsigned char data[20];
};

struct RakNet_BitStream {
    unsigned char data[273];
};

struct RakDataOutput {
    unsigned char data[8];
};

struct RakDataInput {
    unsigned char data[8];
};

// GameMode

typedef void (*GameMode_releaseUsingItem_t)(unsigned char *game_mode, unsigned char *player);

// Minecraft

typedef void (*Minecraft_init_t)(unsigned char *minecraft);
static Minecraft_init_t Minecraft_init = (Minecraft_init_t) 0x1700c;

typedef void (*Minecraft_tickInput_t)(unsigned char *minecraft);
static Minecraft_tickInput_t Minecraft_tickInput = (Minecraft_tickInput_t) 0x15ffc;

typedef void (*Minecraft_setIsCreativeMode_t)(unsigned char *, int32_t);
static Minecraft_setIsCreativeMode_t Minecraft_setIsCreativeMode = (Minecraft_setIsCreativeMode_t) 0x16ec4;

typedef int32_t (*Minecraft_isTouchscreen_t)(unsigned char *minecraft);
static Minecraft_isTouchscreen_t Minecraft_isTouchscreen = (Minecraft_isTouchscreen_t) 0x1639c;

typedef void (*Minecraft_setScreen_t)(unsigned char *minecraft, unsigned char *screen);
static Minecraft_setScreen_t Minecraft_setScreen = (Minecraft_setScreen_t) 0x15d6c;

typedef void (*Minecraft_tick_t)(unsigned char *minecraft, int32_t param_1, int32_t param_2);
static Minecraft_tick_t Minecraft_tick = (Minecraft_tick_t) 0x16934;

typedef void (*Minecraft_update_t)(unsigned char *minecraft);
static Minecraft_update_t Minecraft_update = (Minecraft_update_t) 0x16b74;

typedef void (*Minecraft_hostMultiplayer_t)(unsigned char *minecraft, int32_t port);
static Minecraft_hostMultiplayer_t Minecraft_hostMultiplayer = (Minecraft_hostMultiplayer_t) 0x16664;

typedef const char *(*Minecraft_getProgressMessage_t)(unsigned char *minecraft);
static Minecraft_getProgressMessage_t Minecraft_getProgressMessage = (Minecraft_getProgressMessage_t) 0x16e58;

typedef uint32_t (*Minecraft_isLevelGenerated_t)(unsigned char *minecraft);
static Minecraft_isLevelGenerated_t Minecraft_isLevelGenerated = (Minecraft_isLevelGenerated_t) 0x16e6c;

// MouseBuildInput

typedef int32_t (*MouseBuildInput_tickBuild_t)(unsigned char *mouse_build_input, unsigned char *player, uint32_t *build_action_intention_return);
static MouseBuildInput_tickBuild_t MouseBuildInput_tickBuild = (MouseBuildInput_tickBuild_t) 0x17c98;
static void *MouseBuildInput_tickBuild_vtable_addr = (void *) 0x102564;

// Player

typedef int (*Player_isUsingItem_t)(unsigned char *player);
static Player_isUsingItem_t Player_isUsingItem = (Player_isUsingItem_t) 0x8f15c;

typedef void (*Player_setArmor_t)(unsigned char *player, int32_t slot, unsigned char *item);
static Player_setArmor_t Player_setArmor = (Player_setArmor_t) 0x8fde0;

// Player

static void *LocalPlayer_openTextEdit_vtable_addr = (void *) 0x106460;

// Gui

typedef void (*Gui_tickItemDrop_t)(unsigned char *gui);
static Gui_tickItemDrop_t Gui_tickItemDrop = (Gui_tickItemDrop_t) 0x27778;

typedef void (*Gui_handleClick_t)(unsigned char *gui, int32_t param_2, int32_t param_3, int32_t param_4);
static Gui_handleClick_t Gui_handleClick = (Gui_handleClick_t) 0x2599c;

// GameMode Constructors

static void *Creator = (void *) 0x1a044;
static void *SurvivalMode = (void *) 0x1b7d8;
static void *CreativeMode = (void *) 0x1b258;

// LevelData

typedef uint32_t (*LevelData_getSpawnMobs_t)(unsigned char *level_data);
static LevelData_getSpawnMobs_t LevelData_getSpawnMobs = (LevelData_getSpawnMobs_t) 0xbabec;

// Level

typedef void (*Level_saveLevelData_t)(unsigned char *level);
static Level_saveLevelData_t Level_saveLevelData = (Level_saveLevelData_t) 0xa2e94;

// TextEditScreen

typedef unsigned char *(*TextEditScreen_t)(unsigned char *text_edit_screen, unsigned char *sign);
static TextEditScreen_t TextEditScreen = (TextEditScreen_t) 0x3a840;

static void *TextEditScreen_updateEvents_vtable_addr = (void *) 0x10531c;

// ProgressScreen

typedef void *(*ProgressScreen_t)(unsigned char *obj);
static ProgressScreen_t ProgressScreen = (ProgressScreen_t) 0x37044;

// Screen

typedef void (*Screen_updateEvents_t)(unsigned char *screen);
static Screen_updateEvents_t Screen_updateEvents = (Screen_updateEvents_t) 0x28eb8;

typedef void (*Screen_keyboardNewChar_t)(unsigned char *screen, char key);
typedef void (*Screen_keyPressed_t)(unsigned char *screen, int32_t key);

// ItemInstance

typedef unsigned char *(*ItemInstance_t)(unsigned char *item_instance, unsigned char *item);
static ItemInstance_t ItemInstance_item = (ItemInstance_t) 0x9992c;
static ItemInstance_t ItemInstance_tile = (ItemInstance_t) 0x998e4;
typedef unsigned char *(*ItemInstance_damage_t)(unsigned char *item_instance, unsigned char *item, int32_t count, int32_t damage);
static ItemInstance_damage_t ItemInstance_damage = (ItemInstance_damage_t) 0x99960;

// FillingContainer

typedef int32_t (*FillingContainer_addItem_t)(unsigned char *filling_container, unsigned char *item_instance);
static FillingContainer_addItem_t FillingContainer_addItem = (FillingContainer_addItem_t) 0x92aa0;

// RakNet::RakPeer

typedef struct RakNet_SystemAddress (*RakNet_RakPeer_GetSystemAddressFromGuid_t)(unsigned char *rak_peer, struct RakNet_RakNetGUID guid);

// RakNet::BitStream

typedef unsigned char *(*RakNet_BitStream_constructor_t)(struct RakNet_BitStream *stream);
static RakNet_BitStream_constructor_t RakNet_BitStream_constructor = (RakNet_BitStream_constructor_t) 0xd3b84;

typedef void (*RakNet_BitStream_destructor_t)(struct RakNet_BitStream *stream);
static RakNet_BitStream_destructor_t RakNet_BitStream_destructor = (RakNet_BitStream_destructor_t) 0xd3ce8;

// RakDataOutput

static unsigned char *RakDataOutput_vtable = (unsigned char *) 0x109628;

// RakDataInput

static unsigned char *RakDataInput_vtable = (unsigned char *) 0x1095c8;

// ServerSideNetworkHandler

typedef void (*ServerSideNetworkHandler_onDisconnect_t)(unsigned char *server_side_network_handler, unsigned char *guid);
static ServerSideNetworkHandler_onDisconnect_t ServerSideNetworkHandler_onDisconnect = (ServerSideNetworkHandler_onDisconnect_t) 0x75164;
static void *ServerSideNetworkHandler_onDisconnect_vtable_addr = (void *) 0x109bb0;

typedef unsigned char *(*ServerSideNetworkHandler_getPlayer_t)(unsigned char *server_side_network_handler, unsigned char *guid);
static ServerSideNetworkHandler_getPlayer_t ServerSideNetworkHandler_getPlayer = (ServerSideNetworkHandler_getPlayer_t) 0x75464;

// CompoundTag

typedef unsigned char *(*CompoundTag_t)(unsigned char *tag);
static CompoundTag_t CompoundTag = (CompoundTag_t) 0xb9920;

// Tag

typedef void (*Tag_writeNamedTag_t)(unsigned char *tag, struct RakDataOutput *output);
static Tag_writeNamedTag_t Tag_writeNamedTag = (Tag_writeNamedTag_t) 0x6850c;

typedef void (*Tag_deleteChildren_t)(unsigned char *tag);
typedef void (*Tag_destructor_t)(unsigned char *tag);

// Entity

typedef void (*Entity_saveWithoutId_t)(unsigned char *entity, unsigned char *tag);

typedef void (*Entity_load_t)(unsigned char *entity, unsigned char *tag);

typedef void (*Entity_moveTo_t)(unsigned char *entity, float param_1, float param_2, float param_3, float param_4, float param_5);
static Entity_moveTo_t Entity_moveTo = (Entity_moveTo_t) 0x7a834;

typedef void (*Entity_die_t)(unsigned char *entity, unsigned char *cause);

// ServerPlayer

static void *ServerPlayer_moveTo_vtable_addr = (void *) 0x109e54;

// NbtIo

typedef unsigned char *(*NbtIo_read_t)(struct RakDataInput *input);
static NbtIo_read_t NbtIo_read = (NbtIo_read_t) 0xb98cc;

// Inventory

typedef void (*Inventory_clearInventoryWithDefault_t)(unsigned char *inventory);
static Inventory_clearInventoryWithDefault_t Inventory_clearInventoryWithDefault = (Inventory_clearInventoryWithDefault_t) 0x8e7c8;

// Method That Require C++ Types
#ifdef __cplusplus

#include <string>

#include "cxx11_util.h"

// AppPlatform

typedef cxx11_string (*AppPlatform_readAssetFile_t)(unsigned char *app_platform, std::string const& path);
static AppPlatform_readAssetFile_t AppPlatform_readAssetFile = (AppPlatform_readAssetFile_t) 0x12b10;

// Minecraft

typedef void (*Minecraft_selectLevel_t)(unsigned char *minecraft, std::string const& level_dir, std::string const& level_name, LevelSettings const& vsettings);
static Minecraft_selectLevel_t Minecraft_selectLevel = (Minecraft_selectLevel_t) 0x16f38;

typedef void (*Minecraft_leaveGame_t)(unsigned char *minecraft, bool save_remote_level);
static Minecraft_leaveGame_t Minecraft_leaveGame = (Minecraft_leaveGame_t) 0x15ea0;

// Gui

typedef void (*Gui_addMessage_t)(unsigned char *gui, std::string const& text);
static Gui_addMessage_t Gui_addMessage = (Gui_addMessage_t) 0x27820;

// Textures

typedef void (*Textures_tick_t)(unsigned char *textures, bool param_1);
static Textures_tick_t Textures_tick = (Textures_tick_t) 0x531c4;

// RakNet::RakPeer

typedef bool (*RakNet_RakPeer_IsBanned_t)(unsigned char *rakpeer, const char *ip);
static RakNet_RakPeer_IsBanned_t RakNet_RakPeer_IsBanned = (RakNet_RakPeer_IsBanned_t) 0xda3b4;

// RakNet::BitStream

typedef struct RakNet_BitStream *(*RakNet_BitStream_constructor_with_data_t)(struct RakNet_BitStream *stream, unsigned char *data, uint32_t size, bool copyData);
static RakNet_BitStream_constructor_with_data_t RakNet_BitStream_constructor_with_data = (RakNet_BitStream_constructor_with_data_t) 0xd3c30;

// RakNet::SystemAddress

typedef char *(*RakNet_SystemAddress_ToString_t)(struct RakNet_SystemAddress *system_address, bool print_delimiter, char delimiter);
static RakNet_SystemAddress_ToString_t RakNet_SystemAddress_ToString = (RakNet_SystemAddress_ToString_t) 0xd6198;

// ServerSideNetworkHandler

typedef void (*ServerSideNetworkHandler_displayGameMessage_t)(unsigned char *server_side_network_handler, std::string const& message);
static ServerSideNetworkHandler_displayGameMessage_t ServerSideNetworkHandler_displayGameMessage = (ServerSideNetworkHandler_displayGameMessage_t) 0x750c4;

#endif

#pragma GCC diagnostic pop

#endif