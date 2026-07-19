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
        // Enumerator count: 14
        // Alignment: 8
        // Size: 0x8
        enum class AI_VolumetricEventTypeMask_t : std::uint64_t
        {
            // MEnumeratorIsNotAFlag
            eNone = 0x0,
            eCombat = 0x1,
            ePlayer = 0x2,
            eDanger = 0x4,
            eBulletImpact = 0x8,
            ePhysicsDanger = 0x10,
            eMoveAway = 0x20,
            ePlayerVehicle = 0x40,
            eGlassBreak = 0x80,
            ePhysicsObject = 0x100,
            eWarnFriends = 0x200,
            eGunfire = 0x400,
            eExplosion = 0x800,
            // MEnumeratorIsNotAFlag
            eAll = 0xffffffffffffffff,
        };
    };
};
