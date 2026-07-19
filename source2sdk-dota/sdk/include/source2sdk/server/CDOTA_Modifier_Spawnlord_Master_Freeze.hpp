#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Spawnlord_Master_Freeze : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t health_threshold_pct; // 0x1a58            
            bool m_bFreezeAttack; // 0x1a5c            
            uint8_t _pad1a5d[0x3]; // 0x1a5d
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a60            
            uint8_t _pad1a64[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Spawnlord_Master_Freeze because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Spawnlord_Master_Freeze) == 0x1a68);
    };
};
