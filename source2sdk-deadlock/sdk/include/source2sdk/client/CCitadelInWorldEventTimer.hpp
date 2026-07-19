#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointClientUIWorldPanel.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc40
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelInWorldEventTimer : public source2sdk::client::C_PointClientUIWorldPanel
        {
        public:
            // metadata: MNotSaved
            // m_hTrackedEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTrackedEntity;
            char m_hTrackedEntity[0x4]; // 0xc00            
            std::int32_t m_nTrackedEntity; // 0xc04            
            uint8_t _pad0c08[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelInWorldEventTimer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelInWorldEventTimer) == 0xc40);
    };
};
