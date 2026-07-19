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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rattletrap_Cog : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bEnabled; // 0x1a58            
            bool m_bPassThrough; // 0x1a59            
            uint8_t _pad1a5a[0x2]; // 0x1a5a
            std::int32_t push_length; // 0x1a5c            
            float push_duration; // 0x1a60            
            std::int32_t radius; // 0x1a64            
            std::int32_t cogs_pullin; // 0x1a68            
            std::int32_t attacks_to_destroy; // 0x1a6c            
            float m_flTriggerDistance; // 0x1a70            
            bool m_bCogsPullin; // 0x1a74            
            uint8_t _pad1a75[0x3]; // 0x1a75
            std::int32_t m_iCogIndex; // 0x1a78            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a7c            
            VectorWS vCenter; // 0x1a80            
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Cog because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rattletrap_Cog) == 0x1a90);
    };
};
