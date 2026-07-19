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
        // Size: 0xcf0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PointClientUIWorldPanel : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad0ab8[0x8]; // 0xab8
            // metadata: MNotSaved
            bool m_bForceRecreateNextUpdate; // 0xac0            
            // metadata: MNotSaved
            bool m_bMoveViewToPlayerNextThink; // 0xac1            
            // metadata: MNotSaved
            bool m_bCheckCSSClasses; // 0xac2            
            uint8_t _pad0ac3[0xd]; // 0xac3
            // metadata: MNotSaved
            CTransform m_anchorDeltaTransform; // 0xad0            
            uint8_t _pad0af0[0x170]; // 0xaf0
            // metadata: MNotSaved
            source2sdk::client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xc60            
            uint8_t _pad0c68[0x20]; // 0xc68
            bool m_bIgnoreInput; // 0xc88            
            bool m_bLit; // 0xc89            
            bool m_bFollowPlayerAcrossTeleport; // 0xc8a            
            uint8_t _pad0c8b[0x1]; // 0xc8b
            float m_flWidth; // 0xc8c            
            float m_flHeight; // 0xc90            
            float m_flDPI; // 0xc94            
            float m_flWindowUIScale; // 0xc98            
            float m_flInteractDistance; // 0xc9c            
            float m_flDepthOffset; // 0xca0            
            std::uint32_t m_unOwnerContext; // 0xca4            
            std::uint32_t m_unHorizontalAlign; // 0xca8            
            std::uint32_t m_unVerticalAlign; // 0xcac            
            std::uint32_t m_unOrientation; // 0xcb0            
            bool m_bAllowInteractionFromAllSceneWorlds; // 0xcb4            
            uint8_t _pad0cb5[0x3]; // 0xcb5
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0xcb8            
            bool m_bOpaque; // 0xcd0            
            bool m_bNoDepth; // 0xcd1            
            bool m_bVisibleWhenParentNoDraw; // 0xcd2            
            bool m_bRenderBackface; // 0xcd3            
            bool m_bUseOffScreenIndicator; // 0xcd4            
            bool m_bExcludeFromSaveGames; // 0xcd5            
            bool m_bGrabbable; // 0xcd6            
            bool m_bOnlyRenderToTexture; // 0xcd7            
            bool m_bDisableMipGen; // 0xcd8            
            uint8_t _pad0cd9[0x3]; // 0xcd9
            std::int32_t m_nExplicitImageLayout; // 0xcdc            
            bool m_bIgnoreParentOrientation; // 0xce0            
            uint8_t _pad0ce1[0xf];
            
            // Datamap fields:
            // CUtlSymbolLarge css_class; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldPanel) == 0xcf0);
    };
};
