#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/EntityAttachmentType_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe0
        // Has VTable
        #pragma pack(push, 1)
        class CGameModifier_OverrideTargetIdentifier : public source2sdk::client::CCitadelModifier
        {
        public:
            CGlobalSymbol m_sTargetIdentifier; // 0xc0            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xc8            
            source2sdk::client::EntityAttachmentType_t m_nOriginType; // 0xcc            
            CGlobalSymbol m_sAttachmentName; // 0xd0            
            source2sdk::modellib::AttachmentHandle_t m_hAttachment; // 0xd8            
            uint8_t _pad00d9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameModifier_OverrideTargetIdentifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CGameModifier_OverrideTargetIdentifier) == 0xe0);
    };
};
