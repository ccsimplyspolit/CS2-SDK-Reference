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
        // Size: 0x928
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerPush : public source2sdk::server::CBaseTrigger
        {
        public:
            QAngle m_angPushEntitySpace; // 0x8f0            
            Vector m_vecPushDirEntitySpace; // 0x8fc            
            bool m_bTriggerOnStartTouch; // 0x908            
            bool m_bUsePathSimple; // 0x909            
            uint8_t _pad090a[0x6]; // 0x90a
            CUtlSymbolLarge m_iszPathSimpleName; // 0x910            
            // m_PathSimple has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathSimple> m_PathSimple;
            char m_PathSimple[0x4]; // 0x918            
            std::uint32_t m_splinePushType; // 0x91c            
            float m_flSpeed; // 0x920            
            uint8_t _pad0924[0x4];
            
            // Datamap fields:
            // Vector InputSetPushDirection; // 0x0
            // float InputSetPushSpeed; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerPush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerPush) == 0x928);
    };
};
