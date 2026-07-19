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
        // Size: 0xc80
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PointClientUIHUD : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad0ab8[0x8]; // 0xab8
            // metadata: MNotSaved
            bool m_bCheckCSSClasses; // 0xac0            
            uint8_t _pad0ac1[0x177]; // 0xac1
            bool m_bIgnoreInput; // 0xc38            
            uint8_t _pad0c39[0x3]; // 0xc39
            float m_flWidth; // 0xc3c            
            float m_flHeight; // 0xc40            
            float m_flDPI; // 0xc44            
            float m_flInteractDistance; // 0xc48            
            float m_flDepthOffset; // 0xc4c            
            std::uint32_t m_unOwnerContext; // 0xc50            
            std::uint32_t m_unHorizontalAlign; // 0xc54            
            std::uint32_t m_unVerticalAlign; // 0xc58            
            std::uint32_t m_unOrientation; // 0xc5c            
            bool m_bAllowInteractionFromAllSceneWorlds; // 0xc60            
            uint8_t _pad0c61[0x7]; // 0xc61
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0xc68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIHUD because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIHUD) == 0xc80);
    };
};
