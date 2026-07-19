#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x720
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Aghanim_UrnUpheaval : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            VectorWS m_vPosition; // 0x6a8            
            float aoe; // 0x6b4            
            float slow_rate; // 0x6b8            
            float slow_rate_duration; // 0x6bc            
            float duration; // 0x6c0            
            float max_slow; // 0x6c4            
            float burn_damage; // 0x6c8            
            float m_flCurrentSlow; // 0x6cc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6d0            
            uint8_t _pad06d4[0x4]; // 0x6d4
            source2sdk::client::CountdownTimer m_SlowTimer; // 0x6d8            
            source2sdk::client::CountdownTimer m_timer; // 0x6f0            
            uint8_t _pad0708[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Aghanim_UrnUpheaval because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Aghanim_UrnUpheaval) == 0x720);
    };
};
