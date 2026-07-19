#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        class CDOTA_Modifier_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            float knockback_distance; // 0x1a58            
            std::int32_t knockback_height; // 0x1a5c            
            float knockback_duration; // 0x1a60            
            Vector m_vHorizOffset; // 0x1a64            
            VectorWS m_vStartPosition; // 0x1a70            
            float m_flZDelta; // 0x1a7c            
            float m_fCurrentTimeHoriz; // 0x1a80            
            float m_fCurrentTimeVert; // 0x1a84            
            bool m_bShouldStun; // 0x1a88            
            bool m_bRespectLeash; // 0x1a89            
            bool m_bReversePolarity; // 0x1a8a            
            bool m_bRelativeToGround; // 0x1a8b            
            bool m_bDestroyTreesOnRoute; // 0x1a8c            
            bool m_bFindClearSpace; // 0x1a8d            
            uint8_t _pad1a8e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Knockback because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Knockback) == 0x1a90);
    };
};
