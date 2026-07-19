#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Nian_Apocalypse : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t area_of_effect; // 0x580            
            source2sdk::client::ParticleIndex_t m_nfxIndex_roar; // 0x584            
            float fire_interval; // 0x588            
            float delay; // 0x58c            
            float target_range; // 0x590            
            uint8_t _pad0594[0x4]; // 0x594
            source2sdk::server::CountdownTimer m_ctTimer; // 0x598            
            float m_flTiming; // 0x5b0            
            uint8_t _pad05b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Nian_Apocalypse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Nian_Apocalypse) == 0x5b8);
    };
};
