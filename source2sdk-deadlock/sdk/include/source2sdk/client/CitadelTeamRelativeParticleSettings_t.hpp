#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/ParticleAttachment_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Standard-layout class: true
        // Size: 0x30
        // 
        // static metadata: MModelGameData
        // static metadata: MFgdHelper
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelTeamRelativeParticleSettings_t
        {
        public:
            // m_strFriendlyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_strFriendlyParticle;
            char m_strFriendlyParticle[0x8]; // 0x0            
            // m_strEnemyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_strEnemyParticle;
            char m_strEnemyParticle[0x8]; // 0x8            
            bool m_bUseConfig; // 0x10            
            uint8_t _pad0011[0x7]; // 0x11
            // metadata: MPropertySuppressExpr "!m_bUseConfig"
            CUtlString m_strConfigName; // 0x18            
            // metadata: MPropertySuppressExpr "m_bUseConfig"
            source2sdk::animationsystem::ParticleAttachment_t m_AttachmentType; // 0x20            
            uint8_t _pad0024[0x4]; // 0x24
            // metadata: MPropertySuppressExpr "m_bUseConfig || ( m_AttachmentType != PATTACH_POINT && m_AttachmentType != PATTACH_POINT_FOLLOW )"
            // metadata: MPropertyCustomFGDType "model_attachment"
            CUtlString m_strAttachmentName; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelTeamRelativeParticleSettings_t, m_strFriendlyParticle) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelTeamRelativeParticleSettings_t, m_strEnemyParticle) == 0x8);
        static_assert(offsetof(source2sdk::client::CitadelTeamRelativeParticleSettings_t, m_bUseConfig) == 0x10);
        static_assert(offsetof(source2sdk::client::CitadelTeamRelativeParticleSettings_t, m_strConfigName) == 0x18);
        static_assert(offsetof(source2sdk::client::CitadelTeamRelativeParticleSettings_t, m_AttachmentType) == 0x20);
        static_assert(offsetof(source2sdk::client::CitadelTeamRelativeParticleSettings_t, m_strAttachmentName) == 0x28);
        
        static_assert(sizeof(source2sdk::client::CitadelTeamRelativeParticleSettings_t) == 0x30);
    };
};
