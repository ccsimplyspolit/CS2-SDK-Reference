#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/NPCAttachmentSpawnKV_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        // Size: 0x120
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct NPCAttachmentDesc_t
        {
        public:
            CUtlString m_sAttachmentName; // 0x0            
            CUtlString m_sEntityName; // 0x8            
            Vector m_vOffset; // 0x10            
            QAngle m_aAngOffset; // 0x1c            
            // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
            char m_sModelName[0xe0]; // 0x28            
            // m_vecSpawnKV has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::NPCAttachmentSpawnKV_t> m_vecSpawnKV;
            char m_vecSpawnKV[0x18]; // 0x108            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::NPCAttachmentDesc_t, m_sAttachmentName) == 0x0);
        static_assert(offsetof(source2sdk::client::NPCAttachmentDesc_t, m_sEntityName) == 0x8);
        static_assert(offsetof(source2sdk::client::NPCAttachmentDesc_t, m_vOffset) == 0x10);
        static_assert(offsetof(source2sdk::client::NPCAttachmentDesc_t, m_aAngOffset) == 0x1c);
        static_assert(offsetof(source2sdk::client::NPCAttachmentDesc_t, m_sModelName) == 0x28);
        static_assert(offsetof(source2sdk::client::NPCAttachmentDesc_t, m_vecSpawnKV) == 0x108);
        
        static_assert(sizeof(source2sdk::client::NPCAttachmentDesc_t) == 0x120);
    };
};
