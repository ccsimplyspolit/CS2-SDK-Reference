#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x5a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Shredder_TimberChain : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t chain_radius; // 0x580            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x584            
            Vector m_vProjectileVelocity; // 0x588            
            VectorWS m_vCasterStartingLocation; // 0x594            
            bool m_bRetract; // 0x5a0            
            uint8_t _pad05a1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Shredder_TimberChain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Shredder_TimberChain) == 0x5a8);
    };
};
