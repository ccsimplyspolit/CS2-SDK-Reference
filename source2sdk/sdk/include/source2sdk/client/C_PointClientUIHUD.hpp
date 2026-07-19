#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseClientUIEntity.hpp"

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
        // Size: 0x11a8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PointClientUIHUD : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad0fe0[0x8]; // 0xfe0
            // metadata: MNotSaved
            bool m_bCheckCSSClasses; // 0xfe8            
            uint8_t _pad0fe9[0x177]; // 0xfe9
            bool m_bIgnoreInput; // 0x1160            
            uint8_t _pad1161[0x3]; // 0x1161
            float m_flWidth; // 0x1164            
            float m_flHeight; // 0x1168            
            float m_flDPI; // 0x116c            
            float m_flInteractDistance; // 0x1170            
            float m_flDepthOffset; // 0x1174            
            std::uint32_t m_unOwnerContext; // 0x1178            
            std::uint32_t m_unHorizontalAlign; // 0x117c            
            std::uint32_t m_unVerticalAlign; // 0x1180            
            std::uint32_t m_unOrientation; // 0x1184            
            bool m_bAllowInteractionFromAllSceneWorlds; // 0x1188            
            uint8_t _pad1189[0x7]; // 0x1189
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0x1190            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIHUD because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIHUD) == 0x11a8);
    };
};
