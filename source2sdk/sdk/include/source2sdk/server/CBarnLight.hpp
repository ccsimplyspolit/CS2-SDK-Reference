#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseModelEntity;
    };
};

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
        // Size: 0xa58
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CBarnLight : public source2sdk::server::CBaseModelEntity
        {
        public:
            bool m_bEnabled; // 0x770            
            uint8_t _pad0771[0x3]; // 0x771
            std::int32_t m_nColorMode; // 0x774            
            Color m_Color; // 0x778            
            float m_flColorTemperature; // 0x77c            
            float m_flBrightness; // 0x780            
            float m_flBrightnessScale; // 0x784            
            std::int32_t m_nDirectLight; // 0x788            
            std::int32_t m_nBakedShadowIndex; // 0x78c            
            std::int32_t m_nLightPathUniqueId; // 0x790            
            std::int32_t m_nLightMapUniqueId; // 0x794            
            std::int32_t m_nLuminaireShape; // 0x798            
            float m_flLuminaireSize; // 0x79c            
            float m_flLuminaireAnisotropy; // 0x7a0            
            uint8_t _pad07a4[0x4]; // 0x7a4
            CUtlString m_LightStyleString; // 0x7a8            
            source2sdk::entity2::GameTime_t m_flLightStyleStartTime; // 0x7b0            
            uint8_t _pad07b4[0x4]; // 0x7b4
            // m_QueuedLightStyleStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlString> m_QueuedLightStyleStrings;
            char m_QueuedLightStyleStrings[0x18]; // 0x7b8            
            // m_LightStyleEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlString> m_LightStyleEvents;
            char m_LightStyleEvents[0x18]; // 0x7d0            
            // m_LightStyleTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseModelEntity>> m_LightStyleTargets;
            char m_LightStyleTargets[0x18]; // 0x7e8            
            source2sdk::entity2::CEntityIOOutput m_StyleEvent[4]; // 0x800            
            uint8_t _pad0860[0x20]; // 0x860
            // m_hLightCookie has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie;
            char m_hLightCookie[0x8]; // 0x880            
            float m_flShape; // 0x888            
            float m_flSoftX; // 0x88c            
            float m_flSoftY; // 0x890            
            float m_flSkirt; // 0x894            
            float m_flSkirtNear; // 0x898            
            Vector m_vSizeParams; // 0x89c            
            float m_flRange; // 0x8a8            
            Vector m_vShear; // 0x8ac            
            std::int32_t m_nBakeSpecularToCubemaps; // 0x8b8            
            Vector m_vBakeSpecularToCubemapsSize; // 0x8bc            
            float m_flBakeSpecularToCubemapsScale; // 0x8c8            
            std::int32_t m_nCastShadows; // 0x8cc            
            std::int32_t m_nShadowMapSize; // 0x8d0            
            std::int32_t m_nShadowPriority; // 0x8d4            
            bool m_bContactShadow; // 0x8d8            
            bool m_bForceShadowsEnabled; // 0x8d9            
            uint8_t _pad08da[0x2]; // 0x8da
            std::int32_t m_nBounceLight; // 0x8dc            
            float m_flBounceScale; // 0x8e0            
            float m_flMinRoughness; // 0x8e4            
            Vector m_vAlternateColor; // 0x8e8            
            float m_fAlternateColorBrightness; // 0x8f4            
            std::int32_t m_nFog; // 0x8f8            
            float m_flFogStrength; // 0x8fc            
            std::int32_t m_nFogShadows; // 0x900            
            float m_flFogScale; // 0x904            
            float m_flFadeSizeStart; // 0x908            
            float m_flFadeSizeEnd; // 0x90c            
            float m_flShadowFadeSizeStart; // 0x910            
            float m_flShadowFadeSizeEnd; // 0x914            
            bool m_bPrecomputedFieldsValid; // 0x918            
            uint8_t _pad0919[0x3]; // 0x919
            Vector m_vPrecomputedBoundsMins; // 0x91c            
            Vector m_vPrecomputedBoundsMaxs; // 0x928            
            Vector m_vPrecomputedOBBOrigin; // 0x934            
            QAngle m_vPrecomputedOBBAngles; // 0x940            
            Vector m_vPrecomputedOBBExtent; // 0x94c            
            std::int32_t m_nPrecomputedSubFrusta; // 0x958            
            Vector m_vPrecomputedOBBOrigin0; // 0x95c            
            QAngle m_vPrecomputedOBBAngles0; // 0x968            
            Vector m_vPrecomputedOBBExtent0; // 0x974            
            Vector m_vPrecomputedOBBOrigin1; // 0x980            
            QAngle m_vPrecomputedOBBAngles1; // 0x98c            
            Vector m_vPrecomputedOBBExtent1; // 0x998            
            Vector m_vPrecomputedOBBOrigin2; // 0x9a4            
            QAngle m_vPrecomputedOBBAngles2; // 0x9b0            
            Vector m_vPrecomputedOBBExtent2; // 0x9bc            
            Vector m_vPrecomputedOBBOrigin3; // 0x9c8            
            QAngle m_vPrecomputedOBBAngles3; // 0x9d4            
            Vector m_vPrecomputedOBBExtent3; // 0x9e0            
            Vector m_vPrecomputedOBBOrigin4; // 0x9ec            
            QAngle m_vPrecomputedOBBAngles4; // 0x9f8            
            Vector m_vPrecomputedOBBExtent4; // 0xa04            
            Vector m_vPrecomputedOBBOrigin5; // 0xa10            
            QAngle m_vPrecomputedOBBAngles5; // 0xa1c            
            Vector m_vPrecomputedOBBExtent5; // 0xa28            
            bool m_bPvsModifyEntity; // 0xa34            
            bool m_bTransmitAlways; // 0xa35            
            uint8_t _pad0a36[0x2]; // 0xa36
            // m_VisClusters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint16_t> m_VisClusters;
            char m_VisClusters[0x18]; // 0xa38            
            uint8_t _pad0a50[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBarnLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBarnLight) == 0xa58);
    };
};
