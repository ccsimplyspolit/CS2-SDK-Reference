#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lycan_SummonWolves_Spirited : public source2sdk::client::CDOTA_Modifier_Invisible
        {
        public:
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x1a68            
            std::int32_t wolf_index; // 0x1a6c            
            std::int32_t back_distance; // 0x1a70            
            std::int32_t side_distance; // 0x1a74            
            VectorWS m_vecDesiredPosition; // 0x1a78            
            std::int32_t m_iBackOffsetFactor; // 0x1a84            
            bool m_bRightWolf; // 0x1a88            
            uint8_t _pad1a89[0x3]; // 0x1a89
            float invis_level; // 0x1a8c            
            std::int32_t model_scale; // 0x1a90            
            bool m_bInitialized; // 0x1a94            
            bool m_bDeathFxTriggered; // 0x1a95            
            uint8_t _pad1a96[0x2]; // 0x1a96
            float death_fx_time; // 0x1a98            
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lycan_SummonWolves_Spirited because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lycan_SummonWolves_Spirited) == 0x1aa0);
    };
};
