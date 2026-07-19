#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CTriggerOnce.hpp"
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
        // Size: 0x968
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerLook : public source2sdk::server::CTriggerOnce
        {
        public:
            // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLookTarget;
            char m_hLookTarget[0x4]; // 0x900            
            float m_flFieldOfView; // 0x904            
            float m_flLookTime; // 0x908            
            float m_flLookTimeTotal; // 0x90c            
            source2sdk::entity2::GameTime_t m_flLookTimeLast; // 0x910            
            float m_flTimeoutDuration; // 0x914            
            bool m_bTimeoutFired; // 0x918            
            bool m_bIsLooking; // 0x919            
            bool m_b2DFOV; // 0x91a            
            bool m_bUseVelocity; // 0x91b            
            bool m_bTestOcclusion; // 0x91c            
            bool m_bTestAllVisibleOcclusion; // 0x91d            
            uint8_t _pad091e[0x2]; // 0x91e
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0x920            
            source2sdk::entity2::CEntityIOOutput m_OnStartLook; // 0x938            
            source2sdk::entity2::CEntityIOOutput m_OnEndLook; // 0x950            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerLook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerLook) == 0x968);
    };
};
