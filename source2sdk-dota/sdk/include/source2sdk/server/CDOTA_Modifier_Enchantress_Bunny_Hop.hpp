#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enchantress_Bunny_Hop : public source2sdk::client::CDOTA_Buff
        {
        public:
            float hop_duration; // 0x1a58            
            std::int32_t hop_height; // 0x1a5c            
            std::int32_t hop_distance; // 0x1a60            
            float m_flStartZ; // 0x1a64            
            float m_flCurTime; // 0x1a68            
            float m_flJumpDuration; // 0x1a6c            
            float m_flJumpHeight; // 0x1a70            
            Vector m_vTargetHorizontalDirection; // 0x1a74            
            // hUnitsToHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hUnitsToHit;
            char hUnitsToHit[0x18]; // 0x1a80            
            bool m_bLaunched; // 0x1a98            
            uint8_t _pad1a99[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_Bunny_Hop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Enchantress_Bunny_Hop) == 0x1aa0);
    };
};
