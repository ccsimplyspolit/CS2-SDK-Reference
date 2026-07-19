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
        // Size: 0xfb0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BaseModelEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0600[0x4f0]; // 0x600
            // metadata: MNotSaved
            source2sdk::client::CRenderComponent* m_CRenderComponent; // 0xaf0            
            source2sdk::client::CHitboxComponent m_CHitboxComponent; // 0xaf8            
            source2sdk::client::CChoreoComponent* m_pChoreoComponent; // 0xb10            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0xb18            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0xb1c            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0xb20            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0xb24            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0xb28            
            std::int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex; // 0xb2c            
            std::int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex; // 0xb30            
            std::int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex; // 0xb34            
            std::int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex; // 0xb38            
            std::int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex; // 0xb3c            
            bool m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces; // 0xb40            
            bool m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces; // 0xb41            
            bool m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces; // 0xb42            
            bool m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces; // 0xb43            
            bool m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces; // 0xb44            
            uint8_t _pad0b45[0x3]; // 0xb45
            source2sdk::client::CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // 0xb48            
            uint8_t _pad0b50[0x120]; // 0xb50
            // metadata: MNotSaved
            bool m_bInitModelEffects; // 0xc70            
            // metadata: MNotSaved
            bool m_bDoingModelEffects; // 0xc71            
            uint8_t _pad0c72[0x2]; // 0xc72
            // metadata: MNotSaved
            std::int32_t m_iOldHealth; // 0xc74            
            source2sdk::client::RenderMode_t m_nRenderMode; // 0xc78            
            source2sdk::client::RenderFx_t m_nRenderFX; // 0xc79            
            bool m_bAllowFadeInView; // 0xc7a            
            uint8_t _pad0c7b[0x1d]; // 0xc7b
            Color m_clrRender; // 0xc98            
            uint8_t _pad0c9c[0x4]; // 0xc9c
            // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::EntityRenderAttribute_t> m_vecRenderAttributes;
            char m_vecRenderAttributes[0x68]; // 0xca0            
            uint8_t _pad0d08[0x18]; // 0xd08
            bool m_bRenderToCubemaps; // 0xd20            
            bool m_bNoInterpolate; // 0xd21            
            uint8_t _pad0d22[0x6]; // 0xd22
            source2sdk::client::CCollisionProperty m_Collision; // 0xd28            
            source2sdk::client::CGlowProperty m_Glow; // 0xde0            
            float m_flGlowBackfaceMult; // 0xe38            
            float m_fadeMinDist; // 0xe3c            
            float m_fadeMaxDist; // 0xe40            
            float m_flFadeScale; // 0xe44            
            float m_flShadowStrength; // 0xe48            
            std::uint8_t m_nObjectCulling; // 0xe4c            
            source2sdk::client::DecalRtEncoding_t m_nRequiredDecalRtEncoding; // 0xe4d            
            uint8_t _pad0e4e[0x2]; // 0xe4e
            // m_bodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CGlobalSymbol,std::int32_t> m_bodyGroupChoices;
            char m_bodyGroupChoices[0x28]; // 0xe50            
            source2sdk::client::CNetworkViewOffsetVector m_vecViewOffset; // 0xe78            
            uint8_t _pad0ea0[0xb8]; // 0xea0
            // metadata: MNotSaved
            source2sdk::client::CClientAlphaProperty* m_pClientAlphaProperty; // 0xf58            
            // metadata: MNotSaved
            Color m_ClientOverrideTint; // 0xf60            
            // metadata: MNotSaved
            bool m_bUseClientOverrideTint; // 0xf64            
            uint8_t _pad0f65[0x3b]; // 0xf65
            // metadata: MKV3TransferSaveOpsForField
            std::uint32_t m_bvDisabledHitGroups[1]; // 0xfa0            
            uint8_t _pad0fa4[0xc];
            
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
        
        static_assert(sizeof(source2sdk::client::C_BaseModelEntity) == 0xfb0);
    };
};
