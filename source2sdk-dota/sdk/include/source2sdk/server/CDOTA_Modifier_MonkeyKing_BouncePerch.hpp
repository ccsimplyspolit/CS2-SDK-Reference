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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_BouncePerch : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTree;
            char m_hTree[0x4]; // 0x1a58            
            bool m_bGroundToTree; // 0x1a5c            
            bool m_bTreeToGround; // 0x1a5d            
            bool m_bTreeToTree; // 0x1a5e            
            uint8_t _pad1a5f[0x1]; // 0x1a5f
            float perched_day_vision; // 0x1a60            
            float perched_night_vision; // 0x1a64            
            bool m_bAbilityIsStolen; // 0x1a68            
            uint8_t _pad1a69[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BouncePerch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_BouncePerch) == 0x1a70);
    };
};
