#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_ModelPointEntity.hpp"
#include "source2sdk/client/PointWorldTextJustifyHorizontal_t.hpp"
#include "source2sdk/client/PointWorldTextJustifyVertical_t.hpp"
#include "source2sdk/client/PointWorldTextReorientMode_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd60
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PointWorldText : public source2sdk::client::C_ModelPointEntity
        {
        public:
            uint8_t _pad0a88[0x8]; // 0xa88
            // metadata: MNotSaved
            bool m_bForceRecreateNextUpdate; // 0xa90            
            uint8_t _pad0a91[0x17]; // 0xa91
            std::int32_t m_nTextWidthPx; // 0xaa8            
            std::int32_t m_nTextHeightPx; // 0xaac            
            char m_messageText[512]; // 0xab0            
            // metadata: MNotSaved
            char m_FontName[64]; // 0xcb0            
            // metadata: MNotSaved
            char m_BackgroundMaterialName[64]; // 0xcf0            
            // metadata: MNotSaved
            bool m_bEnabled; // 0xd30            
            // metadata: MNotSaved
            bool m_bFullbright; // 0xd31            
            uint8_t _pad0d32[0x2]; // 0xd32
            // metadata: MNotSaved
            float m_flWorldUnitsPerPx; // 0xd34            
            // metadata: MNotSaved
            float m_flFontSize; // 0xd38            
            // metadata: MNotSaved
            float m_flDepthOffset; // 0xd3c            
            // metadata: MNotSaved
            bool m_bDrawBackground; // 0xd40            
            uint8_t _pad0d41[0x3]; // 0xd41
            // metadata: MNotSaved
            float m_flBackgroundBorderWidth; // 0xd44            
            // metadata: MNotSaved
            float m_flBackgroundBorderHeight; // 0xd48            
            // metadata: MNotSaved
            float m_flBackgroundWorldToUV; // 0xd4c            
            // metadata: MNotSaved
            Color m_Color; // 0xd50            
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xd54            
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xd58            
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextReorientMode_t m_nReorientMode; // 0xd5c            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // CUtlSymbolLarge InputSetMessage; // 0x0
            // int32_t InputSetIntMessage; // 0x0
            // Color InputSetTextColor; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointWorldText because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointWorldText) == 0xd60);
    };
};
