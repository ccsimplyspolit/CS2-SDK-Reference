#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathSimple;
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
        // Size: 0x918
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerPush : public source2sdk::server::CBaseTrigger
        {
        public:
            QAngle m_angPushEntitySpace; // 0x8e0            
            Vector m_vecPushDirEntitySpace; // 0x8ec            
            bool m_bTriggerOnStartTouch; // 0x8f8            
            bool m_bUsePathSimple; // 0x8f9            
            uint8_t _pad08fa[0x6]; // 0x8fa
            CUtlSymbolLarge m_iszPathSimpleName; // 0x900            
            // metadata: MClassPtr
            source2sdk::server::CPathSimple* m_PathSimple; // 0x908            
            std::uint32_t m_splinePushType; // 0x910            
            uint8_t _pad0914[0x4];
            
            // Datamap fields:
            // Vector InputSetPushDirection; // 0x0
            // float InputSetPushSpeed; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerPush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerPush) == 0x918);
    };
};
