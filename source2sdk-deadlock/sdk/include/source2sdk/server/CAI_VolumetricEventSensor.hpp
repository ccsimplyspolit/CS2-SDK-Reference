#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/AI_VolumetricEventHandle_t.hpp"
#include "source2sdk/server/AI_VolumetricEventTypeMask_t.hpp"
#include "source2sdk/server/CAI_VolumetricEventSensor_OnStartedArgs_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
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
        // Size: 0x558
        // Has VTable
        #pragma pack(push, 1)
        class CAI_VolumetricEventSensor : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad04a0[0x10]; // 0x4a0
            bool m_bDisabled; // 0x4b0            
            uint8_t _pad04b1[0x7]; // 0x4b1
            source2sdk::server::AI_VolumetricEventTypeMask_t m_nEventTypeMask; // 0x4b8            
            float m_flSensitivity; // 0x4c0            
            float m_flMaxRange; // 0x4c4            
            CUtlSymbolLarge m_iszListenFilter; // 0x4c8            
            // m_hListenFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hListenFilter;
            char m_hListenFilter[0x4]; // 0x4d0            
            uint8_t _pad04d4[0x4]; // 0x4d4
            // m_hSensedEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::AI_VolumetricEventHandle_t> m_hSensedEvents;
            char m_hSensedEvents[0x18]; // 0x4d8            
            // m_OnEventStarted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<source2sdk::server::CAI_VolumetricEventSensor_OnStartedArgs_t> m_OnEventStarted;
            char m_OnEventStarted[0x30]; // 0x4f0            
            // m_OnEventEnded has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<source2sdk::server::AI_VolumetricEventHandle_t> m_OnEventEnded;
            char m_OnEventEnded[0x20]; // 0x520            
            source2sdk::entity2::CEntityIOOutput m_OnAllEventsEnded; // 0x540            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_VolumetricEventSensor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_VolumetricEventSensor) == 0x558);
    };
};
