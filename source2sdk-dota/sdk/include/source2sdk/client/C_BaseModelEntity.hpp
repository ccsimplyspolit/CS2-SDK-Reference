#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCollisionProperty.hpp"
#include "source2sdk/client/CGlowProperty.hpp"
#include "source2sdk/client/CHitboxComponent.hpp"
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/DecalRtEncoding_t.hpp"
#include "source2sdk/client/EntityRenderAttribute_t.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CChoreoComponent;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CClientAlphaProperty;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDestructiblePartsComponent;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CRenderComponent;
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
        // Size: 0xa88
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BaseModelEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f0[0x8]; // 0x5f0
            // metadata: MNotSaved
            source2sdk::client::CRenderComponent* m_CRenderComponent; // 0x5f8            
            source2sdk::client::CHitboxComponent m_CHitboxComponent; // 0x600            
            source2sdk::client::CChoreoComponent* m_pChoreoComponent; // 0x618            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0x620            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0x624            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0x628            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0x62c            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0x630            
            std::int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex; // 0x634            
            std::int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex; // 0x638            
            std::int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex; // 0x63c            
            std::int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex; // 0x640            
            std::int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex; // 0x644            
            bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // 0x648            
            bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // 0x649            
            bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // 0x64a            
            bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // 0x64b            
            bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // 0x64c            
            uint8_t _pad064d[0x3]; // 0x64d
            source2sdk::client::CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // 0x650            
            uint8_t _pad0658[0x120]; // 0x658
            // metadata: MNotSaved
            bool m_bInitModelEffects; // 0x778            
            // metadata: MNotSaved
            bool m_bDoingModelEffects; // 0x779            
            // metadata: MNotSaved
            bool m_bIsStaticProp; // 0x77a            
            uint8_t _pad077b[0x1]; // 0x77b
            std::int32_t m_iViewerID; // 0x77c            
            std::int32_t m_iTeamVisibilityBitmask; // 0x780            
            // metadata: MNotSaved
            std::int32_t m_iOldHealth; // 0x784            
            source2sdk::client::RenderMode_t m_nRenderMode; // 0x788            
            bool m_bVisibilityDirtyFlag; // 0x789            
            source2sdk::client::RenderFx_t m_nRenderFX; // 0x78a            
            bool m_bAllowFadeInView; // 0x78b            
            uint8_t _pad078c[0x1c]; // 0x78c
            Color m_clrRender; // 0x7a8            
            uint8_t _pad07ac[0x4]; // 0x7ac
            // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::EntityRenderAttribute_t> m_vecRenderAttributes;
            char m_vecRenderAttributes[0x68]; // 0x7b0            
            uint8_t _pad0818[0x18]; // 0x818
            bool m_bRenderToCubemaps; // 0x830            
            bool m_bNoInterpolate; // 0x831            
            uint8_t _pad0832[0x6]; // 0x832
            source2sdk::client::CCollisionProperty m_Collision; // 0x838            
            source2sdk::client::CGlowProperty m_Glow; // 0x8f0            
            float m_flGlowBackfaceMult; // 0x948            
            float m_fadeMinDist; // 0x94c            
            float m_fadeMaxDist; // 0x950            
            float m_flFadeScale; // 0x954            
            float m_flShadowStrength; // 0x958            
            std::uint8_t m_nObjectCulling; // 0x95c            
            source2sdk::client::DecalRtEncoding_t m_nRequiredDecalRtEncoding; // 0x95d            
            uint8_t _pad095e[0x2]; // 0x95e
            // m_bodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CGlobalSymbol,std::int32_t> m_bodyGroupChoices;
            char m_bodyGroupChoices[0x28]; // 0x960            
            source2sdk::client::CNetworkViewOffsetVector m_vecViewOffset; // 0x988            
            uint8_t _pad09b0[0xb8]; // 0x9b0
            // metadata: MNotSaved
            source2sdk::client::CClientAlphaProperty* m_pClientAlphaProperty; // 0xa68            
            // metadata: MNotSaved
            Color m_ClientOverrideTint; // 0xa70            
            // metadata: MNotSaved
            bool m_bUseClientOverrideTint; // 0xa74            
            uint8_t _pad0a75[0x3]; // 0xa75
            // metadata: MKV3TransferSaveOpsForField
            std::uint32_t m_bvDisabledHitGroups[1]; // 0xa78            
            uint8_t _pad0a7c[0xc];
            
            // Datamap fields:
            // CUtlString add_attribute; // 0x7fffffff
            // Color rendercolor32; // 0x7fffffff
            // int32_t renderamt; // 0x7fffffff
            // Vector mins; // 0x7fffffff
            // Vector maxs; // 0x7fffffff
            // const char * skin; // 0x7fffffff
            // CUtlString bodygroups; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseModelEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseModelEntity) == 0xa88);
    };
};
