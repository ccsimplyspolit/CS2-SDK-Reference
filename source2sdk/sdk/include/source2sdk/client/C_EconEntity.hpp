#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/C_AttributeContainer.hpp"
#include "source2sdk/client/C_EconEntity_AttachedModelData_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimGraph;
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
        // Size: 0x16f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_EconEntity : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad1180[0x10]; // 0x1180
            float m_flFlexDelayTime; // 0x1190            
            uint8_t _pad1194[0x4]; // 0x1194
            float* m_flFlexDelayedWeight; // 0x1198            
            bool m_bAttributesInitialized; // 0x11a0            
            uint8_t _pad11a1[0x7]; // 0x11a1
            source2sdk::client::C_AttributeContainer m_AttributeManager; // 0x11a8            
            std::uint32_t m_OriginalOwnerXuidLow; // 0x1678            
            std::uint32_t m_OriginalOwnerXuidHigh; // 0x167c            
            std::int32_t m_nFallbackPaintKit; // 0x1680            
            std::int32_t m_nFallbackSeed; // 0x1684            
            float m_flFallbackWear; // 0x1688            
            std::int32_t m_nFallbackStatTrak; // 0x168c            
            bool m_bClientside; // 0x1690            
            bool m_bParticleSystemsCreated; // 0x1691            
            uint8_t _pad1692[0x6]; // 0x1692
            // m_vecAttachedParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecAttachedParticles;
            char m_vecAttachedParticles[0x18]; // 0x1698            
            // m_hViewmodelAttachment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimGraph> m_hViewmodelAttachment;
            char m_hViewmodelAttachment[0x4]; // 0x16b0            
            std::int32_t m_iOldTeam; // 0x16b4            
            bool m_bAttachmentDirty; // 0x16b8            
            uint8_t _pad16b9[0x3]; // 0x16b9
            std::int32_t m_nUnloadedModelIndex; // 0x16bc            
            std::int32_t m_iNumOwnerValidationRetries; // 0x16c0            
            uint8_t _pad16c4[0xc]; // 0x16c4
            // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldProvidee;
            char m_hOldProvidee[0x4]; // 0x16d0            
            uint8_t _pad16d4[0x4]; // 0x16d4
            // m_vecAttachedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_EconEntity_AttachedModelData_t> m_vecAttachedModels;
            char m_vecAttachedModels[0x18]; // 0x16d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EconEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EconEntity) == 0x16f0);
    };
};
