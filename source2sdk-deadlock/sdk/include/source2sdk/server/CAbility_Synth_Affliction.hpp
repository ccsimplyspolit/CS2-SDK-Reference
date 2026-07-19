#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x1178
        // Has VTable
        #pragma pack(push, 1)
        class CAbility_Synth_Affliction : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x200]; // 0xf70
            source2sdk::client::ParticleIndex_t m_hAOEParticle; // 0x1170            
            uint8_t _pad1174[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_Affliction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Synth_Affliction) == 0x1178);
    };
};
