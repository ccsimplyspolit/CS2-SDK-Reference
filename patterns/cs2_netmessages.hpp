// CS2 network-message (protobuf) layouts + resolved function signatures.
//
// The structs below are the in-memory C++ layout of CS2's wire protobufs — the
// same messages defined in ../protobufs/*.proto, but as the concrete structs a
// runtime plugin casts onto. The function declarations at the bottom are the
// IDA-derived prototypes for the functions in patterns/cs2_patterns.json.
//
// Source: cspatterns.dev (structs / declarations / tutorials). Cross-referenced
// with ../schema/ and ../protobufs/. The function-declaration block is reference
// (IDA Hex-Rays output) — a few entries are intentionally verbatim and may need
// a trailing ';' before use.
#pragma once

#define NOMINMAX
#undef max
#include <Windows.h>
#include <stdint.h>
#include <limits>
#include <string>

template <typename T>
struct RepeatedPtrField_t
{
    struct Rep_t
    {
        int allocated_size;
        T* elements[(std::numeric_limits<int>::max() - 2 * sizeof(int)) / sizeof(void*)];
    };

    void* arena;
    int current_size;
    int total_size;
    Rep_t* rep;
};

struct PBMessage
{
    void* vtable;
    void* metadata;
};

enum ENetworkDisconnectionReason : uint32_t
{
    NETWORK_DISCONNECT_INVALID = 0,
    NETWORK_DISCONNECT_SHUTDOWN = 1,
    NETWORK_DISCONNECT_DISCONNECT_BY_USER = 2,
    NETWORK_DISCONNECT_DISCONNECT_BY_SERVER = 3,
    NETWORK_DISCONNECT_LOST = 4,
    NETWORK_DISCONNECT_OVERFLOW = 5,
    NETWORK_DISCONNECT_STEAM_BANNED = 6,
    NETWORK_DISCONNECT_STEAM_INUSE = 7,
    NETWORK_DISCONNECT_STEAM_TICKET = 8,
    NETWORK_DISCONNECT_STEAM_LOGON = 9,
    NETWORK_DISCONNECT_STEAM_AUTHCANCELLED = 10,
    NETWORK_DISCONNECT_STEAM_AUTHALREADYUSED = 11,
    NETWORK_DISCONNECT_STEAM_AUTHINVALID = 12,
    NETWORK_DISCONNECT_STEAM_VACBANSTATE = 13,
    NETWORK_DISCONNECT_STEAM_LOGGED_IN_ELSEWHERE = 14,
    NETWORK_DISCONNECT_STEAM_VAC_CHECK_TIMEDOUT = 15,
    NETWORK_DISCONNECT_STEAM_DROPPED = 16,
    NETWORK_DISCONNECT_STEAM_OWNERSHIP = 17,
    NETWORK_DISCONNECT_SERVERINFO_OVERFLOW = 18,
    NETWORK_DISCONNECT_TICKMSG_OVERFLOW = 19,
    NETWORK_DISCONNECT_STRINGTABLEMSG_OVERFLOW = 20,
    NETWORK_DISCONNECT_DELTAENTMSG_OVERFLOW = 21,
    NETWORK_DISCONNECT_TEMPENTMSG_OVERFLOW = 22,
    NETWORK_DISCONNECT_SOUNDSMSG_OVERFLOW = 23,
    NETWORK_DISCONNECT_SNAPSHOTOVERFLOW = 24,
    NETWORK_DISCONNECT_SNAPSHOTERROR = 25,
    NETWORK_DISCONNECT_RELIABLEOVERFLOW = 26,
    NETWORK_DISCONNECT_BADDELTATICK = 27,
    NETWORK_DISCONNECT_NOMORESPLITS = 28,
    NETWORK_DISCONNECT_TIMEDOUT = 29,
    NETWORK_DISCONNECT_DISCONNECTED = 30,
    NETWORK_DISCONNECT_LEAVINGSPLIT = 31,
    NETWORK_DISCONNECT_DIFFERENTCLASSTABLES = 32,
    NETWORK_DISCONNECT_BADRELAYPASSWORD = 33,
    NETWORK_DISCONNECT_BADSPECTATORPASSWORD = 34,
    NETWORK_DISCONNECT_HLTVRESTRICTED = 35,
    NETWORK_DISCONNECT_NOSPECTATORS = 36,
    NETWORK_DISCONNECT_HLTVUNAVAILABLE = 37,
    NETWORK_DISCONNECT_HLTVSTOP = 38,
    NETWORK_DISCONNECT_KICKED = 39,
    NETWORK_DISCONNECT_BANADDED = 40,
    NETWORK_DISCONNECT_KICKBANADDED = 41,
    NETWORK_DISCONNECT_HLTVDIRECT = 42,
    NETWORK_DISCONNECT_PURESERVER_CLIENTEXTRA = 43,
    NETWORK_DISCONNECT_PURESERVER_MISMATCH = 44,
    NETWORK_DISCONNECT_USERCMD = 45,
    NETWORK_DISCONNECT_REJECTED_BY_GAME = 46,
    NETWORK_DISCONNECT_MESSAGE_PARSE_ERROR = 47,
    NETWORK_DISCONNECT_INVALID_MESSAGE_ERROR = 48,
    NETWORK_DISCONNECT_BAD_SERVER_PASSWORD = 49,
    NETWORK_DISCONNECT_DIRECT_CONNECT_RESERVATION = 50,
    NETWORK_DISCONNECT_CONNECTION_FAILURE = 51,
    NETWORK_DISCONNECT_NO_PEER_GROUP_HANDLERS = 52,
    NETWORK_DISCONNECT_RECONNECTION = 53,
    NETWORK_DISCONNECT_LOOPSHUTDOWN = 54,
    NETWORK_DISCONNECT_LOOPDEACTIVATE = 55,
    NETWORK_DISCONNECT_HOST_ENDGAME = 56,
    NETWORK_DISCONNECT_LOOP_LEVELLOAD_ACTIVATE = 57,
    NETWORK_DISCONNECT_CREATE_SERVER_FAILED = 58,
    NETWORK_DISCONNECT_EXITING = 59,
    NETWORK_DISCONNECT_REQUEST_HOSTSTATE_IDLE = 60,
    NETWORK_DISCONNECT_REQUEST_HOSTSTATE_HLTVRELAY = 61,
    NETWORK_DISCONNECT_CLIENT_CONSISTENCY_FAIL = 62,
    NETWORK_DISCONNECT_CLIENT_UNABLE_TO_CRC_MAP = 63,
    NETWORK_DISCONNECT_CLIENT_NO_MAP = 64,
    NETWORK_DISCONNECT_CLIENT_DIFFERENT_MAP = 65,
    NETWORK_DISCONNECT_SERVER_REQUIRES_STEAM = 66,
    NETWORK_DISCONNECT_STEAM_DENY_MISC = 67,
    NETWORK_DISCONNECT_STEAM_DENY_BAD_ANTI_CHEAT = 68,
    NETWORK_DISCONNECT_SERVER_SHUTDOWN = 69,
    NETWORK_DISCONNECT_REPLAY_INCOMPATIBLE = 71,
    NETWORK_DISCONNECT_CONNECT_REQUEST_TIMEDOUT = 72,
    NETWORK_DISCONNECT_SERVER_INCOMPATIBLE = 73,
    NETWORK_DISCONNECT_LOCALPROBLEM_MANYRELAYS = 74,
    NETWORK_DISCONNECT_LOCALPROBLEM_HOSTEDSERVERPRIMARYRELAY = 75,
    NETWORK_DISCONNECT_LOCALPROBLEM_NETWORKCONFIG = 76,
    NETWORK_DISCONNECT_LOCALPROBLEM_OTHER = 77,
    NETWORK_DISCONNECT_REMOTE_TIMEOUT = 79,
    NETWORK_DISCONNECT_REMOTE_TIMEOUT_CONNECTING = 80,
    NETWORK_DISCONNECT_REMOTE_OTHER = 81,
    NETWORK_DISCONNECT_REMOTE_BADCRYPT = 82,
    NETWORK_DISCONNECT_REMOTE_CERTNOTTRUSTED = 83,
    NETWORK_DISCONNECT_UNUSUAL = 84,
    NETWORK_DISCONNECT_INTERNAL_ERROR = 85,
    NETWORK_DISCONNECT_REJECT_BADCHALLENGE = 128,
    NETWORK_DISCONNECT_REJECT_NOLOBBY = 129,
    NETWORK_DISCONNECT_REJECT_BACKGROUND_MAP = 130,
    NETWORK_DISCONNECT_REJECT_SINGLE_PLAYER = 131,
    NETWORK_DISCONNECT_REJECT_HIDDEN_GAME = 132,
    NETWORK_DISCONNECT_REJECT_LANRESTRICT = 133,
    NETWORK_DISCONNECT_REJECT_BADPASSWORD = 134,
    NETWORK_DISCONNECT_REJECT_SERVERFULL = 135,
    NETWORK_DISCONNECT_REJECT_INVALIDRESERVATION = 136,
    NETWORK_DISCONNECT_REJECT_FAILEDCHANNEL = 137,
    NETWORK_DISCONNECT_REJECT_CONNECT_FROM_LOBBY = 138,
    NETWORK_DISCONNECT_REJECT_RESERVED_FOR_LOBBY = 139,
    NETWORK_DISCONNECT_REJECT_INVALIDKEYLENGTH = 140,
    NETWORK_DISCONNECT_REJECT_OLDPROTOCOL = 141,
    NETWORK_DISCONNECT_REJECT_NEWPROTOCOL = 142,
    NETWORK_DISCONNECT_REJECT_INVALIDCONNECTION = 143,
    NETWORK_DISCONNECT_REJECT_INVALIDCERTLEN = 144,
    NETWORK_DISCONNECT_REJECT_INVALIDSTEAMCERTLEN = 145,
    NETWORK_DISCONNECT_REJECT_STEAM = 146,
    NETWORK_DISCONNECT_REJECT_SERVERAUTHDISABLED = 147,
    NETWORK_DISCONNECT_REJECT_SERVERCDKEYAUTHINVALID = 148,
    NETWORK_DISCONNECT_REJECT_BANNED = 149,
    NETWORK_DISCONNECT_KICKED_TEAMKILLING = 150,
    NETWORK_DISCONNECT_KICKED_TK_START = 151,
    NETWORK_DISCONNECT_KICKED_UNTRUSTEDACCOUNT = 152,
    NETWORK_DISCONNECT_KICKED_CONVICTEDACCOUNT = 153,
    NETWORK_DISCONNECT_KICKED_COMPETITIVECOOLDOWN = 154,
    NETWORK_DISCONNECT_KICKED_TEAMHURTING = 155,
    NETWORK_DISCONNECT_KICKED_HOSTAGEKILLING = 156,
    NETWORK_DISCONNECT_KICKED_VOTEDOFF = 157,
    NETWORK_DISCONNECT_KICKED_IDLE = 158,
    NETWORK_DISCONNECT_KICKED_SUICIDE = 159,
    NETWORK_DISCONNECT_KICKED_NOSTEAMLOGIN = 160,
    NETWORK_DISCONNECT_KICKED_NOSTEAMTICKET = 161,
    NETWORK_DISCONNECT_KICKED_INPUTAUTOMATION = 162,
    NETWORK_DISCONNECT_KICKED_VACNETABNORMALBEHAVIOR = 163,
    NETWORK_DISCONNECT_KICKED_INSECURECLIENT = 164
};

enum SignonState_t : uint32_t
{
    SIGNONSTATE_NONE = 0,
    SIGNONSTATE_CHALLENGE = 1,
    SIGNONSTATE_CONNECTED = 2,
    SIGNONSTATE_NEW = 3,
    SIGNONSTATE_PRESPAWN = 4,
    SIGNONSTATE_SPAWN = 5,
    SIGNONSTATE_FULL = 6,
    SIGNONSTATE_CHANGELEVEL = 7
};

enum NET_Messages : uint32_t
{
    net_NOP = 0,
    net_Disconnect_Legacy = 1,
    net_SplitScreenUser = 3,
    net_Tick = 4,
    net_StringCmd = 5,
    net_SetConVar = 6,
    net_SignonState = 7,
    net_SpawnGroup_Load = 8,
    net_SpawnGroup_ManifestUpdate = 9,
    net_SpawnGroup_SetCreationTick = 11,
    net_SpawnGroup_Unload = 12,
    net_SpawnGroup_LoadCompleted = 13,
    net_DebugOverlay = 15
};

enum SpawnGroupFlags_t : uint32_t
{
    SPAWN_GROUP_LOAD_ENTITIES_FROM_SAVE = 1,
    SPAWN_GROUP_DONT_SPAWN_ENTITIES = 2,
    SPAWN_GROUP_SYNCHRONOUS_SPAWN = 4,
    SPAWN_GROUP_IS_INITIAL_SPAWN_GROUP = 8,
    SPAWN_GROUP_CREATE_CLIENT_ONLY_ENTITIES = 16,
    SPAWN_GROUP_BLOCK_UNTIL_LOADED = 64,
    SPAWN_GROUP_LOAD_STREAMING_DATA = 128,
    SPAWN_GROUP_CREATE_NEW_SCENE_WORLD = 256
};

constexpr uint32_t CMSGVECTOR_BITS_X = 0x1;
constexpr uint32_t CMSGVECTOR_BITS_Y = 0x2;
constexpr uint32_t CMSGVECTOR_BITS_Z = 0x4;
constexpr uint32_t CMSGVECTOR_BITS_W = 0x8;

struct CMsgVector : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    float x;
    float y;
    float z;
    float w;
};

constexpr uint32_t CMSGVECTOR2D_BITS_X = 0x1;
constexpr uint32_t CMSGVECTOR2D_BITS_Y = 0x2;

struct CMsgVector2D : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    float x;
    float y;
};

constexpr uint32_t CMSGQANGLE_BITS_X = 0x1;
constexpr uint32_t CMSGQANGLE_BITS_Y = 0x2;
constexpr uint32_t CMSGQANGLE_BITS_Z = 0x4;

struct CMsgQAngle : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    float x;
    float y;
    float z;
};

constexpr uint32_t CMSGQUATERNION_BITS_X = 0x1;
constexpr uint32_t CMSGQUATERNION_BITS_Y = 0x2;
constexpr uint32_t CMSGQUATERNION_BITS_Z = 0x4;
constexpr uint32_t CMSGQUATERNION_BITS_W = 0x8;

struct CMsgQuaternion : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    float x;
    float y;
    float z;
    float w;
};

constexpr uint32_t CMSGTRANSFORM_BITS_POSITION = 0x1;
constexpr uint32_t CMSGTRANSFORM_BITS_ORIENTATION = 0x2;
constexpr uint32_t CMSGTRANSFORM_BITS_SCALE = 0x4;

struct CMsgTransform : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    CMsgVector* position;
    CMsgQuaternion* orientation;
    float scale;
};

constexpr uint32_t CMSGRGBA_BITS_R = 0x1;
constexpr uint32_t CMSGRGBA_BITS_G = 0x2;
constexpr uint32_t CMSGRGBA_BITS_B = 0x4;
constexpr uint32_t CMSGRGBA_BITS_A = 0x8;

struct CMsgRGBA : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    int32_t r;
    int32_t g;
    int32_t b;
    int32_t a;
};

constexpr uint32_t CMSGPLAYERINFO_BITS_NAME = 0x1;
constexpr uint32_t CMSGPLAYERINFO_BITS_XUID = 0x2;
constexpr uint32_t CMSGPLAYERINFO_BITS_STEAMID = 0x4;
constexpr uint32_t CMSGPLAYERINFO_BITS_USERID = 0x8;
constexpr uint32_t CMSGPLAYERINFO_BITS_FAKEPLAYER = 0x10;
constexpr uint32_t CMSGPLAYERINFO_BITS_ISHLTV = 0x20;

struct CMsgPlayerInfo : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    std::string* name;
    uint64_t xuid;
    uint64_t steamid;
    int32_t userid;
    bool fakeplayer;
    bool ishltv;
};

constexpr uint32_t CENTITYMSG_BITS_TARGET_ENTITY = 0x1;

struct CEntityMsg : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    uint32_t target_entity;
};


struct CMsg_CVars : PBMessage
{
    RepeatedPtrField_t<void> cvars;
    uint32_t cached_size;
};

constexpr uint32_t CMSG_CVARS_CVAR_BITS_NAME = 0x1;
constexpr uint32_t CMSG_CVARS_CVAR_BITS_VALUE = 0x2;

struct CMsg_CVars_CVar : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    std::string* name;
    std::string* value;
};


struct CNETMsg_NOP
{
    uint32_t has_bits;
    uint32_t cached_size;
};

constexpr uint32_t CNETMSG_SPLITSCREENUSER_BITS_SLOT = 0x1;

struct CNETMsg_SplitScreenUser : PBMessage
{
    int32_t slot;
};

constexpr uint32_t CNETMSG_TICK_BITS_EXPECTED_LONG_TICK_REASON = 0x1;
constexpr uint32_t CNETMSG_TICK_BITS_TICK = 0x2;
constexpr uint32_t CNETMSG_TICK_BITS_HOST_COMPUTATIONTIME = 0x4;
constexpr uint32_t CNETMSG_TICK_BITS_HOST_COMPUTATIONTIME_STD_DEVIATION = 0x8;
constexpr uint32_t CNETMSG_TICK_BITS_LEGACY_HOST_LOSS = 0x10;
constexpr uint32_t CNETMSG_TICK_BITS_HOST_UNFILTERED_FRAMETIME = 0x20;
constexpr uint32_t CNETMSG_TICK_BITS_HLTV_REPLAY_FLAGS = 0x40;
constexpr uint32_t CNETMSG_TICK_BITS_EXPECTED_LONG_TICK = 0x80;
constexpr uint32_t CNETMSG_TICK_BITS_HOST_FRAME_DROPPED_PCT_X10 = 0x100;
constexpr uint32_t CNETMSG_TICK_BITS_HOST_FRAME_IRREGULAR_ARRIVAL_PCT_X10 = 0x200;

struct CNETMsg_Tick : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    std::string* expected_long_tick_reason;
    uint32_t tick;
    uint32_t host_computationtime;
    uint32_t host_computationtime_std_deviation;
    uint32_t legacy_host_loss;
    uint32_t host_unfiltered_frametime;
    uint32_t hltv_replay_flags;
    uint32_t expected_long_tick;
    uint32_t host_frame_dropped_pct_x10;
    uint32_t host_frame_irregular_arrival_pct_x10;
};

constexpr uint32_t CNETMSG_STRINGCMD_BITS_COMMAND = 0x1;
constexpr uint32_t CNETMSG_STRINGCMD_BITS_PREDICTION_SYNC = 0x2;

struct CNETMsg_StringCmd : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    std::string* command;
    uint32_t prediction_sync;
};

constexpr uint32_t CNETMSG_SETCONVAR_BITS_CONVARS = 0x1;

struct CNETMsg_SetConVar : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    CMsg_CVars* convars;
};

constexpr uint32_t CNETMSG_SIGNONSTATE_BITS_MAP_NAME = 0x1;
constexpr uint32_t CNETMSG_SIGNONSTATE_BITS_ADDONS = 0x2;
constexpr uint32_t CNETMSG_SIGNONSTATE_BITS_SIGNON_STATE = 0x4;
constexpr uint32_t CNETMSG_SIGNONSTATE_BITS_SPAWN_COUNT = 0x8;
constexpr uint32_t CNETMSG_SIGNONSTATE_BITS_NUM_SERVER_PLAYERS = 0x10;

struct CNETMsg_SignonState : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    RepeatedPtrField_t<std::string> players_networkids;
    std::string* map_name;
    std::string* addons;
    int32_t signon_state;
    uint32_t spawn_count;
    uint32_t num_server_players;
};

constexpr uint32_t CSVCMSG_GAMEEVENT_BITS_EVENT_NAME = 0x1;
constexpr uint32_t CSVCMSG_GAMEEVENT_BITS_EVENTID = 0x2;

struct CSVCMsg_GameEvent : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    RepeatedPtrField_t<void> keys;
    std::string* event_name;
    int32_t eventid;
};

constexpr uint32_t CSVCMSG_GAMEEVENT_KEY_T_BITS_VAL_STRING = 0x1;
constexpr uint32_t CSVCMSG_GAMEEVENT_KEY_T_BITS_TYPE = 0x2;
constexpr uint32_t CSVCMSG_GAMEEVENT_KEY_T_BITS_VAL_FLOAT = 0x4;
constexpr uint32_t CSVCMSG_GAMEEVENT_KEY_T_BITS_VAL_LONG = 0x8;
constexpr uint32_t CSVCMSG_GAMEEVENT_KEY_T_BITS_VAL_SHORT = 0x10;
constexpr uint32_t CSVCMSG_GAMEEVENT_KEY_T_BITS_VAL_BYTE = 0x20;
constexpr uint32_t CSVCMSG_GAMEEVENT_KEY_T_BITS_VAL_BOOL = 0x40;
constexpr uint32_t CSVCMSG_GAMEEVENT_KEY_T_BITS_VAL_UINT64 = 0x80;

struct CSVCMsg_GameEvent_key_t : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    std::string* val_string;
    int32_t type;
    float val_float;
    int32_t val_long;
    int32_t val_short;
    int32_t val_byte;
    bool val_bool;
    uint64_t val_uint64;
};


struct CSVCMsgList_GameEvents : PBMessage
{
    RepeatedPtrField_t<void> events;
    uint32_t cached_size;
};

constexpr uint32_t CSVCMSGLIST_GAMEEVENTS_EVENT_T_BITS_EVENT = 0x1;
constexpr uint32_t CSVCMSGLIST_GAMEEVENTS_EVENT_T_BITS_TICK = 0x2;

struct CSVCMsgList_GameEvents_event_t : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    CSVCMsg_GameEvent* event;
    int32_t tick;
};

constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_WORLDNAME = 0x1;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_ENTITYLUMPNAME = 0x2;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_ENTITYFILTERNAME = 0x4;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_SPAWNGROUPMANIFEST = 0x8;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_LOCALNAMEFIXUP = 0x10;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_PARENTNAMEFIXUP = 0x20;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_SAVEGAMEFILENAME = 0x40;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_WORLDGROUPNAME = 0x80;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_WORLD_OFFSET_POS = 0x100;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_WORLD_OFFSET_ANGLE = 0x200;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_SPAWNGROUPHANDLE = 0x400;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_SPAWNGROUPOWNERHANDLE = 0x800;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_FLAGS = 0x1000;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_TICKCOUNT = 0x2000;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_MANIFESTLOADPRIORITY = 0x4000;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_WORLDGROUPID = 0x8000;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_MANIFESTINCOMPLETE = 0x10000;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_LEVELTRANSITION = 0x20000;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_CREATIONSEQUENCE = 0x40000;
constexpr uint32_t CNETMSG_SPAWNGROUP_LOAD_BITS_SPAWNGROUPPARENTHANDLE = 0x80000;

struct CNETMsg_SpawnGroup_Load : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    std::string* worldname;
    std::string* entitylumpname;
    std::string* entityfiltername;
    std::string* spawngroupmanifest;
    std::string* localnamefixup;
    std::string* parentnamefixup;
    std::string* savegamefilename;
    std::string* worldgroupname;
    CMsgVector* world_offset_pos;
    CMsgQAngle* world_offset_angle;
    uint32_t spawngrouphandle;
    uint32_t spawngroupownerhandle;
    uint32_t flags;
    int32_t tickcount;
    int32_t manifestloadpriority;
    uint32_t worldgroupid;
    bool manifestincomplete;
    bool leveltransition;
    uint32_t creationsequence;
    uint32_t spawngroupparenthandle;
};

constexpr uint32_t CNETMSG_SPAWNGROUP_MANIFESTUPDATE_BITS_SPAWNGROUPMANIFEST = 0x1;
constexpr uint32_t CNETMSG_SPAWNGROUP_MANIFESTUPDATE_BITS_SPAWNGROUPHANDLE = 0x2;
constexpr uint32_t CNETMSG_SPAWNGROUP_MANIFESTUPDATE_BITS_MANIFESTINCOMPLETE = 0x4;

struct CNETMsg_SpawnGroup_ManifestUpdate : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    std::string* spawngroupmanifest;
    uint32_t spawngrouphandle;
    bool manifestincomplete;
};

constexpr uint32_t CNETMSG_SPAWNGROUP_SETCREATIONTICK_BITS_SPAWNGROUPHANDLE = 0x1;
constexpr uint32_t CNETMSG_SPAWNGROUP_SETCREATIONTICK_BITS_TICKCOUNT = 0x2;
constexpr uint32_t CNETMSG_SPAWNGROUP_SETCREATIONTICK_BITS_CREATIONSEQUENCE = 0x4;

struct CNETMsg_SpawnGroup_SetCreationTick : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    uint32_t spawngrouphandle;
    int32_t tickcount;
    uint32_t creationsequence;
};

constexpr uint32_t CNETMSG_SPAWNGROUP_UNLOAD_BITS_SPAWNGROUPHANDLE = 0x1;
constexpr uint32_t CNETMSG_SPAWNGROUP_UNLOAD_BITS_FLAGS = 0x2;
constexpr uint32_t CNETMSG_SPAWNGROUP_UNLOAD_BITS_TICKCOUNT = 0x4;

struct CNETMsg_SpawnGroup_Unload : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    uint32_t spawngrouphandle;
    uint32_t flags;
    int32_t tickcount;
};

constexpr uint32_t CNETMSG_SPAWNGROUP_LOADCOMPLETED_BITS_SPAWNGROUPHANDLE = 0x1;

struct CNETMsg_SpawnGroup_LoadCompleted : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    uint32_t spawngrouphandle;
};

constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_HOSTNAME = 0x1;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_SAVEGAMENAME = 0x2;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_S1_MAPNAME = 0x4;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_GAMEMODE = 0x8;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_SERVER_IP_ADDRESS = 0x10;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_DATA = 0x20;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_PREVIOUSLEVEL = 0x40;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_LANDMARKNAME = 0x80;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_IS_MULTIPLAYER = 0x100;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_IS_LOADSAVEGAME = 0x200;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_IS_BACKGROUND_MAP = 0x400;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_IS_HEADLESS = 0x800;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_MIN_CLIENT_LIMIT = 0x1000;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_MAX_CLIENT_LIMIT = 0x2000;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_MAX_CLIENTS = 0x4000;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_TICK_INTERVAL = 0x8000;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_IS_LOCALONLY = 0x10000;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_NO_STEAM_SERVER = 0x20000;
constexpr uint32_t CSVCMSG_GAMESESSIONCONFIGURATION_BITS_IS_TRANSITION = 0x40000;

struct CSVCMsg_GameSessionConfiguration : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    std::string* hostname;
    std::string* savegamename;
    std::string* s1_mapname;
    std::string* gamemode;
    std::string* server_ip_address;
    std::string* data;
    std::string* previouslevel;
    std::string* landmarkname;
    bool is_multiplayer;
    bool is_loadsavegame;
    bool is_background_map;
    bool is_headless;
    uint32_t min_client_limit;
    uint32_t max_client_limit;
    uint32_t max_clients;
    uint32_t tick_interval;
    bool is_localonly;
    bool no_steam_server;
    bool is_transition;
};

constexpr uint32_t CNETMSG_DEBUGOVERLAY_BITS_ETYPE = 0x1;

struct CNETMsg_DebugOverlay : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    RepeatedPtrField_t<CMsgVector> vectors;
    RepeatedPtrField_t<CMsgRGBA> colors;
    RepeatedPtrField_t<float> dimensions;
    RepeatedPtrField_t<float> times;
    RepeatedPtrField_t<bool> bools;
    RepeatedPtrField_t<uint64_t> uint64s;
    RepeatedPtrField_t<std::string> strings;
    int32_t etype;
};

constexpr uint32_t CINBUTTONSTATEPB_BITS_BUTTONSTATE1 = 0x1;
constexpr uint32_t CINBUTTONSTATEPB_BITS_BUTTONSTATE2 = 0x2;
constexpr uint32_t CINBUTTONSTATEPB_BITS_BUTTONSTATE3 = 0x4;

struct CInButtonStatePB : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    uint64_t buttonstate1;
    uint64_t buttonstate2;
    uint64_t buttonstate3;
};

constexpr uint32_t CSUBTICKMOVESTEP_BITS_BUTTON = 0x1;
constexpr uint32_t CSUBTICKMOVESTEP_BITS_PRESSED = 0x2;
constexpr uint32_t CSUBTICKMOVESTEP_BITS_WHEN = 0x4;
constexpr uint32_t CSUBTICKMOVESTEP_BITS_ANALOG_FORWARD_DELTA = 0x8;
constexpr uint32_t CSUBTICKMOVESTEP_BITS_ANALOG_LEFT_DELTA = 0x10;
constexpr uint32_t CSUBTICKMOVESTEP_BITS_PITCH_DELTA = 0x20;
constexpr uint32_t CSUBTICKMOVESTEP_BITS_YAW_DELTA = 0x40;

struct CSubtickMoveStep : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    uint64_t button;
    bool pressed;
    float when;
    float analog_forward_delta;
    float analog_left_delta;
    float pitch_delta;
    float yaw_delta;
};

constexpr uint32_t CBASEUSERCMDEXECUTIONNOTES_BITS_IGNORED_REASON = 0x1;

struct CBaseUserCmdExecutionNotes : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    std::string* ignored_reason;
};

constexpr uint32_t CBASEUSERCMDPB_BITS_MOVE_CRC = 0x1;
constexpr uint32_t CBASEUSERCMDPB_BITS_BUTTONS_PB = 0x2;
constexpr uint32_t CBASEUSERCMDPB_BITS_VIEWANGLES = 0x4;
constexpr uint32_t CBASEUSERCMDPB_BITS_EXECUTION_NOTES = 0x8;
constexpr uint32_t CBASEUSERCMDPB_BITS_LEGACY_COMMAND_NUMBER = 0x10;
constexpr uint32_t CBASEUSERCMDPB_BITS_CLIENT_TICK = 0x20;
constexpr uint32_t CBASEUSERCMDPB_BITS_FORWARDMOVE = 0x40;
constexpr uint32_t CBASEUSERCMDPB_BITS_LEFTMOVE = 0x80;
constexpr uint32_t CBASEUSERCMDPB_BITS_UPMOVE = 0x100;
constexpr uint32_t CBASEUSERCMDPB_BITS_IMPULSE = 0x200;
constexpr uint32_t CBASEUSERCMDPB_BITS_WEAPONSELECT = 0x400;
constexpr uint32_t CBASEUSERCMDPB_BITS_RANDOM_SEED = 0x800;
constexpr uint32_t CBASEUSERCMDPB_BITS_MOUSEDX = 0x1000;
constexpr uint32_t CBASEUSERCMDPB_BITS_MOUSEDY = 0x2000;
constexpr uint32_t CBASEUSERCMDPB_BITS_PREDICTION_OFFSET_TICKS_X256 = 0x4000;
constexpr uint32_t CBASEUSERCMDPB_BITS_CONSUMED_SERVER_ANGLE_CHANGES = 0x8000;
constexpr uint32_t CBASEUSERCMDPB_BITS_CMD_FLAGS = 0x10000;
constexpr uint32_t CBASEUSERCMDPB_BITS_PAWN_ENTITY_HANDLE = 0x20000;

struct CBaseUserCmdPB : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    RepeatedPtrField_t<CSubtickMoveStep> subtick_moves;
    std::string* move_crc;
    CInButtonStatePB* buttons_pb;
    CMsgQAngle* viewangles;
    CBaseUserCmdExecutionNotes* execution_notes;
    int32_t legacy_command_number;
    int32_t client_tick;
    float forwardmove;
    float leftmove;
    float upmove;
    int32_t impulse;
    int32_t weaponselect;
    int32_t random_seed;
    int32_t mousedx;
    int32_t mousedy;
    uint32_t prediction_offset_ticks_x256;
    uint32_t consumed_server_angle_changes;
    int32_t cmd_flags;
    uint32_t pawn_entity_handle;
};

constexpr uint32_t CUSERCMDBASEPB_BITS_BASE = 0x1;

struct CUserCmdBasePB : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    CBaseUserCmdPB* base;
};

constexpr uint32_t CSGOINTERPOLATIONINFOPB_BITS_FRAC = 0x1;
constexpr uint32_t CSGOINTERPOLATIONINFOPB_BITS_SRC_TICK = 0x2;
constexpr uint32_t CSGOINTERPOLATIONINFOPB_BITS_DST_TICK = 0x4;

struct CSGOInterpolationInfoPB : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    float frac;
    int32_t src_tick;
    int32_t dst_tick;
};

constexpr uint32_t CSGOINTERPOLATIONINFOPB_CL_BITS_FRAC = 0x1;

struct CSGOInterpolationInfoPB_CL : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    float frac;
};

constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_VIEW_ANGLES = 0x1;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_CL_INTERP = 0x2;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_SV_INTERP0 = 0x4;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_SV_INTERP1 = 0x8;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_PLAYER_INTERP = 0x10;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_SHOOT_POSITION = 0x20;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_TARGET_HEAD_POS_CHECK = 0x40;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_TARGET_ABS_POS_CHECK = 0x80;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_TARGET_ABS_ANG_CHECK = 0x100;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_RENDER_TICK_COUNT = 0x200;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_RENDER_TICK_FRACTION = 0x400;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_PLAYER_TICK_COUNT = 0x800;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_PLAYER_TICK_FRACTION = 0x1000;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_FRAME_NUMBER = 0x2000;
constexpr uint32_t CSGOINPUTHISTORYENTRYPB_BITS_TARGET_ENT_INDEX = 0x4000;

struct CSGOInputHistoryEntryPB : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    CMsgQAngle* view_angles;
    CSGOInterpolationInfoPB_CL* cl_interp;
    CSGOInterpolationInfoPB* sv_interp0;
    CSGOInterpolationInfoPB* sv_interp1;
    CSGOInterpolationInfoPB* player_interp;
    CMsgVector* shoot_position;
    CMsgVector* target_head_pos_check;
    CMsgVector* target_abs_pos_check;
    CMsgQAngle* target_abs_ang_check;
    int32_t render_tick_count;
    float render_tick_fraction;
    int32_t player_tick_count;
    float player_tick_fraction;
    int32_t frame_number;
    int32_t target_ent_index;
};

constexpr uint32_t CSGOUSERCMDPB_BITS_BASE = 0x1;
constexpr uint32_t CSGOUSERCMDPB_BITS_LEFT_HAND_DESIRED = 0x2;
constexpr uint32_t CSGOUSERCMDPB_BITS_IS_PREDICTING_BODY_SHOT_FX = 0x4;
constexpr uint32_t CSGOUSERCMDPB_BITS_IS_PREDICTING_HEAD_SHOT_FX = 0x8;
constexpr uint32_t CSGOUSERCMDPB_BITS_IS_PREDICTING_KILL_RAGDOLLS = 0x10;
constexpr uint32_t CSGOUSERCMDPB_BITS_ATTACK1_START_HISTORY_INDEX = 0x20;
constexpr uint32_t CSGOUSERCMDPB_BITS_ATTACK2_START_HISTORY_INDEX = 0x40;

struct CSGOUserCmdPB : PBMessage
{
    uint32_t has_bits;
    uint32_t cached_size;
    RepeatedPtrField_t<CSGOInputHistoryEntryPB> input_history;
    CBaseUserCmdPB* base;
    bool left_hand_desired;
    bool is_predicting_body_shot_fx;
    bool is_predicting_head_shot_fx;
    bool is_predicting_kill_ragdolls;
    int32_t attack1_start_history_index;
    int32_t attack2_start_history_index;
};


// ============================================================================
// Resolved function prototypes (IDA Hex-Rays). Reference only — see
// patterns/cs2_patterns.json for the byte signatures that locate each one.
// ============================================================================
#if 0

// GameOverlayRenderer64.dll (steam)
__int64 __fastcall Present(__int64 a1, __int64 a2, __int64 a3);

// client.dll
double __fastcall CreateMove(__int64 a1, unsigned int a2, __int64 a3);
void __fastcall OverrideView(__int64 a1, __int64 a2);
__int64 __fastcall DrawScopeOverlay(__int64 a1, __int64 a2);
void __fastcall DrawLegs(__int64* a1, __int64* a2, __int64 a3, __int64 a4, __int64 a5);
__int64 __fastcall ValidateInput(__int64 a1);
__int64* __fastcall GetViewAngles(__int64 a1, int a2);
void __fastcall SetViewAngles(__int64 a1, int a2, __int64* a3);
__int64 __fastcall DrawSmokeVertex(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6);
__int64 GetChatObject();
__int64 SendChatMessage(__int64 a1, unsigned int a2, __int64 a3, ...);
__int64 RegenerateWeaponSkins();
__int64 __fastcall LevelInit(__int64 a1, __int64 a2);
__int64 LevelShutdown();
void __fastcall FlashOverlay(__int64 a1, int a2, __int64* a3, __int64 a4, __m128* a5);
bool __fastcall TraceShape(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, _BYTE* a5, __int64 a6);
__int64 __fastcall ChangeModel(__int64 a1, __int64 a2);
__int64 __fastcall FrameStageNotify(__int64 a1, int a2);
__int64 __fastcall OnAddEntity(__int64 a1, __int64 a2, int a3);
__int64 __fastcall OnRemoveEntity(__int64 a1, _QWORD* a2, int a3);
void* __fastcall UpdateGlobalVars(__int64 a1, void* a2);
void __fastcall ForceButtonsDown(_QWORD* a1, __int64 a2);
bool __fastcall DrawCrosshair(_QWORD* a1);
void __fastcall UpdatePostProcessing(__int64 a1, _BYTE* a2);
__int64 __fastcall UpdateSkybox(__int64 a1);
void __fastcall CalcViewModel(__int64 a1, float* a2, float* a3);
char __fastcall EquipItemInLoadout(_QWORD* a1, unsigned int a2, int a3, unsigned __int64 a4);
__int64 __fastcall ComputeRandomSeed(__int64 a1, __int64 a2, int a3);
unsigned __int64* __fastcall SetTypeKV3(unsigned __int64* a1, unsigned __int8 a2, unsigned __int8 a3);
void __fastcall DrawTeamIntro(__int64 a1, __int64 a2, char* a3);
void __fastcall ShowMessageBox(__int64 a1, const char* a2, const char* a3, char a4, char a5, const char* a6, const char* a7, const char* a8, int a9, __int64 a10);
char __fastcall SetPlayerReady(__int64 a1, __int64 a2);
__int64 __fastcall CreateParticleEffect(int a1, int a2, int a3, __int64 a4, int a5);
bool __fastcall UnknownParticleFunction(__int64 a1, int a2, unsigned int a3, __int64 a4);
__int64 __fastcall CacheParticleEffect(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int64 a7, int a8);
__int64 GetParticleManager();
void __fastcall PopupEventHandle(__int64 a1, __int64 a2, __int64 (__fastcall*** a3)(_QWORD), float a4);
__int64 __fastcall SetMeshGroupMask(__int64 a1, _QWORD* a2);
__int64 __fastcall InitTraceData(__int64 a1);
__int64 __fastcall InitTraceInfo(__int64 a1);
__int64 __fastcall InitFilter(__int64 a1, _DWORD* a2, __int64 a3, char a4, char a5);
__int64 __fastcall CreateTrace(int* a1, __int64 a2, int a3, __int64 a4, int a5, char a6);
__int64 __fastcall GetTraceInfo(__int64 a1, __int64 a2, float a3, unsigned __int64* a4);
char __fastcall HandleBulletPenetration(__int64 a1, float* a2, __int64 a3, int a4, __int64 a5);
__int64 __fastcall GetEntityByIndex(__int64 a1, int a2);
__int64 __fastcall GetLocalPawn(int a1);
__int64 __fastcall GetLocalController(int a1);
char __fastcall ReportHit(_QWORD* a1);
_BYTE* __fastcall RenderDecals(__int64 a1, __int64** a2, char a3, char a4);
__int64 __fastcall SetupMapInfo(__int64 a1, __int64 a2);
__m128 __fastcall GetSpread(__int64 a1);
double __fastcall GetInaccuracy(float* a1, float* a2, float* a3);
void MatchFoundHandler();
void __fastcall PanoramaEvent(__int64 a1, __int64 a2, __int64 (__fastcall*** a3)(_QWORD), float a4);
__int64 __fastcall FindHudElement(const char* a1);
__int64 __fastcall EmitPanoramaSound(int a1, _OWORD* a2);
char IsDemoOrHltv();
__int64 GetMapBSPName();
void* __fastcall GetPlayerModel(__int64 a1, __int64 a2);
void* GetGameModeName();
__int64 GetMapName();
void* __fastcall GetServerName(__int64 a1);
char IsLocalPlayerWatchingOwnDemo();
__int64 IsOverwatch();
unsigned __int64 __fastcall SubmitCommendation(__int64 a1, __int64 a2, const char* a3);
unsigned __int64 __fastcall SubmitPlayerReport(__int64 a1, __int64 a2, const char* a3);
bool ShouldShowHudElements();
const char* __fastcall GetPlayerTeamName(__int64 a1, __int64 a2);
__int64 __fastcall IsLatched(__int64 a1);
unsigned __int8 __fastcall DrawOverHead(__int64 a1, unsigned int a2);
void __fastcall CalculateWorldSpaceBones(__int64 a1, unsigned int a2);
__int64 __fastcall CreateNewSubtickMoveStep(__int64 a1);
__int64 Shutdown();
__int64 __fastcall GetSOCache(__int64 a1, int* a2, __int64 a3, __int64 a4);
unsigned __int64 __fastcall SetAttribute(__m128i* a1, unsigned int a2, __m128i* a3);
char HasOngoingMatch();
void ActionReconnectToOngoingMatch();
void __fastcall ActionAbandonOngoingMatch(__int64 a1, __int64 a2, __int64 a3);
void __fastcall ActionMatchmaking(__int64 a1, const char* a2, __int64* a3, const char* a4, const char* a5);
__int64 GetCooldownSecondsRemaining();
const char* GetCooldownType();
bool CooldownIsPermanent();
const char* GetCooldownReason();
__int64 __fastcall ActionAcknowledgePenalty();
__int64 ShowFairPlayGuidelinesForCooldown();
__int64 __fastcall GetTournamentTeamCount(__int64 a1, __int64 a2);
char* __fastcall GetTournamentTeamNameByIndex(__int64 a1, __int64 a2, int a3);
char* __fastcall GetTournamentTeamTagByIndex(__int64 a1, __int64 a2, int a3);
char* __fastcall GetTournamentTeamFlagByIndex(__int64 a1, __int64 a2, int a3);
char* __fastcall GetTournamentTeamNameByID(__int64 a1, __int64 a2, int a3);
char* __fastcall GetTournamentTeamTagByID(__int64 a1, __int64 a2, int a3);
char* __fastcall GetTournamentTeamFlagByID(__int64 a1, __int64 a2, int a3);
__int64 __fastcall GetTournamentStageCount(__int64 a1, __int64 a2);
char* __fastcall GetTournamentStageNameByIndex(__int64 a1, __int64 a2, int a3);
char* GetDirectChallengeCode();
char* __fastcall GetDirectChallengeCodeForClan(__int64 a1, unsigned int a2);
char* GenerateDirectChallengeCode();
char* __fastcall ValidateDirectChallengeCode(__int64 a1, _BYTE* a2, __int64 a3);
char* __fastcall GetRotatingOfficialMapGroupCurrentState(__int64 a1, __int64 a2);
void __fastcall GetCurrentDisplayMode(__int64 a1, __int64* a2);
void __fastcall GetGraphicsDriverInfo(__int64 a1, __int64* a2);
void __fastcall GetSettingInfo(__int64 a1, int* a2);
__int64 __fastcall SetSettingString(__int64 a1, const char* a2, const char* a3);
__int64* GetSettingString();
void CreateSession();
char __fastcall StartMatchmaking(_QWORD* a1, const char* a2, const char* a3, const char* a4, const char* a5);
__int64 CloseSession();
bool IsSessionActive();
void __fastcall UpdateSessionSettings(__int64 a1, KeyValues** a2);
_QWORD* __fastcall GetSessionSettings(__int64 a1, _QWORD* a2);
__int64 __fastcall LaunchTrainingMap();
void LaunchWarmupMap();
__int64 __fastcall GetMapWaitTimeInSeconds(__int64 a1, __int64 a2, __int64 a3);
__int64 __fastcall GetPlayersInQueueForMap(__int64 a1, __int64 a2, __int64 a3);
bool __fastcall IsPartyMember(__int64 a1, __int64 a2);
void __fastcall KickPlayer(__int64 a1, const char* a2);
__int64 __fastcall StopMatchmaking(__int64 a1);
__int64 __fastcall GetTimeSpentMatchmaking(__int64 a1);
char* __fastcall GetMatchmakingStatusString(__int64 a1, __int64 a2, __int64 a3);
unsigned __int64 GetHostSteamID();
__int64 GetConfirmedMatchPlayerCount();
KeyValues** __fastcall GetReachableDatacenters(__int64 a1, KeyValues** a2);
__int64 __fastcall ChangeTeammateColor(__int64 a1, __int64 a2, __int64 a3);

// materialsystem2.dll
_QWORD* __fastcall CreateMaterial(__int64 a1, _QWORD* a2, __int64 a3, int a4, int a5, unsigned __int8 a6);

// soundsystem.dll
void __fastcall PlayVSND(const char* a1);

// scenesystem.dll
_UNKNOWN** __fastcall CAnimatableSceneObjectDescRender(__int64 a1, __int64 a2, __int64* a3, int a4, __int64 a5, __int64 a6, __int64 a7);
__int64 __fastcall DrawLightScene(__int64 a1, __int64 a2);
__int64 __fastcall DrawAggregateSceneObjectArray(__int64 a1, __int64 a2, __int64* a3);
void __fastcall DrawAggregateSceneObject(__int64 a1, int a2, __int64 a3, int a4, int a5, __int64 a6, __int64 a7);
void __fastcall SkyboxDrawArray(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, __int64 a7);
__int64 __fastcall GeneratePrimitives(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
void __fastcall UpdateLightObject(__int64 a1, __int64 a2, __int64 a3);
void __fastcall ToneMapUpdate(__int64 a1);

// engine2.dll
float __fastcall GetAspectRatio(__int64 a1, int a2, int a3);
bool IsInGame();
char IsConnected();
void __fastcall RunCommand(__int64 a1, unsigned int a2, const char* a3, char a4, __int64 a5, __int64 a6);
const char* GetLevelName();
const char* GetLevelNameShort();
void __fastcall Connect(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5, char a6);

// tier0.dll
bool __fastcall LoadKV3(struct KeyValues3* a1, struct CUtlString* a2, const char* a3, const struct KV3ID_t* a4, const char* a5, unsigned int a6);

#endif
