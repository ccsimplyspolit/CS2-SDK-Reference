#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Creature_Fire_Breath : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t speed; // 0x580            
            std::int32_t projectile_count; // 0x584            
            float rotation_angle; // 0x588            
            float damage; // 0x58c            
            float radius; // 0x590            
            uint8_t _pad0594[0x4]; // 0x594
            source2sdk::server::CountdownTimer ctTimer; // 0x598            
            Vector m_vecStartRot; // 0x5b0            
            Vector m_vecEndRot; // 0x5bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Creature_Fire_Breath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Creature_Fire_Breath) == 0x5c8);
    };
};
