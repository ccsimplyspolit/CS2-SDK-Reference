#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DecalFlags_t.hpp"
#include "source2sdk/client/DecalRtEncoding_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0xb0
        #pragma pack(push, 1)
        class CDecalInstance
        {
        public:
            CGlobalSymbol m_sDecalGroup; // 0x0            
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0x8            
            CUtlStringToken m_sSequenceName; // 0x10            
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEntity;
            char m_hEntity[0x4]; // 0x14            
            std::int32_t m_nBoneIndex; // 0x18            
            std::int32_t m_nTriangleIndex; // 0x1c            
            Vector m_vPositionLS; // 0x20            
            Vector m_vNormalLS; // 0x2c            
            Vector m_vSAxisLS; // 0x38            
            source2sdk::client::DecalFlags_t m_nFlags; // 0x44            
            Color m_Color; // 0x48            
            float m_flWidth; // 0x4c            
            float m_flHeight; // 0x50            
            float m_flDepth; // 0x54            
            uint8_t _pad0058[0x8]; // 0x58
            CTransformWS m_transform; // 0x60            
            float m_flAnimationScale; // 0x80            
            float m_flAnimationStartTime; // 0x84            
            source2sdk::entity2::GameTime_t m_flPlaceTime; // 0x88            
            float m_flFadeStartTime; // 0x8c            
            float m_flFadeDuration; // 0x90            
            float m_flLightingOriginOffset; // 0x94            
            uint8_t _pad0098[0x8]; // 0x98
            float m_flBoundingRadiusSqr; // 0xa0            
            // metadata: MNotSaved
            std::int16_t m_nSequenceIndex; // 0xa4            
            // metadata: MNotSaved
            bool m_bIsAdjacent; // 0xa6            
            bool m_bDoDecalLightmapping; // 0xa7            
            source2sdk::client::DecalRtEncoding_t m_nDecalRtEncoding; // 0xa8            
            bool m_bProjectToBackfaces; // 0xa9            
            uint8_t _pad00aa[0x6];
            
            // Datamap fields:
            // void m_hProjectedDecal; // 0x98
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_sDecalGroup) == 0x0);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_hMaterial) == 0x8);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_sSequenceName) == 0x10);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_hEntity) == 0x14);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nBoneIndex) == 0x18);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nTriangleIndex) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_vPositionLS) == 0x20);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_vNormalLS) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_vSAxisLS) == 0x38);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nFlags) == 0x44);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_Color) == 0x48);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flWidth) == 0x4c);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flHeight) == 0x50);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flDepth) == 0x54);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_transform) == 0x60);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flAnimationScale) == 0x80);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flAnimationStartTime) == 0x84);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flPlaceTime) == 0x88);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flFadeStartTime) == 0x8c);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flFadeDuration) == 0x90);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flLightingOriginOffset) == 0x94);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_flBoundingRadiusSqr) == 0xa0);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nSequenceIndex) == 0xa4);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_bIsAdjacent) == 0xa6);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_bDoDecalLightmapping) == 0xa7);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_nDecalRtEncoding) == 0xa8);
        static_assert(offsetof(source2sdk::client::CDecalInstance, m_bProjectToBackfaces) == 0xa9);
        
        static_assert(sizeof(source2sdk::client::CDecalInstance) == 0xb0);
    };
};
