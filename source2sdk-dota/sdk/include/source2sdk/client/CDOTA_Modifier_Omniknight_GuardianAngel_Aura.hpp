#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Omniknight_GuardianAngel_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a58            
            bool is_global; // 0x1a5c            
            uint8_t _pad1a5d[0x3]; // 0x1a5d
            std::int32_t affects_buildings; // 0x1a60            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Omniknight_GuardianAngel_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Omniknight_GuardianAngel_Aura) == 0x1a68);
    };
};
