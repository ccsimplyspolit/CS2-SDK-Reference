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
        // Enumerator count: 15
        // Alignment: 1
        // Size: 0x1
        enum class AI_VolumetricEventType_t : std::uint8_t
        {
            eCombat = 0x0,
            ePlayer = 0x1,
            eDanger = 0x2,
            eBulletImpact = 0x3,
            ePhysicsDanger = 0x4,
            eMoveAway = 0x5,
            ePlayerVehicle = 0x6,
            eGlassBreak = 0x7,
            ePhysicsObject = 0x8,
            eWarnFriends = 0x9,
            eGunfire = 0xa,
            eExplosion = 0xb,
            // MPropertySuppressEnumerator
            eCount = 0xc,
            // MPropertySuppressEnumerator
            eFirst = 0x0,
            // MPropertySuppressEnumerator
            eInvalid = 0xff,
        };
    };
};
