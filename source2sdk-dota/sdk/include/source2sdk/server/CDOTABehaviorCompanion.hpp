#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Standard-layout class: true
        // Size: 0x180
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorCompanion
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            // m_goalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_goalEntity;
            char m_goalEntity[0x4]; // 0x150            
            Vector m_vOffset; // 0x154            
            std::int32_t m_iRightOffset; // 0x160            
            std::int32_t m_iForwardOffset; // 0x164            
            source2sdk::server::CountdownTimer m_PositionFuzziness; // 0x168            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCompanion, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCompanion, m_goalEntity) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCompanion, m_vOffset) == 0x154);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCompanion, m_iRightOffset) == 0x160);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCompanion, m_iForwardOffset) == 0x164);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCompanion, m_PositionFuzziness) == 0x168);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorCompanion) == 0x180);
    };
};
