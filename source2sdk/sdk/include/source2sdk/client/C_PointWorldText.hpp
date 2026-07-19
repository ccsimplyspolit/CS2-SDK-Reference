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
        // Size: 0x1288
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PointWorldText : public source2sdk::client::C_ModelPointEntity
        {
        public:
            uint8_t _pad0fb0[0x8]; // 0xfb0
            // metadata: MNotSaved
            bool m_bForceRecreateNextUpdate; // 0xfb8            
            uint8_t _pad0fb9[0x17]; // 0xfb9
            std::int32_t m_nTextWidthPx; // 0xfd0            
            std::int32_t m_nTextHeightPx; // 0xfd4            
            char m_messageText[512]; // 0xfd8            
            // metadata: MNotSaved
            char m_FontName[64]; // 0x11d8            
            // metadata: MNotSaved
            char m_BackgroundMaterialName[64]; // 0x1218            
            // metadata: MNotSaved
            bool m_bEnabled; // 0x1258            
            // metadata: MNotSaved
            bool m_bFullbright; // 0x1259            
            uint8_t _pad125a[0x2]; // 0x125a
            // metadata: MNotSaved
            float m_flWorldUnitsPerPx; // 0x125c            
            // metadata: MNotSaved
            float m_flFontSize; // 0x1260            
            // metadata: MNotSaved
            float m_flDepthOffset; // 0x1264            
            // metadata: MNotSaved
            bool m_bDrawBackground; // 0x1268            
            uint8_t _pad1269[0x3]; // 0x1269
            // metadata: MNotSaved
            float m_flBackgroundBorderWidth; // 0x126c            
            // metadata: MNotSaved
            float m_flBackgroundBorderHeight; // 0x1270            
            // metadata: MNotSaved
            float m_flBackgroundWorldToUV; // 0x1274            
            // metadata: MNotSaved
            Color m_Color; // 0x1278            
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x127c            
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x1280            
            // metadata: MNotSaved
            source2sdk::client::PointWorldTextReorientMode_t m_nReorientMode; // 0x1284            
            
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
        
        static_assert(sizeof(source2sdk::client::C_PointWorldText) == 0x1288);
    };
};
