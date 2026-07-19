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
        // Size: 0xba0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
        // static metadata: MNetworkVarNames "float m_flWidth"
        // static metadata: MNetworkVarNames "float m_flHeight"
        // static metadata: MNetworkVarNames "float m_flDPI"
        // static metadata: MNetworkVarNames "float m_flInteractDistance"
        // static metadata: MNetworkVarNames "float m_flDepthOffset"
        // static metadata: MNetworkVarNames "uint32 m_unOwnerContext"
        // static metadata: MNetworkVarNames "uint32 m_unHorizontalAlign"
        // static metadata: MNetworkVarNames "uint32 m_unVerticalAlign"
        // static metadata: MNetworkVarNames "uint32 m_unOrientation"
        // static metadata: MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
        // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
        #pragma pack(push, 1)
        class C_PointClientUIHUD : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad09d8[0x8]; // 0x9d8
            // metadata: MNotSaved
            bool m_bCheckCSSClasses; // 0x9e0            
            uint8_t _pad09e1[0x177]; // 0x9e1
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0xb58            
            uint8_t _pad0b59[0x3]; // 0xb59
            // metadata: MNetworkEnable
            float m_flWidth; // 0xb5c            
            // metadata: MNetworkEnable
            float m_flHeight; // 0xb60            
            // metadata: MNetworkEnable
            float m_flDPI; // 0xb64            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0xb68            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0xb6c            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0xb70            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0xb74            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0xb78            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0xb7c            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0xb80            
            uint8_t _pad0b81[0x7]; // 0xb81
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0xb88            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIHUD because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIHUD) == 0xba0);
    };
};
