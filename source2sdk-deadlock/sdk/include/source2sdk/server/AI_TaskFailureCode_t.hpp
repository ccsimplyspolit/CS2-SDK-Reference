#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Enumerator count: 44
        // Alignment: 2
        // Size: 0x2
        enum class AI_TaskFailureCode_t : std::uint16_t
        {
            NO_TASK_FAILURE = 0x0,
            NO_MOVE_TACTIC_FAILURE = 0x0,
            FAIL_NO_TARGET = 0x1,
            FAIL_ITEM_NO_FIND = 0x2,
            FAIL_NO_HINT_NODE = 0x3,
            FAIL_SCHEDULE_NOT_FOUND = 0x4,
            FAIL_NO_ENEMY = 0x5,
            FAIL_NO_COVER = 0x6,
            FAIL_NO_SHOOT = 0x7,
            // MPropertySuppressEnumerator
            FAIL_FIRST_PATH_FAILURE = 0x8,
            FAIL_NO_ROUTE = 0x8,
            FAIL_NO_ROUTE_GOAL = 0x9,
            FAIL_NO_ROUTE_BLOCKED_WORLD = 0xa,
            FAIL_NO_ROUTE_BLOCKED_WORLD_START_SOLID = 0xb,
            FAIL_NO_ROUTE_BLOCKED_ENTITY = 0xc,
            FAIL_NO_ROUTE_BLOCKED_ENTITY_START_SOLID = 0xd,
            FAIL_NO_ROUTE_BLOCKED_NPC = 0xe,
            FAIL_NO_ROUTE_BLOCKED_NPC_START_SOLID = 0xf,
            FAIL_NO_ROUTE_BLOCKED_LOCAL_NAV = 0x10,
            FAIL_NO_ROUTE_ILLEGAL = 0x11,
            // MPropertySuppressEnumerator
            FAIL_LAST_PATH_FAILURE = 0x12,
            FAIL_MOVEMENT_DISABLED = 0x12,
            FAIL_HINT_ALREADY_RESERVED = 0x13,
            FAIL_NO_SOUND = 0x14,
            FAIL_NO_GOAL = 0x15,
            FAIL_NO_PLAYER = 0x16,
            FAIL_NO_BACKAWAY_POSITION = 0x17,
            FAIL_NO_REACHABLE_POSITION = 0x18,
            FAIL_BAD_POSITION = 0x19,
            FAIL_BAD_PATH_GOAL = 0x1a,
            FAIL_ITEM_TAKEN = 0x1b,
            FAIL_FROZEN = 0x1c,
            FAIL_ALREADY_AT_GOAL = 0x1d,
            FAIL_NO_ABILITY = 0x1e,
            FAIL_NO_COND_CAN_MOVE_THEN_USE_ABILITY = 0x1f,
            FAIL_SCRIPTED_COMMAND_CANCELED = 0x20,
            FAIL_SCRIPTED_COMMAND_FAILED = 0x21,
            FAIL_NO_NAV = 0x22,
            FAIL_NO_SQUAD_SLOT = 0x23,
            FAIL_NO_OWNER = 0x24,
            FAIL_NO_PHYSICS = 0x25,
            FAIL_BAD_HANDSHAKE = 0x26,
            FAIL_NO_MOVEMENT_GAIT = 0x27,
            // MPropertySuppressEnumerator
            NUM_FAIL_CODES = 0x28,
        };
    };
};
