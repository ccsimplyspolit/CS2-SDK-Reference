#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x13e0
        // Has VTable
        #pragma pack(push, 1)
        class CAbility_Synth_Affliction : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x200]; // 0x11d8
            source2sdk::client::ParticleIndex_t m_hAOEParticle; // 0x13d8            
            uint8_t _pad13dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_Affliction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Synth_Affliction) == 0x13e0);
    };
};
