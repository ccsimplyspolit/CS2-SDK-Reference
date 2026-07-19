#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EntityAttachmentType_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf0
        // Has VTable
        #pragma pack(push, 1)
        class CGameModifier_OverrideTargetIdentifier : public source2sdk::server::CCitadelModifier
        {
        public:
            CGlobalSymbol m_sTargetIdentifier; // 0xd0            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xd8            
            source2sdk::client::EntityAttachmentType_t m_nOriginType; // 0xdc            
            CGlobalSymbol m_sAttachmentName; // 0xe0            
            source2sdk::modellib::AttachmentHandle_t m_hAttachment; // 0xe8            
            uint8_t _pad00e9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameModifier_OverrideTargetIdentifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGameModifier_OverrideTargetIdentifier) == 0xf0);
    };
};
