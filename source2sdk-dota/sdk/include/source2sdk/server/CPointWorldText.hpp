#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PointWorldTextJustifyHorizontal_t.hpp"
#include "source2sdk/client/PointWorldTextJustifyVertical_t.hpp"
#include "source2sdk/client/PointWorldTextReorientMode_t.hpp"
#include "source2sdk/server/CModelPointEntity.hpp"

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
        // Size: 0xa28
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointWorldText : public source2sdk::server::CModelPointEntity
        {
        public:
            char m_messageText[512]; // 0x778            
            // metadata: MNotSaved
            char m_FontName[64]; // 0x978            
            // metadata: MNotSaved
            char m_BackgroundMaterialName[64]; // 0x9b8            
            // metadata: MNotSaved
            bool m_bEnabled; // 0x9f8            
            // metadata: MNotSaved
            bool m_bFullbright; // 0x9f9            
            uint8_t _pad09fa[0x2]; // 0x9fa
            // metadata: MNotSaved
            float m_flWorldUnitsPerPx; // 0x9fc            
            // metadata: MNotSaved
            float m_flFontSize; // 0xa00            
            // metadata: MNotSaved
            float m_flDepthOffset; // 0xa04            
            // metadata: MNotSaved
            bool m_bDrawBackground; // 0xa08            
            uint8_t _pad0a09[0x3]; // 0xa09
            // metadata: MNotSaved
            float m_flBackgroundBorderWidth; // 0xa0c            
            // metadata: MNotSaved
            float m_flBackgroundBorderHeight; // 0xa10            
            // metadata: MNotSaved
            float m_flBackgroundWorldToUV; // 0xa14            
            // metadata: MNotSaved
            Color m_Color; // 0xa18            
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xa1c            
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xa20            
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextReorientMode_t m_nReorientMode; // 0xa24            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // CUtlSymbolLarge InputSetMessage; // 0x0
            // int32_t InputSetIntMessage; // 0x0
            // Color InputSetTextColor; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointWorldText because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointWorldText) == 0xa28);
    };
};
