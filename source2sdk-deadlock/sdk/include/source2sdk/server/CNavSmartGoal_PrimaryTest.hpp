#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/INavSmartGoal.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x28
        // Has VTable
        #pragma pack(push, 1)
        class CNavSmartGoal_PrimaryTest : public source2sdk::server::INavSmartGoal
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x10            
            source2sdk::entity2::GameTime_t m_flTimeEnd; // 0x14            
            Vector m_vLastGoal; // 0x18            
            uint8_t _pad0024[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavSmartGoal_PrimaryTest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavSmartGoal_PrimaryTest) == 0x28);
    };
};
