#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseModelEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x12c0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_BarnLight : public source2sdk::client::C_BaseModelEntity
        {
        public:
            bool m_bEnabled; // 0xfb0            
            uint8_t _pad0fb1[0x3]; // 0xfb1
            std::int32_t m_nColorMode; // 0xfb4            
            Color m_Color; // 0xfb8            
            float m_flColorTemperature; // 0xfbc            
            float m_flBrightness; // 0xfc0            
            float m_flBrightnessScale; // 0xfc4            
            std::int32_t m_nDirectLight; // 0xfc8            
            std::int32_t m_nBakedShadowIndex; // 0xfcc            
            std::int32_t m_nLightPathUniqueId; // 0xfd0            
            std::int32_t m_nLightMapUniqueId; // 0xfd4            
            std::int32_t m_nLuminaireShape; // 0xfd8            
            float m_flLuminaireSize; // 0xfdc            
            float m_flLuminaireAnisotropy; // 0xfe0            
            uint8_t _pad0fe4[0x4]; // 0xfe4
            CUtlString m_LightStyleString; // 0xfe8            
            source2sdk::entity2::GameTime_t m_flLightStyleStartTime; // 0xff0            
            uint8_t _pad0ff4[0x4]; // 0xff4
            // m_QueuedLightStyleStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlString> m_QueuedLightStyleStrings;
            char m_QueuedLightStyleStrings[0x18]; // 0xff8            
            // m_LightStyleEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlString> m_LightStyleEvents;
            char m_LightStyleEvents[0x18]; // 0x1010            
            // m_LightStyleTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseModelEntity>> m_LightStyleTargets;
            char m_LightStyleTargets[0x18]; // 0x1028            
            source2sdk::entity2::CEntityIOOutput m_StyleEvent[4]; // 0x1040            
            // m_hLightCookie has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie;
            char m_hLightCookie[0x8]; // 0x10a0            
            float m_flShape; // 0x10a8            
            float m_flSoftX; // 0x10ac            
            float m_flSoftY; // 0x10b0            
            float m_flSkirt; // 0x10b4            
            float m_flSkirtNear; // 0x10b8            
            Vector m_vSizeParams; // 0x10bc            
            float m_flRange; // 0x10c8            
            Vector m_vShear; // 0x10cc            
            std::int32_t m_nBakeSpecularToCubemaps; // 0x10d8            
            Vector m_vBakeSpecularToCubemapsSize; // 0x10dc            
            float m_flBakeSpecularToCubemapsScale; // 0x10e8            
            std::int32_t m_nCastShadows; // 0x10ec            
            std::int32_t m_nShadowMapSize; // 0x10f0            
            std::int32_t m_nShadowPriority; // 0x10f4            
            bool m_bContactShadow; // 0x10f8            
            bool m_bForceShadowsEnabled; // 0x10f9            
            uint8_t _pad10fa[0x2]; // 0x10fa
            std::int32_t m_nBounceLight; // 0x10fc            
            float m_flBounceScale; // 0x1100            
            float m_flMinRoughness; // 0x1104            
            Vector m_vAlternateColor; // 0x1108            
            float m_fAlternateColorBrightness; // 0x1114            
            std::int32_t m_nFog; // 0x1118            
            float m_flFogStrength; // 0x111c            
            std::int32_t m_nFogShadows; // 0x1120            
            float m_flFogScale; // 0x1124            
            float m_flFadeSizeStart; // 0x1128            
            float m_flFadeSizeEnd; // 0x112c            
            float m_flShadowFadeSizeStart; // 0x1130            
            float m_flShadowFadeSizeEnd; // 0x1134            
            bool m_bPrecomputedFieldsValid; // 0x1138            
            uint8_t _pad1139[0x3]; // 0x1139
            Vector m_vPrecomputedBoundsMins; // 0x113c            
            Vector m_vPrecomputedBoundsMaxs; // 0x1148            
            Vector m_vPrecomputedOBBOrigin; // 0x1154            
            QAngle m_vPrecomputedOBBAngles; // 0x1160            
            Vector m_vPrecomputedOBBExtent; // 0x116c            
            std::int32_t m_nPrecomputedSubFrusta; // 0x1178            
            Vector m_vPrecomputedOBBOrigin0; // 0x117c            
            QAngle m_vPrecomputedOBBAngles0; // 0x1188            
            Vector m_vPrecomputedOBBExtent0; // 0x1194            
            Vector m_vPrecomputedOBBOrigin1; // 0x11a0            
            QAngle m_vPrecomputedOBBAngles1; // 0x11ac            
            Vector m_vPrecomputedOBBExtent1; // 0x11b8            
            Vector m_vPrecomputedOBBOrigin2; // 0x11c4            
            QAngle m_vPrecomputedOBBAngles2; // 0x11d0            
            Vector m_vPrecomputedOBBExtent2; // 0x11dc            
            Vector m_vPrecomputedOBBOrigin3; // 0x11e8            
            QAngle m_vPrecomputedOBBAngles3; // 0x11f4            
            Vector m_vPrecomputedOBBExtent3; // 0x1200            
            Vector m_vPrecomputedOBBOrigin4; // 0x120c            
            QAngle m_vPrecomputedOBBAngles4; // 0x1218            
            Vector m_vPrecomputedOBBExtent4; // 0x1224            
            Vector m_vPrecomputedOBBOrigin5; // 0x1230            
            QAngle m_vPrecomputedOBBAngles5; // 0x123c            
            Vector m_vPrecomputedOBBExtent5; // 0x1248            
            uint8_t _pad1254[0x44]; // 0x1254
            // metadata: MNotSaved
            bool m_bInitialBoneSetup; // 0x1298            
            uint8_t _pad1299[0x7]; // 0x1299
            // m_VisClusters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint16_t> m_VisClusters;
            char m_VisClusters[0x18]; // 0x12a0            
            uint8_t _pad12b8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BarnLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BarnLight) == 0x12c0);
    };
};
