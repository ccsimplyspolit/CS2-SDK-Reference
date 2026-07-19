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
        // Size: 0xc10
        // Has VTable
        #pragma pack(push, 1)
        class CInWorldItemPanel : public source2sdk::client::C_PointClientUIWorldPanel
        {
        public:
            // metadata: MNotSaved
            // m_hTrackedEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTrackedEntity;
            char m_hTrackedEntity[0x4]; // 0xc00            
            std::int32_t m_nTrackedEntity; // 0xc04            
            uint8_t _pad0c08[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInWorldItemPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInWorldItemPanel) == 0xc10);
    };
};
