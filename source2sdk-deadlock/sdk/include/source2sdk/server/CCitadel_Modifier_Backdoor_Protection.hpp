#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Backdoor_Protection : public source2sdk::server::CCitadelModifier
        {
        public:
            std::int32_t m_MaxHealth; // 0xd0            
            source2sdk::entity2::GameTime_t m_flLastAttackedTime; // 0xd4            
            source2sdk::client::ParticleIndex_t m_nActiveShieldEffect; // 0xd8            
            bool m_bIsActive; // 0xdc            
            uint8_t _pad00dd[0x3]; // 0xdd
            source2sdk::entity2::GameTime_t m_tActivationTime; // 0xe0            
            uint8_t _pad00e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Backdoor_Protection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Backdoor_Protection) == 0xe8);
    };
};
