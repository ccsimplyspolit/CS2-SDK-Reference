#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAttributeContainer.hpp"
#include "source2sdk/client/C_BaseAnimatingOverlay.hpp"
#include "source2sdk/client/C_EconEntity_AttachedModelData_t.hpp"
#include "source2sdk/client/C_EconEntity_AttachedParticleInfo_t.hpp"
#include "source2sdk/client/EconEntityParticleDisableMode_t.hpp"
#include "source2sdk/client/style_index_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimatingActivity;
    };
};
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc60
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_EconEntity : public source2sdk::client::C_BaseAnimatingOverlay
        {
        public:
            uint8_t _pad0ac0[0x10]; // 0xac0
            source2sdk::client::CAttributeContainer m_AttributeManager; // 0xad0            
            bool m_bClientside; // 0xc10            
            uint8_t _pad0c11[0x3]; // 0xc11
            source2sdk::client::EconEntityParticleDisableMode_t m_nDisableMode; // 0xc14            
            bool m_bParticleSystemsCreated; // 0xc18            
            bool m_bForceDestroyAttachedParticlesImmediately; // 0xc19            
            uint8_t _pad0c1a[0x6]; // 0xc1a
            // m_vecAttachedParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_EconEntity_AttachedParticleInfo_t> m_vecAttachedParticles;
            char m_vecAttachedParticles[0x18]; // 0xc20            
            // m_hViewmodelAttachment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimatingActivity> m_hViewmodelAttachment;
            char m_hViewmodelAttachment[0x4]; // 0xc38            
            std::int32_t m_iOldTeam; // 0xc3c            
            bool m_bAttachmentDirty; // 0xc40            
            source2sdk::client::style_index_t m_iOldStyle; // 0xc41            
            uint8_t _pad0c42[0x2]; // 0xc42
            // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldProvidee;
            char m_hOldProvidee[0x4]; // 0xc44            
            // m_vecAttachedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_EconEntity_AttachedModelData_t> m_vecAttachedModels;
            char m_vecAttachedModels[0x18]; // 0xc48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EconEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EconEntity) == 0xc60);
    };
};
