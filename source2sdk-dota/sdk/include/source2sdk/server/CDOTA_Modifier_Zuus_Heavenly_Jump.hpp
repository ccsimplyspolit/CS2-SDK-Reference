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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Zuus_Heavenly_Jump : public source2sdk::client::CDOTA_Buff
        {
        public:
            float hop_duration; // 0x1a58            
            std::int32_t hop_height; // 0x1a5c            
            std::int32_t hop_distance; // 0x1a60            
            std::int32_t search_radius; // 0x1a64            
            float m_flStartZ; // 0x1a68            
            float m_flCurTime; // 0x1a6c            
            float m_flJumpDuration; // 0x1a70            
            float m_flJumpHeight; // 0x1a74            
            Vector m_vTargetHorizontalDirection; // 0x1a78            
            uint8_t _pad1a84[0x4]; // 0x1a84
            // hUnitsToHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hUnitsToHit;
            char hUnitsToHit[0x18]; // 0x1a88            
            bool m_bLaunched; // 0x1aa0            
            uint8_t _pad1aa1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Zuus_Heavenly_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Zuus_Heavenly_Jump) == 0x1aa8);
    };
};
