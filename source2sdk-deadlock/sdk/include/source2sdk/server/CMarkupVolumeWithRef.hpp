#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CMarkupVolumeTagged.hpp"

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
        // Size: 0x7e8
        // Has VTable
        #pragma pack(push, 1)
        class CMarkupVolumeWithRef : public source2sdk::server::CMarkupVolumeTagged
        {
        public:
            uint8_t _pad07c0[0x8]; // 0x7c0
            bool m_bUseRef; // 0x7c8            
            uint8_t _pad07c9[0x3]; // 0x7c9
            Vector m_vRefPosEntitySpace; // 0x7cc            
            VectorWS m_vRefPosWorldSpace; // 0x7d8            
            float m_flRefDot; // 0x7e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMarkupVolumeWithRef because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMarkupVolumeWithRef) == 0x7e8);
    };
};
