#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CPointOffScreenIndicatorUi;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc00
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
        // static metadata: MNetworkVarNames "bool m_bLit"
        // static metadata: MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
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
        // static metadata: MNetworkVarNames "bool m_bOpaque"
        // static metadata: MNetworkVarNames "bool m_bNoDepth"
        // static metadata: MNetworkVarNames "bool m_bVisibleWhenParentNoDraw"
        // static metadata: MNetworkVarNames "bool m_bRenderBackface"
        // static metadata: MNetworkVarNames "bool m_bUseOffScreenIndicator"
        // static metadata: MNetworkVarNames "bool m_bExcludeFromSaveGames"
        // static metadata: MNetworkVarNames "bool m_bGrabbable"
        // static metadata: MNetworkVarNames "bool m_bOnlyRenderToTexture"
        // static metadata: MNetworkVarNames "bool m_bDisableMipGen"
        // static metadata: MNetworkVarNames "int32 m_nExplicitImageLayout"
        #pragma pack(push, 1)
        class C_PointClientUIWorldPanel : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad09d8[0x8]; // 0x9d8
            // metadata: MNotSaved
            bool m_bForceRecreateNextUpdate; // 0x9e0            
            // metadata: MNotSaved
            bool m_bMoveViewToPlayerNextThink; // 0x9e1            
            // metadata: MNotSaved
            bool m_bCheckCSSClasses; // 0x9e2            
            uint8_t _pad09e3[0xd]; // 0x9e3
            // metadata: MNotSaved
            CTransform m_anchorDeltaTransform; // 0x9f0            
            uint8_t _pad0a10[0x170]; // 0xa10
            // metadata: MNotSaved
            source2sdk::client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xb80            
            uint8_t _pad0b88[0x20]; // 0xb88
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0xba8            
            // metadata: MNetworkEnable
            bool m_bLit; // 0xba9            
            // metadata: MNetworkEnable
            bool m_bFollowPlayerAcrossTeleport; // 0xbaa            
            uint8_t _pad0bab[0x1]; // 0xbab
            // metadata: MNetworkEnable
            float m_flWidth; // 0xbac            
            // metadata: MNetworkEnable
            float m_flHeight; // 0xbb0            
            // metadata: MNetworkEnable
            float m_flDPI; // 0xbb4            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0xbb8            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0xbbc            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0xbc0            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0xbc4            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0xbc8            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0xbcc            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0xbd0            
            uint8_t _pad0bd1[0x7]; // 0xbd1
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0xbd8            
            // metadata: MNetworkEnable
            bool m_bOpaque; // 0xbf0            
            // metadata: MNetworkEnable
            bool m_bNoDepth; // 0xbf1            
            // metadata: MNetworkEnable
            bool m_bVisibleWhenParentNoDraw; // 0xbf2            
            // metadata: MNetworkEnable
            bool m_bRenderBackface; // 0xbf3            
            // metadata: MNetworkEnable
            bool m_bUseOffScreenIndicator; // 0xbf4            
            // metadata: MNetworkEnable
            bool m_bExcludeFromSaveGames; // 0xbf5            
            // metadata: MNetworkEnable
            bool m_bGrabbable; // 0xbf6            
            // metadata: MNetworkEnable
            bool m_bOnlyRenderToTexture; // 0xbf7            
            // metadata: MNetworkEnable
            bool m_bDisableMipGen; // 0xbf8            
            uint8_t _pad0bf9[0x3]; // 0xbf9
            // metadata: MNetworkEnable
            std::int32_t m_nExplicitImageLayout; // 0xbfc            
            
            // Datamap fields:
            // CUtlSymbolLarge css_class; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldPanel) == 0xc00);
    };
};
