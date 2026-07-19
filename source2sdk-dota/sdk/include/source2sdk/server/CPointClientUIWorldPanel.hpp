#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseClientUIEntity.hpp"

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
        // Size: 0x938
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CPointClientUIWorldPanel : public source2sdk::server::CBaseClientUIEntity
        {
        public:
            bool m_bIgnoreInput; // 0x8d8            
            bool m_bLit; // 0x8d9            
            bool m_bFollowPlayerAcrossTeleport; // 0x8da            
            uint8_t _pad08db[0x1]; // 0x8db
            float m_flWidth; // 0x8dc            
            float m_flHeight; // 0x8e0            
            float m_flDPI; // 0x8e4            
            float m_flWindowUIScale; // 0x8e8            
            float m_flInteractDistance; // 0x8ec            
            float m_flDepthOffset; // 0x8f0            
            std::uint32_t m_unOwnerContext; // 0x8f4            
            std::uint32_t m_unHorizontalAlign; // 0x8f8            
            std::uint32_t m_unVerticalAlign; // 0x8fc            
            std::uint32_t m_unOrientation; // 0x900            
            bool m_bAllowInteractionFromAllSceneWorlds; // 0x904            
            uint8_t _pad0905[0x3]; // 0x905
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0x908            
            bool m_bOpaque; // 0x920            
            bool m_bNoDepth; // 0x921            
            bool m_bVisibleWhenParentNoDraw; // 0x922            
            bool m_bRenderBackface; // 0x923            
            bool m_bUseOffScreenIndicator; // 0x924            
            bool m_bExcludeFromSaveGames; // 0x925            
            bool m_bGrabbable; // 0x926            
            bool m_bOnlyRenderToTexture; // 0x927            
            bool m_bDisableMipGen; // 0x928            
            uint8_t _pad0929[0x3]; // 0x929
            std::int32_t m_nExplicitImageLayout; // 0x92c            
            bool m_bIgnoreParentOrientation; // 0x930            
            uint8_t _pad0931[0x7];
            
            // Datamap fields:
            // CUtlSymbolLarge css_class; // 0x7fffffff
            // void InputIgnoreUserInput; // 0x0
            // void InputAcceptUserInput; // 0x0
            // CUtlSymbolLarge InputAddCSSClass; // 0x0
            // CUtlSymbolLarge InputRemoveCSSClass; // 0x0
            // CUtlSymbolLarge InputLocalPlayerAddCSSClass; // 0x0
            // CUtlSymbolLarge InputLocalPlayerRemoveCSSClass; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointClientUIWorldPanel) == 0x938);
    };
};
