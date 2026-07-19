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
        // Size: 0x1210
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PointClientUIWorldPanel : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad0fe0[0x8]; // 0xfe0
            // metadata: MNotSaved
            bool m_bForceRecreateNextUpdate; // 0xfe8            
            // metadata: MNotSaved
            bool m_bMoveViewToPlayerNextThink; // 0xfe9            
            // metadata: MNotSaved
            bool m_bCheckCSSClasses; // 0xfea            
            uint8_t _pad0feb[0x5]; // 0xfeb
            // metadata: MNotSaved
            CTransform m_anchorDeltaTransform; // 0xff0            
            uint8_t _pad1010[0x170]; // 0x1010
            // metadata: MNotSaved
            source2sdk::client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0x1180            
            uint8_t _pad1188[0x20]; // 0x1188
            bool m_bIgnoreInput; // 0x11a8            
            bool m_bLit; // 0x11a9            
            bool m_bFollowPlayerAcrossTeleport; // 0x11aa            
            uint8_t _pad11ab[0x1]; // 0x11ab
            float m_flWidth; // 0x11ac            
            float m_flHeight; // 0x11b0            
            float m_flDPI; // 0x11b4            
            float m_flInteractDistance; // 0x11b8            
            float m_flDepthOffset; // 0x11bc            
            std::uint32_t m_unOwnerContext; // 0x11c0            
            std::uint32_t m_unHorizontalAlign; // 0x11c4            
            std::uint32_t m_unVerticalAlign; // 0x11c8            
            std::uint32_t m_unOrientation; // 0x11cc            
            bool m_bAllowInteractionFromAllSceneWorlds; // 0x11d0            
            uint8_t _pad11d1[0x7]; // 0x11d1
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0x11d8            
            bool m_bOpaque; // 0x11f0            
            bool m_bNoDepth; // 0x11f1            
            bool m_bVisibleWhenParentNoDraw; // 0x11f2            
            bool m_bRenderBackface; // 0x11f3            
            bool m_bUseOffScreenIndicator; // 0x11f4            
            bool m_bExcludeFromSaveGames; // 0x11f5            
            bool m_bGrabbable; // 0x11f6            
            bool m_bOnlyRenderToTexture; // 0x11f7            
            bool m_bDisableMipGen; // 0x11f8            
            uint8_t _pad11f9[0x3]; // 0x11f9
            std::int32_t m_nExplicitImageLayout; // 0x11fc            
            bool m_bIgnoreParentOrientation; // 0x1200            
            uint8_t _pad1201[0xf];
            
            // Datamap fields:
            // CUtlSymbolLarge css_class; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldPanel) == 0x1210);
    };
};
