#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1c0
        // Has VTable
        // Construct allowed
        // Construct disallowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLightComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x30]; // 0x8
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x38            
            uint8_t _pad0060[0x15]; // 0x60
            Color m_Color; // 0x75            
            Color m_SecondaryColor; // 0x79            
            uint8_t _pad007d[0x3]; // 0x7d
            float m_flBrightness; // 0x80            
            float m_flBrightnessScale; // 0x84            
            float m_flBrightnessMult; // 0x88            
            float m_flRange; // 0x8c            
            float m_flFalloff; // 0x90            
            float m_flAttenuation0; // 0x94            
            float m_flAttenuation1; // 0x98            
            float m_flAttenuation2; // 0x9c            
            float m_flTheta; // 0xa0            
            float m_flPhi; // 0xa4            
            // m_hLightCookie has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie;
            char m_hLightCookie[0x8]; // 0xa8            
            std::int32_t m_nCascades; // 0xb0            
            std::int32_t m_nCastShadows; // 0xb4            
            std::int32_t m_nShadowWidth; // 0xb8            
            std::int32_t m_nShadowHeight; // 0xbc            
            bool m_bRenderDiffuse; // 0xc0            
            uint8_t _pad00c1[0x3]; // 0xc1
            std::int32_t m_nRenderSpecular; // 0xc4            
            bool m_bRenderTransmissive; // 0xc8            
            uint8_t _pad00c9[0x3]; // 0xc9
            float m_flOrthoLightWidth; // 0xcc            
            float m_flOrthoLightHeight; // 0xd0            
            std::int32_t m_nStyle; // 0xd4            
            CUtlString m_Pattern; // 0xd8            
            std::int32_t m_nCascadeRenderStaticObjects; // 0xe0            
            float m_flShadowCascadeCrossFade; // 0xe4            
            float m_flShadowCascadeDistanceFade; // 0xe8            
            float m_flShadowCascadeDistance0; // 0xec            
            float m_flShadowCascadeDistance1; // 0xf0            
            float m_flShadowCascadeDistance2; // 0xf4            
            float m_flShadowCascadeDistance3; // 0xf8            
            std::int32_t m_nShadowCascadeResolution0; // 0xfc            
            std::int32_t m_nShadowCascadeResolution1; // 0x100            
            std::int32_t m_nShadowCascadeResolution2; // 0x104            
            std::int32_t m_nShadowCascadeResolution3; // 0x108            
            bool m_bUsesBakedShadowing; // 0x10c            
            uint8_t _pad010d[0x3]; // 0x10d
            std::int32_t m_nShadowPriority; // 0x110            
            std::int32_t m_nBakedShadowIndex; // 0x114            
            std::int32_t m_nLightPathUniqueId; // 0x118            
            std::int32_t m_nLightMapUniqueId; // 0x11c            
            bool m_bRenderToCubemaps; // 0x120            
            bool m_bAllowSSTGeneration; // 0x121            
            uint8_t _pad0122[0x2]; // 0x122
            std::int32_t m_nDirectLight; // 0x124            
            std::int32_t m_nBounceLight; // 0x128            
            float m_flBounceScale; // 0x12c            
            float m_flFadeMinDist; // 0x130            
            float m_flFadeMaxDist; // 0x134            
            float m_flShadowFadeMinDist; // 0x138            
            float m_flShadowFadeMaxDist; // 0x13c            
            bool m_bEnabled; // 0x140            
            bool m_bFlicker; // 0x141            
            bool m_bPrecomputedFieldsValid; // 0x142            
            uint8_t _pad0143[0x1]; // 0x143
            Vector m_vPrecomputedBoundsMins; // 0x144            
            Vector m_vPrecomputedBoundsMaxs; // 0x150            
            Vector m_vPrecomputedOBBOrigin; // 0x15c            
            QAngle m_vPrecomputedOBBAngles; // 0x168            
            Vector m_vPrecomputedOBBExtent; // 0x174            
            float m_flPrecomputedMaxRange; // 0x180            
            std::int32_t m_nFogLightingMode; // 0x184            
            float m_flFogContributionStength; // 0x188            
            float m_flNearClipPlane; // 0x18c            
            Color m_SkyColor; // 0x190            
            float m_flSkyIntensity; // 0x194            
            Color m_SkyAmbientBounce; // 0x198            
            bool m_bUseSecondaryColor; // 0x19c            
            // metadata: MNotSaved
            bool m_bMixedShadows; // 0x19d            
            uint8_t _pad019e[0x2]; // 0x19e
            source2sdk::entity2::GameTime_t m_flLightStyleStartTime; // 0x1a0            
            float m_flCapsuleLength; // 0x1a4            
            float m_flMinRoughness; // 0x1a8            
            uint8_t _pad01ac[0xc]; // 0x1ac
            bool m_bPvsModifyEntity; // 0x1b8            
            uint8_t _pad01b9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLightComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLightComponent) == 0x1c0);
    };
};
