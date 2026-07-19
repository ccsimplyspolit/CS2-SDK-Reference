#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadelPortalTrigger;
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
        // Size: 0xe8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Link : public source2sdk::client::CCitadelModifier
        {
        public:
            // m_hPortalToCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCitadelPortalTrigger> m_hPortalToCaster;
            char m_hPortalToCaster[0x4]; // 0xc0            
            source2sdk::entity2::GameTime_t m_flPortalStartTime; // 0xc4            
            source2sdk::entity2::GameTime_t m_flPortalEndTime; // 0xc8            
            uint8_t _pad00cc[0x4]; // 0xcc
            CUtlString m_sCasterAttachment; // 0xd0            
            CUtlString m_sParentAttachment; // 0xd8            
            uint8_t _pad00e0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Link because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Link) == 0xe8);
    };
};
