#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xd8
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_CloakingDevice_Active_Ambush : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::client::ParticleIndex_t m_nAmbushParticle; // 0xd0            
            uint8_t _pad00d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_CloakingDevice_Active_Ambush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_CloakingDevice_Active_Ambush) == 0xd8);
    };
};
